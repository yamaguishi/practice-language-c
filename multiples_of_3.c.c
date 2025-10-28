#include <stdio.h>

/*
Write a program that determines and displays the first five multiples of 3, 
considering numbers greater than 0
*/


int main (){

//variáveis
int num = 1; 
int counter = 0;

    printf("Displaying the first five multiples of 3:\n");
    while (counter < 5 ){
        if(num % 3 == 0){
            printf("The number %d is a multiple of 3.\n", num);
            counter = counter + 1;
        }
        num = num + 1;
    }

    

    return 0;
}