//共通言語ランタイムサポートを使用しない
#include <iostream>
#include <iomanip>
#include <thread>
using namespace std;

void th_A()
{
  char ch;
  while(1){
    cin.clear();
    cin >> setw(1) >> ch;
    cout << endl << ch << endl;
  }
}

void th_B()
{
  const int sleepTime = 1000;
  while(1){
    cout << "Please put key ..." << endl;
    this_thread::sleep_for(chrono::milliseconds(sleepTime));
  }
}

int main()
{
  thread threadA(th_A);
  thread threadB(th_B);

  //スレッドの終了を待つ
  threadA.join();
  threadB.join();
}

