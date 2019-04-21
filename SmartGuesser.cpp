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
string bullpgia::SmartGuesser:: guess(string choice){
    int turns=0;
    int digits[10];
    int founddig=0;
    while(turns<10 || founddig<4){
        string tempguess="";
        for(int i=0;i<4;i++){
            tempguess+=turns;
        }
        string choice="";
        string tries=calculateBullAndPgia(choice,tempguess);
    }
}
// string bullpgia::SmartGuesser:: guess(){
//   if(!game_on){
//     if(bull == 1){

//     }
//     else if(bull == 2){

//     }
//     else if(bull == 3){

//     }
//     else if(bull == 4){
      
//     }
//     return "1234";}
//   else{return "sorry,wait for the end of the round";}
// }