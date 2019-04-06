#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
using namespace std;

unsigned long long ai = 1;
int flag = 1;
mutex mtx;

void man()
{
  do{
    unique_lock lock(mtx);
    if(lock.owns_lock()){
      if(flag == 1){
        ai *= 2;
        cout << "man   : 'I love you twice  as much as you. ' ---> Now ai is " << ai << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        flag = 0;
      }
    }
  }while(ai != 0);
}

void woman()
{
  do{
    unique_lock lock(mtx);
    if(lock.owns_lock()){
      if(flag == 0){
        ai *= 3;
        cout << "woman : 'I love you thrice as much as you. ' ---> Now ai is " << ai << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        flag = 1;
      }
    }
  }while(ai != 0);
}

int main()
{
  thread threadA(man);
  thread threadB(woman);
  threadA.join();
  threadB.join();
  return 0;
}

