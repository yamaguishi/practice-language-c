/*
Write a program that declares an integer, initializes it to 0,
increments it by 100 each time, and prints its value on the 
screen until it reaches 100,000.
*/

#include <stdio.h>

int main (){
int num = 0;

    printf("Displaying the increment by 100:\n");
    while (num <= 100000 ){
        
            printf("The number %d is an integer\n", num);
            num += 100;
        }
        
    return 0;
}
