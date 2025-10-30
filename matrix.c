#include <stdio.h>
int main(){
float valores[5][5];
int contador = 1;

for(int i = 0; i <5; i++) {
    for(int j = 0; j<5; j++) {
        valores[i][j]= contador;
        contador++;
    }
}

printf("Mostrar matriz\n");
for(int i = 0; i <5; i++) {
    for(int j = 0; j<5; j++) {
        printf("%.0f\t", valores[i][j]);
    }
    printf("\n");
}

    return 0;
}