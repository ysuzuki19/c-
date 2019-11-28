#include <map>
#include <iostream>
using namespace std;

int main(int argc, char **argv){
  map<string, int> mp;
  mp.insert(make_pair("key1", 10));
  mp.insert(make_pair("key2", 20));

  auto value = mp.at("key1");
  cout << value << endl;
  return 0;
}
