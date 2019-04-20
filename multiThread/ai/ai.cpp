#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
using namespace std;

unsigned long long ai = 1;
atomic<bool> flag(true);
mutex mtx;

void man()
{
  while(1){
    while(flag){
      this_thread::yield();
    }
    unique_lock lock(mtx);
    ai *= 2;
    cout << "man   : 'I love you twice  as much as you. ' ---> Now ai is " << ai << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    flag = false;
    if(ai == 0){
      break;
    }
  }
}

void woman()
{
  while(1){
    while(!flag){
      this_thread::yield();
    }
    unique_lock lock(mtx);
    ai *= 3;
    cout << "woman : 'I love you thrice as much as you. ' ---> Now ai is " << ai << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    flag = true;
    if(ai == 0){
      break;
    }
  }
}

int main()
{
  thread threadA(man);
  thread threadB(woman);
  threadA.join();
  threadB.join();
  return 0;
}
