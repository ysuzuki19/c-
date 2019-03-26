#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <thread>
using namespace std;

string filename = "field.txt";

int displayString(vector<string>);
int displayChar(vector<vector<char> >);

int main(int argc, char **argv){
  vector<string> args(argv, argv+argc);
  const int sleepTime = 10;

  ifstream ifs(filename);
  vector<string> tempString(1);
  int i = 0;
  while(getline(ifs,tempString[i])){
    tempString.push_back("");
    i++;
  }
  tempString.pop_back();

  vector<vector<char> > field(tempString.size(), vector<char>(tempString[0].size(), ' '));;
  for(int i=0; i<tempString.size(); i++){
    for(int j=0; j<tempString[0].size(); j++){
      field[i][j] = tempString[i][j];
    }
  }

  while(1){
    system("clear");
    displayChar(field);
    if(cin >> key){

    this_thread::sleep_for(chrono::milliseconds(sleepTime);
  }

  return 0;
}


int displayString(vector<string> str){
  for(int i=0; i<str.size(); i++){
    cout << str[i] << endl;
  }
  return 0;
}

int displayChar(vector<vector<char> > cha){
  for(int i=0; i<cha.size(); i++){
    for(int j=0; j<cha.front().size(); j++){
      cout << cha[i][j];
    }
    cout << endl;
  }
  return 0;
}
