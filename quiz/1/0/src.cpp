#include <iostream>
#include <vector>
using namespace std;
#define debug(var)  do{std::cout << #var << " : "; view(var);}while(0)
template<typename T> void view(const T e){ std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){ for(const auto& e : v) std::cout << e << " "; std::cout << std::endl; }
template<typename T> void view(const std::vector<std::vector<T>>& vv){ for(const auto& v : vv){ view(v); } }

vector<int> genVector(int size){
  vector<int> v(size);
  for(size_t i=0; i<size; ++i){
    v[i] = i;
  }
  return v;
}

int main(int argc, char **argv) {
  vector<string> args(argv, argv+argc);
  auto v = genVector(100);
  v.erase(v.begin()+50);
  sort(v.begin(), v.end());
  for(size_t i=1; i<v.size(); ++i){
    if(v[i-1]!=v[i]-1){
      cout << "Nothing number : " << v[i] << endl;
      return i;
    }
  }
  cout << "all number existing!" << endl;
  return 0;
}
