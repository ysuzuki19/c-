#include <iostream>
#include <vector>

#include <genVector.hpp>
#include <template.hpp>

constexpr size_t arSize = 50;
constexpr int rndMax = 100;

using namespace std;
int main(int argc, char **argv) {
  vector<string> args(argv, argv+argc);
  auto v = genVectorByRandom(arSize, rndMax);
  debug(v);
  auto vTemp = v;
  sort(vTemp.begin(), vTemp.end());
  map<int, int> duplicateMap;
  size_t i, j;
  for(i=0; i<vTemp.size()-1; ++i){
    for(j=i; vTemp[i]==vTemp[j]; ++j){}
    if(vTemp[i] == vTemp[i+1]) duplicateMap.emplace(vTemp[i], j-i);
    i = j - 1;
  }
  for(auto& e : duplicateMap) e.second = e.second - 1;
  for(i=v.size()-1; i<v.size(); --i){
    auto itr = duplicateMap.find(v[i]);
    if(itr!=duplicateMap.end()){
      if(duplicateMap[v[i]]!=0){
        duplicateMap[v[i]] = duplicateMap[v[i]]-1;
        v.erase(v.begin()+i);
      }
    }
  }
  cout << "duplicate number was erased!" << endl;
  debug(v);
  return 0;
}
