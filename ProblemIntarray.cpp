// Intarray
// this program will ask for 10 nonnegative numbers and puts them into numberArray
// each integer will be printed back to the screen
#include <iostream>

using namespace std;

int main(){
  // assigns the number of elements to 10
  int numElements = 10;
  // sets the array to the size of numElements
  int numberArray[numElements];

  // sets the 10 numbers into an array
  // asks the user for the number an dinputs each individually into the array
  cout << "Enter 10 nonnegative numbers: " << endl;
  cout << "Number: " << endl;
  cin >> numberArray[0];
  cout << "Number: " << endl;
  cin >> numberArray[1];
  cout << "Number: " << endl;
  cin >> numberArray[2];
  cout << "Number: " << endl;
  cin >> numberArray[3];
  cout << "Number: " << endl;
  cin >> numberArray[4];
  cout << "Number: " << endl;
  cin >> numberArray[5];
  cout << "Number: " << endl;
  cin >> numberArray[6];
  cout << "Number: " << endl;
  cin >> numberArray[7];
  cout << "Number: " << endl;
  cin >> numberArray[8];
  cout << "Number: " << endl;
  cin >> numberArray[9];
  // print each element one by one back to the console
  for(int i = 0; i < numElements; ++i){
    cout << numberArray[i] << " ";
    }
  cout << endl;
}
