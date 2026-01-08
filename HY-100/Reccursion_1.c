#include <stdio.h>

// Recursive function to calculate the greatest common divisor (GCD)
unsigned int gcd(unsigned int x, unsigned int y) {
    if (x == y) {
        return x; // Base case: when both numbers are equal
    }
    if (x < y) {
        return gcd(x, y - x); // Recursive call reducing y
    } else {
        return gcd(x - y, y); // Recursive call reducing x
    }
}

int main() {
    unsigned int x = 56, y = 98;
    printf("GCD of %u and %u is %u\n", x, y, gcd(x, y));
    return 0;
}