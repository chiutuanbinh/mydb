#include "data.hpp"
using tkrzw::Status;
DataModel::DataModel(const string& dbPath){
    dbm_.Open(dbPath, true);
}

DataModel::~DataModel(){
    dbm_.Close();
}

int DataModel::get(const string& key, string& value){
    Status status = dbm_.Get(key, &value);
    return status.GetCode();
}

int DataModel::set(const string& key, const string& value){
    Status status = dbm_.Set(key, value);
    return status.GetCode();
}