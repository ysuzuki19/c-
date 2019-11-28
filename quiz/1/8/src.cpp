#include <iostream>
#include <vector>

#include <genVector.hpp>
#include <template.hpp>
using namespace std;

constexpr size_t arSize = 10;
constexpr int rndMax = 10;

template <typename T> void reverse (vector<T>& v){
  for(size_t i=0; i<v.size()/2; ++i){
    swap(v[i], v[v.size()-1-i]);
  }
}

int main(int argc, char **argv) {
  vector<string> args(argv, argv+argc);
  auto v = genVectorByRandom(arSize, rndMax);
  view(v);
  reverse(v);
  view(v);

  return 0;
}
