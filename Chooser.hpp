#ifndef CHOOSER_HPP
#define CHOOSER_HPP

#include <string>

using namespace std;

namespace bullpgia{

  class Chooser{
  public :
    Chooser();
    virtual string choose(uint length);

  };
};

#endif CHOOSER_HPP
