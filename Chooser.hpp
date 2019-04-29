
#pragma once
#include <string>

using namespace std;

namespace bullpgia{

  class Chooser{
  private:
    string myChoose;
  // protected:
    // string my(){return myChoose;}
  public:
    Chooser(){
      myChoose = "";
    }
    Chooser(const string& temp){
      myChoose = temp;
    }
    virtual ~Chooser(){}
    virtual string choose(uint length) = 0;
    uint length();
  };
};
