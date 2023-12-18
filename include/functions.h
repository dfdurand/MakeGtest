#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#define DIM 5


// Returns n! (the factorial of n).  For negative n, n! is defined to be 1.
int Factorial(int n);

// Returns true if and only if n is a prime number.
bool IsPrime(int n);

int* Order(int tab[], int taille) ;
int Min(int tab[], int taille) ;
int Max(int tab[], int taille) ;

#endif  // GOOGLETEST_FUNCTIONS_H_