#include <iostream>
#include <tuple>
using namespace std;

tuple<char, int> tp (char c, int n){
  return forward_as_tuple(c, n++);
}

int main(int argc, char **argv){
  char c = 'a';
  int n = 0;

  tie(c, n) = tp(c, n);
  cout << c << " " << n << endl;

  return 0;
}
