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
  sort(v.begin(), v.end());
  debug(v);
  vector<int> duplicate;
  size_t i, j;
  for(i=0; i<v.size()-1; ++i){
    for(j=i; v[i]==v[j]; ++j){}
    if(v[i] == v[i+1]) duplicate.push_back(v[i]);
    i = j - 1;
  }
  debug(duplicate);
  return 0;
}
