#include <string>
#include <iostream>
#include"calculate.hpp"

using namespace std;

string bullpgia::calculateBullAndPgia(const string& choice,const string& guess){
  int bull = 0;
  int pgia = 0;
  for (size_t i = 0; i < choice.length(); i++) {
    for (size_t j = 0; j < guess.length(); j++) {
      if( i == j && choice[i] == guess[j])
      bull++;
      else if( i != j && choice[i] == guess[j])
      pgia++;
    }
  }
  string ans = to_string(bull) + "," + to_string(pgia);
  return ans;
}
