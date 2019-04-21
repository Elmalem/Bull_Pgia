#include<iostream>
#include "Guesser.hpp"

using namespace std;

namespace bullpgia{
  class SmartGuesser: public bullpgia::Guesser{

    private :
    string myGuess;
    // to learn the solutions
    uint bull;
    uint pgia;
    // to know what the game position
    bool game_on;

    public :
    uint length;
    SmartGuesser(){
      bull = 0;
      pgia = 0;
      game_on = false;
    }
    SmartGuesser(const string& temp){
      myGuess = temp;
      bull = 0;
      pgia = 0;
      game_on = false;
    }
    ~SmartGuesser(){}
    void learn(string solutions) override;
    string guess() override;
    void startNewGame(uint length) override;

  };
};
