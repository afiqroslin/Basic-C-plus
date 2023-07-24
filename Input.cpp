/*Take input from user and print*/

#include <iostream>

using namespace std;

int main() {

  int age;
  string name;
  cout << "What is your name?" << endl;
  getline(cin, name);
  cout << "Enter your age: " << endl;
  cin >> age;
  cout << "Hi " << name << endl;
  cout << "You are " << age << " years old" << endl;
  return 0;
}