#include <stdio.h>

int main() {
    int a = 10;     // A normal integer variable
    int *p = &a;    // A pointer to an integer
    int **pp = &p;  // A pointer to a pointer to an integer

    printf("Value of a: %d\n", a);
    printf("Value of *p: %d\n", *p);        // Dereferencing single pointer
    printf("Value of **pp: %d\n", **pp);    // Dereferencing double pointer

    printf("Address of a: %p\n",&a);
    printf("Address stored in p (Address of a): %d\n",*p);
    printf("Address stored in pp (Address of p): %d\n", *pp);

    return 0;
}

