#include <iostream>

// Function declarations
int main();

// Function definitions

// int main()
//
// This program queries the user for an integer 'n' and
// then calculates the integer square root of that value.
// The integer square root is the largest integer 'isqrt'
// such that 'isqrt*isqrt <= n'.
//
// Exercises:
//   1. Eliminate the loop variable 'm'.
int main() {
  int n{};
  std::cout << "Enter an integer: ";
  std::cin >> n;

  int isqrt{};

  for ( int m{0}; true; ++m ) {
    if ( m*m <= n ) {
      isqrt = m;
    } else {
      break;
    }
  }

  std::cout << "The integer square root of " << n << " is " 
            << isqrt << std::endl;

  std::cout << isqrt << "*" << isqrt
            << " = " << (isqrt*isqrt) << " and "
            << (isqrt + 1) << "*" << (isqrt + 1)
            << " = " << ((n + 1)*(n + 1)) << std::endl;

  return 0;
}
