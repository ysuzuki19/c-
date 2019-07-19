#include <iostream>
using namespace std;

#define _check(var) do{std::cout << #var << " = " << var << std::endl;}while(0)

int main(){
  int a = 1, b = 2;
  _check(a);
  _check(b);
  _check(a+b);
  _check(a+b);
  _check(a*b);
  _check(a/b);
  _check(a%b);
  _check((a^b));

  return 0;
}
