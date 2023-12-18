#include "../include/functions.h"

// Returns n! (the factorial of n).  For negative n, n! is defined to be 1.
int Factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }

  return result;
}

// Returns true if and only if n is a prime number.
bool IsPrime(int n) {
  // Trivial case 1: small numbers
  if (n <= 1) return false;

  // Trivial case 2: even numbers
  if (n % 2 == 0) return n == 2;

  // Now, we have that n is odd and n >= 3.

  // Try to divide n by every odd number i, starting from 3
  for (int i = 3;; i += 2) {
    // We only have to try i up to the square root of n
    if (i > n / i) break;

    // Now, we have i <= n/i < n.
    // If n is divisible by i, n is not prime.
    if (n % i == 0) return false;
  }

  // n has no integer factor in the range (1, n), and thus is prime.
  return true;
}

int Min(int tab[], int taille)
{
    int tmp ;
    
     for(int j =0; j < taille; j++)
    {
        
        for(int k = j+1 ; k < taille; k++)
        {
            if ( tab[k] < tab[j])
            {
                tmp =  tab[j];
                tab[j] = tab[k];
                tab[k] = tmp;
            }
        }
    }
    
    
    return tab[0];
}

int Max(int tab[], int taille)
{
    int tmp ;
    
     for(int j =0; j < taille; j++)
    {
        
        for(int k = j+1 ; k < taille; k++)
        {
            if ( tab[k] < tab[j])
            {
                tmp =  tab[j];
                tab[j] = tab[k];
                tab[k] = tmp;
            }
        }
    }
    
    
    return tab[taille-1];
}

int* Order(int tab[], int taille)
{
    int tmp ;
     int* arr = new int[100];
     for(int j =0; j < taille; j++)
    {
        
        for(int k = j+1 ; k < taille; k++)
        {
            if ( tab[k] < tab[j])
            {
                tmp =  tab[j];
                tab[j] = tab[k];
                tab[k] = tmp;
            }
        }
    }
    
    arr = tab;
    return arr ;
}

