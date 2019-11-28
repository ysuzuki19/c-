#ifndef _CPP_VECTOR
#include <vector>
#endif

template<class Iterator> void quickSort(const Iterator& begin, const Iterator& end){
  if(distance(begin, end) < 2 ) return;
  auto left = begin;
  auto right = end-1;
  auto central = left + distance(left, right)/2;
  auto pivot = *central;
  if(*left<*right){
    if(*left<*central){
      if(*central<*right){
        //pivot = central;
      }else{
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
        //pivot = central;
      }
    }
  }
  auto i = left;
  auto j = right;
  while(1){
    while(*i<pivot) i++;
    while(pivot<*j) j--;
    if(distance(i, j) <= 0) break;
    swap(*i,*j);
    i++;
    j--;
  }
  quickSort(begin, i);
  quickSort(j+1, end);
}

template<typename T> void quickSort(std::vector<T>& v, const int left, const int right){
  if(left < right){
    auto central = v[left] + v[(right-left)/2];
    auto pivot = central;
    if(v[left]<v[right]){
      if(v[left]<central){
        if(central<v[right]){
          //pivot = central;
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
          //pivot = central;
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
    quickSort(v, left, i-1);
    quickSort(v, j+1, right);
  }
}

