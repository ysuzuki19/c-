//共通言語ランタイムサポートを使用しない
#include <iostream>
#include <iomanip>
#include <thread>
using namespace std;

//3の倍数+1となる数だけを調べる
void th_A()
{
  char ch;
//  for (int n=0; n<5; n++) {
//    cout<<n<<' ';
  while(1){
    cin.clear();
    cin >> setw(1) >> ch;
//    cin.ignore(1, ' ');
    cout << endl << ch << endl;
  }
//  }
}

//3の倍数+2となる数だけを調べる
void th_B()
{
//  for (int n=0; n<5; n++) {
//    cout<<n<<' ';
//  }
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

