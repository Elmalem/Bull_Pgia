#include<iostream>
#include "Guesser.hpp"

using namespace std;

namespace bullpgia{
  class SmartGuesser: public bullpgia::Guesser{

    private :
    string myGuess;
    // to learn the solutions
    uint bull=0;
    uint pgia=0;
    // to know what the game position
    int length=myGuess.length();
    bool game_on=false;
    bool founddigit=false;
    string solution="";
    int ans[4]={-1,-1,-1,-1};
    int guesserhelper=-1;
    int counter=0;
    public :
    SmartGuesser(){
    }
    SmartGuesser(const string& temp){
      myGuess = temp;
      bull = 0;
      pgia = 0;
      game_on = false;
      uint length;
    }
    ~SmartGuesser(){}
    void learn(string solutions) override;
    string guess() override;
    void startNewGame(uint length) override;

  };
};
