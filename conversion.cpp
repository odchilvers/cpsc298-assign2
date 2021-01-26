// conversion
// this program will take in feet and inches as values from the user
// the equivalent length will be outputted in meters and centimeters

#include <iostream>

using namespace std;

// asks the user for the input of feet and inches
int userInput(){
  int feet;
  int inches;
  cout << "Enter the number of feet: " << endl;
  cin >> feet;
  cout << "Enter the number of inches: " << endl;
  cin >> inches;
  return (feet * 12 ) + inches;
}

float inchesToMeters(int inches){
  return inches * 0.0254;
}

float metersToCentimeters(float meters){
  return meters * 100;
}

void consoleOutput(float meters, float centimeters){
  cout << "Number of meters: " << meters << endl;
  cout << "Number of centimeters: " << centimeters << endl;
}

int main(){
  int feet;
  int inches;
  float meters;
  float centimeters;
  string continueCode;

  continueCode = " ";
  while(continueCode != "exit"){
    inches = userInput();
    meters = inchesToMeters(inches);
    centimeters = metersToCentimeters(meters);
    consoleOutput(meters, centimeters);
    cout << "Enter exit to quit or No to continue" << endl;
    cin >> continueCode;
  }

}
