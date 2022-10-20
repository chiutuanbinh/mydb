#include <string>
#include <tkrzw_dbm_poly.h>

using std::string;
class DataModel
{
public:
    DataModel(const string& dbPath);
    ~DataModel();
    int get(const string& key, string& value);
    int set(const string& key, const string& value);
private:
    tkrzw::PolyDBM dbm_;
};