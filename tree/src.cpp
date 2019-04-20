#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main(){
  while(1){
    system("clear");
    system("tree");
    this_thread::sleep_for(chrono::milliseconds(100));
  }
  return 0;
}
