
#pragma once
#include <string>

using namespace std;

namespace bullpgia{

  class Guesser{
  private:
    string myGuess;
  public:
    Guesser(){
      myGuess = "";
    }
    Guesser(const string& temp){
      myGuess = temp;
    }
    virtual ~Guesser(){}
    // variabales
    uint length;
    // functions
    virtual void startNewGame(uint length){}
    virtual string guess() = 0;
    virtual void learn(string solutions){}

  };
};
