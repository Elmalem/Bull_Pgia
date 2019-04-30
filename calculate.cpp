#include <string>
#include"calculate.hpp"
using namespace std;
using namespace bullpgia;

string bullpgia::calculateBullAndPgia(const string choice,const string guess){
  int bull = 0,pgia=0,i;
  string ans="";
  int arrchoice[10],arrguess[10];
  //if(choice.size()<guess.size()){
  //	for(int i=0;i<choice.size();i++){
//		ans+=guess.at(i);
//	}
  //}
  //else
	ans=guess;
  for (i=0;i<10;i++){
    arrchoice[i]=0,arrguess[i]=0;
  }
  for(i=0;i<choice.length();i++){
    if(choice[i]==ans[i])
      bull++;
  }
  for(i=0;i<choice.length();i++){
    int temp=(choice[i])-'0';
    arrchoice[temp]++;
  }
  for (i=0;i<ans.length();i++){
    int temp=(ans[i])-'0';
    arrguess[temp]++;
  }
  for (i=0;i<10;i++){
    pgia+=min(arrchoice[i],arrguess[i]);
  }
  pgia-=bull;
  return to_string(bull) + "," + to_string(pgia);
}
