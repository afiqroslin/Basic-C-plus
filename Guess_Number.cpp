#include <iostream>
using namespace std;

int main() {
  int secretNum = 7;
  int guess;
  int counter = 0;

  while(secretNum != guess && counter != 3){
    cout << "Guess a number: ";
    cin >> guess;
    counter++;
    if(guess != secretNum && counter == 3){
      cout << "You lose!" << endl;
    }
    else if(guess != secretNum){
      cout << "Try again" << endl;
    }
    else if(secretNum == guess){
        cout << "Guess you are right...";
    }
  }

  return 0;
}



