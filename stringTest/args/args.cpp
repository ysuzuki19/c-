#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char **argv){
  vector<string> args (argv, argv + argc);
  for(int i=0; i<argc; i++){
    cout << args[i] << endl;
  }
}
