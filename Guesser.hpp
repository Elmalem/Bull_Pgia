#pragma once
#include <string>
#include "calculate.hpp"

using namespace std;

namespace bullpgia{
  class Guesser{
  private:
    string myGuess;
  protected:
    string my(){return myGuess;}
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