#include <iostream>
#include <cstring>
using namespace std;

int main() {
  string cinOut;
  int number1, number2;
  int x;
  cout << "what operator do you wanna use: " ;
  cin >> cinOut;
  const char* op = cinOut.c_str();
  if (strcmp(op, "+") == 0) {
      cout << "enter two numbers: " ;
      cin >> number1 >> number2;
      x = number1 + number2;
      cout << x;
  }
  else if (strcmp(op,"-") == 0){
      cout << "enter two numbers: " ;
      cin >> number1 >> number2;
      x = number1 - number2;
      cout << x;
  }
  else if (strcmp(op,"*") == 0){
      cout << "enter two numbers: " ;
      cin >> number1 >> number2;
      x = number1 * number2;
      cout << x;
  }
  else if (strcmp(op,"/") == 0){
      cout << "enter two numbers: " ;
      cin >> number1 >> number2;
      x = number1 / number2;
      cout << x;
  }
  else {
      cout << "invalid operator" ;
  }
    
  return 0;
}
