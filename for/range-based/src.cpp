#include <iostream>
#include <vector>
using namespace std;

void view(const vector<vector<int>>& vv){
  for(const auto& v : vv){
    for(const auto& e : v){
      cout << e << " ";
    }
    cout << endl;
  }
}


int main(int argc, char **argv){
  vector<vector<int>> vv(10, vector<int>(10));
  for(int i=0; i<vv.size(); i++){
    for(int j=0; j<vv[i].size(); j++){
      vv[i][j] = i+j;
    }
  }
  cout << "v was initialized. " << endl;
  view(vv);
  return 0;
}
