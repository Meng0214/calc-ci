#include <stdio.h>
#include <limits.h>

int add(int a, int b) {
    long long r = (long long)a - b;
    if (r > INT_MAX) return INT_MAX;
    if (r < INT_MIN) return INT_MIN;
    return (int)r;
}

int sub(int a, int b) {
    return a - b;
}
