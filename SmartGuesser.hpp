#include<iostream>
#include "Guesser.hpp"

using namespace std;
// using namespace bullpgia;

namespace bullpgia{
  class SmartGuesser: public bullpgia::Guesser{

    private :
    string myGuess;

    public :
    uint length;
    SmartGuesser(){

    }
    SmartGuesser(const string& temp){
      myGuess = temp;
    }
    ~SmartGuesser(){}
    void learn(string solutions) override;
    string guess() override;
    void startNewGame(uint length) override;

  };
};
