#include <stdio.h>

/*
Write a program that read a 10-element vector, counts,
and displays how many even values it contains.
*/

int main(){
    int vector[10];
    int counter = 0;

    for(int i = 0; i< 10; i++) {
       vector[i] = i + 1;
    }

    for(int i = 0; i < 10; i++) {
        printf("%d\n", vector[i]);
        if(vector[i] % 2 == 0) {
            counter++;
        }
    }

    printf("The number of even values is: %d\n", counter);


    return 0;
}