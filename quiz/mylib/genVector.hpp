#ifndef _CPP_VECTOR
#include <vector>
#endif

#ifndef _CPP_RANDOM
#include <random>
#endif

std::vector<int> genVectorByOrder(size_t size){
  std::vector<int> v(size);
  for(size_t i=0; i<size; ++i){
    v[i] = i;
  }
  return v;
}

std::vector<int> genVectorByRandom(size_t size){
  std::mt19937 mt{ std::random_device{}() };
  std::uniform_int_distribution<int> rnd(0, 100);
  std::vector<int> v(size);
  for(size_t i=0; i<size; ++i){
    v[i] = rnd(mt);
  }
  return v;
}

std::vector<int> genVectorByRandom(size_t size, int rndMax){
  std::mt19937 mt{ std::random_device{}() };
  std::uniform_int_distribution<int> rnd(0, rndMax);
  std::vector<int> v(size);
  for(size_t i=0; i<size; ++i){
    v[i] = rnd(mt);
  }
  return v;
}
