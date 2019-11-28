#define debug(var)  do{std::cout << #var << " : "; view(var);}while(0)

#ifndef _CPP_VECTOR
#include <vector>
#endif
#ifndef _CPP_MAP
#include <map>
#endif
template<typename T> using V = std::vector<T>;
template<typename T> using VV = std::vector<std::vector<T>>;
template<typename T> using VVV = std::vector<std::vector<std::vector<T>>>;
template<typename T> void view(const T e){ std::cout << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){ for(const auto& e : v) std::cout << e << " "; std::cout << std::endl; }
template<typename T> void view(const VV<T>& vv){ for(const auto& v : vv){ view(v); } }
template<typename T1, typename T2> void view(const std::pair<T1,T2> e){ std::cout << "(" << e.first << ", " << e.second << ")" << std::endl;}
template<typename T1, typename T2> void view(const std::vector<std::pair<T1,T2>>& v){ for(const auto& e : v) std::cout << "(" << e.first << ", " << e.second << ") "; std::cout << std::endl; }
template<typename T1, typename T2> void view(const std::map<T1,T2>& v){ for(const auto& e : v) std::cout << "(" << e.first << ", " << e.second << ") "; std::cout << std::endl; }
template<class Iterator> void view(const Iterator& begin, const Iterator& end){ for(auto itr=begin; itr!=end; itr++) std::cout << *itr << " "; std::cout << std::endl; }
