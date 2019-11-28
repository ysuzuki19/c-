#include <iostream>
#include <vector>

#include <genVector.hpp>
#include <template.hpp>
using namespace std;

constexpr size_t arSize = 50;
//constexpr size_t arSize = 100;
//constexpr size_t arSize = 1000;
constexpr int rndMax = 100;

template<typename T> void quickSort(std::vector<T>& v, const int left, const int right){
  if(right - left < 1) return ;
  auto central = v[(right-left)/2];
  auto pivot = central;
  if(v[left]<v[right]){
    if(v[left]<central){
      if(central<v[right]){
      }else{
        pivot = v[right];
      }
    }else{
      pivot = v[left];
    }
  }else{
    if(central<v[right]){
      pivot = v[right];
    }else{
      if(v[left]<central){
        pivot = v[left];
      }else{
      }
    }
  }
  int i = left, j = right;
  while(1){
    while(v[i]<pivot) i++;
    while(pivot<v[j]) j--;
    if(i >= j) break;
    swap(v[i],v[j]);
    i++;
    j--;
  }
  if(right - left < 2) return ;
  quickSort(v, left, i-1);
  quickSort(v, j+1, right);
}

template<class Iterator> void quickSort(const Iterator& begin, const Iterator& end){
  if(end - begin < 2 ) return;
  auto left = begin;
  auto right = end-1;
  auto central = left + distance(left, right)/2;
  auto pivot = *central;
  if(*left<*right){
    if(*left<*central){
      if(*central>*right){
        pivot = *right;
      }
    }else{
      pivot = *left;
    }
  }else{
    if(*central<*right){
      pivot = *right;
    }else{
      if(*left<*central){
        pivot = *left;
      }else{
      }
    }
  }
  auto i = left;
  auto j = right;
  while(1){
    while(*i<pivot) i++;
    while(pivot<*j) j--;
    if(i >= j) break;
    iter_swap(i,j);
    i++;
    j--;
  }
  if(end - begin <= 2) return ;
  if(i-begin>1)quickSort(begin, i);
  if(end-j>1)quickSort(j+1, end);
}

template<typename T> bool alignmentCheck(vector<T>& v){
  bool alignment = true;
  for(size_t i=1; i<v.size(); ++i){
    if(v[i-1]>v[i]) alignment = false;
  }
  return alignment;
}

int main(int argc, char **argv) {
  vector<string> args(argv, argv+argc);
  auto v = genVectorByRandom(arSize, rndMax);
  debug(v);
  cout << (alignmentCheck(v)? "OK" : "NG" ) << endl;
  auto vTemp = v;
  quickSort(vTemp, 0, vTemp.size()-1);
  debug(vTemp);
  cout << (alignmentCheck(vTemp)? "OK" : "NG" ) << endl;
  vTemp = v;
  quickSort(vTemp.begin(), vTemp.end());
  debug(vTemp);
  cout << (alignmentCheck(vTemp)? "OK" : "NG" ) << endl;

  return 0;
}

