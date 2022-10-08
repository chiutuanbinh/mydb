package dbm

import (
	"fmt"

	"github.com/estraier/tkrzw-go"
)

func Foo() {
	// Prepares the database.
	dbm := tkrzw.NewDBM()
	dbm.Open("casket.tkh", true,
		tkrzw.ParseParams("truncate=true,num_buckets=100"))

	// Sets records.
	// Keys and values are implicitly converted into bytes.
	dbm.Set("first", "hop", true)
	dbm.Set("second", "step", true)
	dbm.Set("third", "jump", true)

	// Retrieves record values as strings.
	fmt.Println(dbm.GetStrSimple("first", "*"))
	fmt.Println(dbm.GetStrSimple("second", "*"))
	fmt.Println(dbm.GetStrSimple("third", "*"))

	// Checks and deletes a record.
	if dbm.Check("first") {
		dbm.Remove("first")
	}

	// Traverses records with a range over a channel.
	for record := range dbm.EachStr() {
		fmt.Println(record.Key, record.Value)
	}

	// Closes the database.
	dbm.Close()
}
