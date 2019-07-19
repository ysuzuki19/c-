#include <iostream>
#include <fstream>
using namespace std;
constexpr double rate = 0.04;

#define debug(var)  do{std::cout << #var << " : "; view(var);}while(0)
template<typename T> void view(const vector<T>& v){ for(const auto& e : v) std::cout << e << " "; std::cout << std::endl; }

int main() {
  double sortTime;
  std::chrono::system_clock::time_point timeStt, timeEnd;

  ifstream bubblefin ("bubble.txt");
  ifstream selectionfin ("selection.txt");
  ifstream shakerfin ("shaker.txt");
  ifstream combfin ("comb.txt");
  ifstream normfin ("norm.txt");
  ifstream shellfin ("shell.txt");

  ofstream bubblefout ("bubble_lpf.txt");
  ofstream selectionfout ("selection_lpf.txt");
  ofstream shakerfout ("shaker_lpf.txt");
  ofstream combfout ("comb_lpf.txt");
  ofstream normfout ("norm_lpf.txt");
  ofstream shellfout ("shell_lpf.txt");

  int i;
  double lpf;
  double lpf_old;

  lpf_old = 0.0;
  bubblefin >> i >> lpf;
  for(int i=11; i<=5000; ++i){
    bubblefin >> i >> lpf;
    lpf = rate*lpf + (1.0-rate)*lpf_old;
    bubblefout << i << " " << lpf << endl;
    lpf_old = lpf;
  }

  lpf_old = 0.0;
  selectionfin >> i >> lpf;
  for(int i=11; i<=5000; ++i){
    selectionfin >> i >> lpf;
    lpf = rate*lpf + (1.0-rate)*lpf_old;
    selectionfout << i << " " << lpf << endl;
    lpf_old = lpf;
  }

  lpf_old = 0.0;
  shakerfin >> i >> lpf;
  for(int i=11; i<=5000; ++i){
    shakerfin >> i >> lpf;
    lpf = rate*lpf + (1.0-rate)*lpf_old;
    shakerfout << i << " " << lpf << endl;
    lpf_old = lpf;
  }

  lpf_old = 0.0;
  combfin >> i >> lpf;
  for(int i=11; i<=5000; ++i){
    combfin >> i >> lpf;
    lpf = rate*lpf + (1.0-rate)*lpf_old;
    combfout << i << " " << lpf << endl;
    lpf_old = lpf;
  }

  lpf_old = 0.0;
  normfin >> i >> lpf;
  for(int i=11; i<=5000; ++i){
    normfin >> i >> lpf;
    lpf = rate*lpf + (1.0-rate)*lpf_old;
    normfout << i << " " << lpf << endl;
    lpf_old = lpf;
  }

  lpf_old = 0.0;
  shellfin >> i >> lpf;
  for(int i=11; i<=5000; ++i){
    shellfin >> i >> lpf;
    lpf = rate*lpf + (1.0-rate)*lpf_old;
    shellfout << i << " " << lpf << endl;
    lpf_old = lpf;
  }

  return 0;
}
