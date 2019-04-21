#include <string>

// #include "Chooser.hpp"
using namespace bullpgia;
using namespace std;

string Chooser::choose(uint length){
  string ans = "";
  int x;
  x = rand() % 10;
  int y;
  do{
    y = rand() % 10;
    if(ans.length() < 4){
      ans += to_string(y);
    }
  }
  while(x == y);
  return ans;
}

uint Chooser::length(){
  return myChoose.length;
}
