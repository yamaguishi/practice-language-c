#include <stdio.h>
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

    printf("Quantidades de numeros pares: %d\n", counter);


    return 0;
}