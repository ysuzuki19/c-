#include <iostream>
#include <vector>

#include <genVector.hpp>
#include <template.hpp>

constexpr size_t arSize = 50;
constexpr long givenNumber = 50;

using namespace std;
int main(int argc, char **argv) {
  vector<string> args(argv, argv+argc);
  auto v = genVectorByRandom(arSize);
  sort(v.begin(), v.end());
  debug(v);
  vector<pair<size_t,size_t>> pairs;
  size_t lower = 0;
  size_t upper = arSize-1;
  bool upFlag = false;
  bool downFlag = false;
  while(lower!=upper){
    long sumOfTwo = v[lower] + v[upper];
    if(sumOfTwo==givenNumber){
      pairs.emplace_back(v[lower], v[upper]);
      if(v[lower+1]+v[upper] == givenNumber && !upFlag){
        pairs.emplace_back(v[lower+1], v[upper]);
        upFlag = true;
      }else if(v[lower]+v[upper-1] == givenNumber && !downFlag){
        pairs.emplace_back(v[lower], v[upper-1]);
        downFlag = true;
      }else{
        upFlag = false;
        downFlag = false;
        lower++;
      }
    }else if(sumOfTwo<givenNumber){
      lower++;
    }else if(sumOfTwo>givenNumber){
      upper--;
    }
  }
  cout << "pattern of sum : " << pairs.size() << endl;
  view(pairs);
  return 0;
}
