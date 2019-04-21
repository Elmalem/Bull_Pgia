#include <string>
#include "SmartGuesser.hpp"

using namespace std;

void bullpgia::SmartGuesser:: learn(string solutions) {
  size_t i = solutions.find(',');
  int x = stoi(solutions.substr(0,i));
  int y = stoi(solutions.substr(i+1,solutions.length()));
  bull += x;
  pgia += y;
  game_on = false;
}

void bullpgia::SmartGuesser:: startNewGame(uint length) {
  game_on = true;
}

string bullpgia::SmartGuesser:: guess(){
  if(!game_on){
    if(bull == 1){

    }
    else if(bull == 2){

    }
    else if(bull == 3){

    }
    else if(bull == 4){
      
    }
    return "1234";}
  else{return "sorry,wait for the end of the round";}
}
