#include <iostream>
using namespace std;

int main() {

  // basic data type //

  string Name = "John";
  int Age = 26;
  char Grade = 'A';
  float Percentage = '100.0';
  double gpa = 3.4;   // More decimal point than float
  bool isMale = true; // true or false value

  cout << "Hi " << Name << "\nYour age is " << Age
       << endl; // endl = end line and continue next to new line

  cout << Name.length() << endl;

  string phrase = "Hello brother";
  phrase[3] = 'K';
  cout << phrase.substr(3, 2);
  return 0;
}