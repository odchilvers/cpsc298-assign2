//ZeroBoth
// this program using call by reference to set two variables to 0
#include <iostream>

using namespace std;
// this function uses call by reference to assign two variables to 0
void zeroBoth(int& var1, int& var2){
  var1 = 0;
  var2 = 0;
}

int main(int argc, char **argv){
  int userNum1;
  int userNum2;
// asks the user for two numbers
  cout << "Enter first number" << endl;
  cin >> userNum1;
  cout << "Enter second number" << endl;
  cin >> userNum2;
  // this runs the function
  zeroBoth(userNum1,userNum2);

  cout << userNum1 << " " << userNum2 << endl;
}
