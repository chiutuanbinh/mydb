#include <iostream>
#include <string>
#include "tkrzw_dbm_hash.h"
int main(int argc, char** argv) {
  tkrzw::HashDBM dbm;
  dbm.Open("casket.tkh", true).OrDie();
  dbm.Set("hello", "world").OrDie();
  std::string v = dbm.GetSimple("hello");
  std::cout << v << std::endl;
  std::cout << "WHTs"<<std::endl;
  std::cout<<"YOU";
  return 0;
}