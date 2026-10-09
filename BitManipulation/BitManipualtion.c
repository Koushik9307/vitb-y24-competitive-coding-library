#include <stdio.h>
#include <stdbool.h>

long long getBit(long long n, int k) {
    return (n >> k) & 1LL;
}

long long setBit(long long n, int k) {
    n = (1LL << k) | n;
    return n;
}

long long clearBit(long long n, int k) {
    n = n & ~(1LL << k);
    return n;
}

long long toggleBit(long long n, int k) {
    n = n ^ (1LL << k);
    return n;
}

bool isPowerOfTwo(long long n) {
    if (n > 0 && (n & (n - 1)) == 0) {
        return true;
    }
    return false;
}

int countSetBits(long long n) {
    int count = 0;

    while (n > 0) {
        n = n & (n - 1);
        count++;
    }

    return count;
}

int main() {
    long long n = 10;
    int k = 1;

    printf("Get Bit: %lld\n", getBit(n, k));
    printf("Set Bit: %lld\n", setBit(n, k));
    printf("Clear Bit: %lld\n", clearBit(n, k));
    printf("Toggle Bit: %lld\n", toggleBit(n, k));
    printf("Is Power of Two: %s\n", isPowerOfTwo(n) ? "true" : "false");
    printf("Count Set Bits: %d\n", countSetBits(n));

    return 0;
}