#include <iostream>
#include "functions.h"

using namespace std;

int main() {
int num;
    // Task A
cout << "Enter a number: ";
cin >> num;
cout << "Sum of squares: " << sumOfSquares(num) << endl;
   
    // Task B
cout << "Enter a number: ";
cin >> num;
cout << "Factorial of the number is " << findFactorial(num) << endl;
  
   return 0;
}