#include <iostream>
using namespace std;

int main() {

  bool isMale = true;
  bool isTall = false;
  
  if(isMale && isTall){
    cout << "You are a tall male";
  }
  else if(isMale && !isTall){
    cout << "hobbit";
  }
  else{
    cout << "who are you?";
  }
  
  return 0;
}

//&& = and
//|| = or
