/*
Write a program that reads 10 numbers and prints 
the largest and smallest values entered.
*/

#include <stdio.h>

int main (){
int num = 0;
int count = 1;
int max, min;

    while (count <= 10 ){
        printf("Enter a number: ");
        scanf("%d", &num);
        if (count == 1) {
            max = num;
            min = num;
        }
        else {
            if (num > max) max = num;
            if (num < min) min = num;
        }
        count += 1;
        }
        
printf("The largest number is: %d\n", max);
printf("The smallest number is: %d\n", min);

        
    return 0;
}
