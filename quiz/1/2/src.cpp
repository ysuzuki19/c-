#include <iostream>
#include <vector>

#include <genVector.hpp>
#include <template.hpp>

using namespace std;
int main(int argc, char **argv) {
  vector<string> args(argv, argv+argc);
  auto v = genVectorByRandom(10);
  debug(v);
  int minNum = v[0];
  int maxNum = v[0];
  for(const auto& e : v){
    minNum = min(minNum, e);
    maxNum = max(maxNum, e);
  }
  cout << "max number : " << maxNum << endl;
  cout << "min number : " << minNum << endl;
  return 0;
}
