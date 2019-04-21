#include <string>

// #include "Chooser.hpp"
using namespace bullpgia;
using namespace std;

<<<<<<< HEAD
=======
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

>>>>>>> f7f40dd72165a6e84680348f8f9646e2a7c26dda
uint Chooser::length(){
  return myChoose.length;
}
