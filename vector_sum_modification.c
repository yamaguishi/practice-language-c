#include <stdio.h>

/* 
1. Write a program that has a vector named A that stores 6 integers.
The program must perform the following steps:
a) Assign the following values to this vector: 1, 0, 5, -2, -5, 7;
b) Store in a simple integer variable the sum of the values at positions A[0], A[1], and A[5] of the vector
and display this sum on the screen;
c) Modify the vector at position 4, assigning the value 100 to this position;
d) Display each value of vector A on the screen, one per line.
*/

int main() {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int sum = A[0] + A[1] + A[5];

    printf("The sum of the values at positions 0, 1, and 5 is: %d\n", sum);

    A[4] = 100;

    for (int i = 0; i < 6; i++) {
        printf("The value at position %d is: %d\n", i, A[i]);
    }

    return 0;
}