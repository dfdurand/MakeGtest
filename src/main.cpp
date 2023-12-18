// src/main.cpp

#include <iostream>
#include "../include/functions.h"

using namespace std ;

int main() {
    
    int tabs[5] = {5, 27, 14, 0, -1};
    int n = 5 ;
    static int* a ;

    cout << "factoriel(5) = " << Factorial(5) <<endl;
    cout << "isprime(5) = " << IsPrime(5) <<endl;
    cout << "max value of tab = " << Max(tabs, n) <<endl;
    cout << "min value of tab = " << Min(tabs, n) <<endl;

  
    return 0;
}
