#include <string>
#include "SmartGuesser.hpp"

using namespace std;

// exapmle for it - "4,0" present 4 bull and 0 pgia
void bullpgia::SmartGuesser:: learn(string solutions) { // learn() get the "bull,pgia" format string
  size_t i = solutions.find(','); // the seperator
  int x = stoi(solutions.substr(0,i)); // bulls
  int y = stoi(solutions.substr(i+1,solutions.length())); // pgias
  bull += x; // add to the private member(bull)
  pgia += y; // add to the private m  ember(pgia)
  game_on = false; // we finished the round
}

void bullpgia::SmartGuesser:: startNewGame(uint length) {
  game_on = true; // game on
}

string bullpgia::SmartGuesser:: guess(){ // it's a smart guess ,according to bull and pgia we will know what we need to guess
  if(!game_on){ // if it's time to guess now
    switch (bull) {
      case 1:{

        break;
      }
      case 2:{

        break;
      }
      case 3:{

        break;
      }
      case 4:{

        break;
      }
    }
    return "1234";}
  else{return "sorry,wait for the end of the round";} // it's no a game time
}
