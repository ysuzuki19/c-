#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int ai = 1;

void man()
{
  ai *= 2;
  cout << "man   : 'I love you twice  as much as you. ' ---> Now ai is " << ai << endl;
}

void woman()
{
  ai *= 3;
  cout << "woman : 'I love you thrice as much as you. ' ---> Now ai is " << ai << endl;
}

int main()
{
  while(1){
  thread threadA(man);
  threadA.join();
  thread threadB(woman);
  threadB.join();
  std::this_thread::sleep_for(std::chrono::seconds(1));
  }
  return 0;
}

