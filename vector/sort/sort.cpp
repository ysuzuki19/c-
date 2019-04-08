#include <iostream>
#include <vector>
#include <string>
#include <random>
using namespace std;

vector<int> initVector (){
  vector<int> tmp;
  for(int i=0; i<10; i++){
    tmp.push_back(rand()%10);
  }
  return tmp;
}

void displayVector(vector<int> v){
  for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

int main(){
  vector<int> v;
  v = initVector();

  cout << "raw" << endl;
  displayVector(v);

  sort(v.begin(), v.end());
  cout << "ascending order" << endl;
  displayVector(v);

  sort(v.begin(), v.end(),greater<int>());
  cout << "descending order" << endl;
  displayVector(v);

  return 0;
}
