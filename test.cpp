#include <iostream>
#include <numeric>

int main() {
    int n = 5; // Example: calculate factorial of 5
    
    // Calculate factorial using std::factorial function
    int factorial = std::factorial(n);

    std::cout << "Factorial of " << n << " is: " << factorial << std::endl;

    return 0;
}
