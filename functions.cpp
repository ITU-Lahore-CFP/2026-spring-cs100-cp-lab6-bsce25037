#include "functions.h"

// Task A 
int sumOfSquares(int n) {
if (n == 0) return 0;                 // Base Form  
  return n * n + sumOfSquares(n - 1);     // Recursive Form
}

// Task B 
long int findFactorial(int n) {
if (n <= 1) return 1;         // Bae Form        
     return n * findFactorial(n - 1);    // Recursive Form    
}