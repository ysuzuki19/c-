#include <iostream>
#include <cmath>
using namespace std;

int main(){
  for(double x=10000000000; ; x/=10){
    cout << x << " " << log(x) << endl;
  }
  return 0;
}
