#include <bits/stdc++.h>
using namespace std;
#define _ << ' ' <<
#define squ(x)  ((x) * (x))
#define debug(var)  do{std::cout << #var << " : "; view(var);}while(0)
#define _max(v)  *max_element(v.begin(), v.end())
#define _min(v)  *min_element(v.begin(), v.end())
#define _sort(var)  std::sort(var.begin(), var.end());
#define _rsort(var)  std::sort(var.begin(), var.end(), std::greater<>());
using ll = long long;
int gcd(int m, int n){return !n ? m : gcd(n, m%n);}
template<typename T> using V = std::vector<T>;
template<typename T> using VV = std::vector<std::vector<T>>;
template<typename T> using VVV = std::vector<std::vector<std::vector<T>>>;
template<typename T> void view(const T e){ std::cout << e << std::endl;}
template<typename T> void view(const vector<T>& v){ for(const auto& e : v) std::cout << e << " "; std::cout << std::endl; }
template<typename T> void view(const VV<T>& vv){ for(const auto& v : vv){ view(v); } }

//vector<int> ar = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};
vector<int> ar = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};// nothing 68

int main(int argc, char **argv) {
  vector<string> args(argv, argv+argc);
//  ifstream fin(args[1]);
//  cout << args[1] << endl;
//  int n;
//  fin >> n;
//  cout << n << endl;
  for(int i=0; i<100; ++i){
    cout << i+1 << ", ";
  }
  cout << endl;
  return 0;
}
