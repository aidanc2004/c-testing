#include <stdio.h>

// returns n squared
int f(int n) {
    return n * n;
}

// takes a function pointer that expects an integer
// as an argument that also returns an integer
int call(int (*f)(int), int n) {
    return (*f)(n);
}

int main() {
    printf("%d\n", call(f, 5));
    return 0;
}