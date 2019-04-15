#ifndef GUESSER_HPP
#define GUESSER_HPP

#include <string>

using namespace std;

namespace bullpgia{

  class Guesser{
  public:
    // variabales
    uint length;

    // functions
    
    void startNewGame(uint length);
    virtual string guess();
    void learn(string solutions);
  };
};

#endif GUSSER_HPP
