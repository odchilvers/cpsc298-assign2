// Sales Tax
// this program takes in the current tax rate and the Cost
// it prints out the cost after tax
#include <iostream>

using namespace std;
// function that calcuates the cost with tax
float addTax(float taxRate, float cost){
  return (cost * taxRate) + cost;
}

int main(){
  float taxRate;
  float cost;
// asks the user for the current tax rate and cost
  cout << "Enter the current tax rate: ";
  cin >> taxRate;
  cout << "Enter the cost: ";
  cin  >> cost;
  // prints out the total cost after tax
  cout << "Cost after tax: "<<addTax(taxRate,cost) << endl;
}
