#include <iostream>
#include <vector>

using namespace std;
template<typename T> void view(const T e){ std::cout << e << std::endl;}
template<typename T> void view(const vector<T>& v){ for(const auto& e : v) std::cout << e << " "; std::cout << std::endl; }
template<typename T> void view(const vector<vector<T>>& vv){ for(const auto& v : vv){ view(v); } }

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
  v.push_back(49);
  sort(v.begin(), v.end());
  for(size_t i=1; i<v.size(); ++i){
    if(v[i-1]==v[i]){
      cout << "Duplicate number : " << v[i] << endl;
      return i;
    }
  }
  cout << "Nothing duplicate number!" << endl;
  return 0;
}
