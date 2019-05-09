#include <iostream>
#include <vector>
#include <string>
using namespace std;

//int main(int argc, char **argv){
int main(int argc, char **argv){
  vector<string> str(argv, argv + argc);
//  string str = to_string(argv[1]);
  vector<int> x (0);
  for(int i=0; i<str[1].length(); i++){
    x.push_back(argv[1][i] - '0');
  }

  for(int i=0; i<x.size(); i++){
    cout << x[i];
  }
  cout << endl;

  return 0;
}
