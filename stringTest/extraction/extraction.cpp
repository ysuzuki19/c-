#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv){
  string str;
  str = "Hello World!";
  cout << "str  : " << str << endl;
  string ext1;
  ext1 = str.substr(0);
  cout << "ext1 : " << ext1 << endl;
  string ext2;
  ext2 = str.substr(6);
  cout << "ext2 : " << ext2 << endl;
  string ext3;
  ext3 = str.substr(0, 5);
  cout << "ext3 : " << ext3 << endl;
  string ext4;
  ext4 = str.substr(6, 5);
  cout << "ext4 : " << ext4 << endl;
}
