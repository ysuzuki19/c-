#include <iostream>
#include <vector>
#include <string>
#include <random>
using namespace std;

vector<int> initVector (){
  vector<int> tmp;
  for(size_t i=0; i<10; i++){
    tmp.push_back(rand()%10);
  }
  return tmp;
}

void view(vector<int> v){
  for(const auto& e : v)
    cout << e << " ";
  cout << endl;
}

void view(vector<vector<int>> vv){
  for(const auto& v : vv){
    for(const auto& e : vv)
      cout << e << " ";
    cout << endl;
  }
}

int main(){
  vector<int> v;
  v = initVector();

  cout << "raw" << endl;
  view(v);

  return 0;
}
