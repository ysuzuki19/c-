#include <iostream>
#include <vector>

#include <genVector.hpp>
#include <template.hpp>
using namespace std;

constexpr size_t arSize = 10;
constexpr int rndMax = 10;

template <typename T> void duplicateTo0 (vector<T>& v){
  size_t i, j;
  for(i=0; i<v.size(); ++i){
    for(j=i+1; j<v.size() && v[i]==v[j]; ++j){
      v[j] = 0;
    }
    i = j - 1;
  }
}

int main(int argc, char **argv) {
  vector<string> args(argv, argv+argc);
  auto v = genVectorByRandom(arSize, rndMax);
  view(v);
  sort(v.begin(), v.end());
  view(v);
  duplicateTo0(v);
  view(v);

  return 0;
}
