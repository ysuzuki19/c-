#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct st{
  int x;
  int y;
  int z;
};

int main(int argc, char *argv[]){
  vector<int> v;
  v.push_back(10);
  cout << "v[0] : " << v[0] << endl;

  vector<st> vs;
  st tmp = {1, 2, 3};
  vs.push_back(tmp);
  cout << "vs[0] : {" << vs[0].x << ", " << vs[0].y << ", " << vs[0].z << "}" << endl;
  

  return 0;
}
