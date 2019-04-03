#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> initVector (){
  vector<int> tmp;
  for(int i=0; i<10; i++){
    tmp.push_back(i);
  }
  return tmp;
}

void displayVector(vector<int> v){
  for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]){
  vector<int> v;
  v = initVector();
  cout << "full" << endl;
  displayVector(v);

  v = initVector();
  v.erase(v.begin());
  cout << "erase begin" << endl;
  displayVector(v);

  v = initVector();
  v.erase(v.end()-1);
  cout << "erase end-1" << endl;
  displayVector(v);

  v = initVector();
  v.erase(v.begin()+5);
  cout << "erase begin+5" << endl;
  displayVector(v);

  return 0;
}
