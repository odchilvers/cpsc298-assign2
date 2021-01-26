// conversion
// this program will take in feet and inches as values from the user
// the equivalent length will be outputted in meters and centimeters

#include <iostream>

using namespace std;

// asks the user for the input of feet and inches
int userInput(){
  double feet;
  int inches;
  cout << "Enter the number of feet: " << endl;
  cin >> feet;
  cout << "Enter the number of inches: " << endl;
  cin >> inches;
  // calculates total feet plus inches into feet
  feet = (inches / 12) + feet;
  return feet;
}

double feetToMeters(double feet){
  double meters;
  // calculates total meters including feet to meters
  meters = feet * 0.3048;
  return meters;
}

int metersToCentimeters(double meters){
  double metersLeft;
  int centimeters;
  int wholeMeters;
  // converts meters into a whole number
  wholeMeters = meters;
  // finds remaining meters left by subtracting meters by the whole number
  metersLeft = meters - wholeMeters;
  // multiply by 100 to get centimeters
  centimeters = metersLeft * 100;
  return centimeters;
}

void consoleOutput(float meters, float centimeters){
  int wholeMeters;
  // turn meters into a whole number
  wholeMeters = meters;
  // print out meters and centimeters
  cout << "Number of meters: " << wholeMeters << endl;
  cout << "Number of centimeters: " << centimeters << endl;
}

int main(){
  double feet;
  double inches;
  double meters;
  double centimeters;
  string continueCode;

  continueCode = " ";
  // checks whether exit was typed
  while(continueCode != "exit"){
    // calls the functions
    feet = userInput();
    meters = feetToMeters(feet);
    centimeters = metersToCentimeters(meters);
    consoleOutput(meters, centimeters);
    // asks the user to continue or exit
    cout << "Enter exit to quit or No to continue" << endl;
    cin >> continueCode;
  }

}
