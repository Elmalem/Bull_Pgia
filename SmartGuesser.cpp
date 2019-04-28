#include <string>
#include "SmartGuesser.hpp"
using namespace std;

void bullpgia::SmartGuesser:: learn(string solutions) {
  size_t i = solutions.find(',');
  int x = stoi(solutions.substr(0,i));
  int y = stoi(solutions.substr(i+1,solutions.length()));
  if(!founddigit){
    try
    {
      if(y>0){
        for(int i=0;i<y;i++){
          solution+=to_string(guesserhelper);
      }
    }
    }catch(const std::exception& e){
      std::cerr << e.what() << '\n';
    }
    bull = x;
    pgia += y;
    if(pgia=4){
      founddigit=true;
      bull=0,pgia=0,guesserhelper=-1;
    }
    guesserhelper++;
  }
  else if(x==4){
    bull = 4;
    myGuess=to_string(ans[0])+to_string(ans[1])+to_string(ans[2])+to_string(ans[3]);
  }
  else {
    if(x>0){
      ans[guesserhelper]=solution.at(counter)-'0';
      guesserhelper++;
      counter++%4;
    }
  }
}
string bullpgia::SmartGuesser:: guess(){
  myGuess="";
  int turns=0;
    if(!founddigit&&pgia<4){
      for(int i=0;i<4;i++){
        myGuess+=to_string(guesserhelper);
      }
    }
    else if(bull==4){
      game_on=false;
      return myGuess;
    }
    else{
      if(ans[guesserhelper]==-1){
        for(int i=0;i<guesserhelper;i++){
          myGuess+="a";
        }
        myGuess+=to_string(solution.at(counter));
      }
    }
    turns++;
    return myGuess;
}
void bullpgia::SmartGuesser:: startNewGame(uint length) {
  game_on = true;
}