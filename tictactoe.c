#include <stdio.h>

/* 
Leandro Marques Yamaguishi

   Tic Tac Toe Challenge

Draw to facility during the process

    1 | 2 | 3
    ---------
    4 | 5 | 6
    ---------
    7 | 8 | 9
    
Input: 9 chars for the board.
Saída: Telling who wins.
*/

int main() {
    char v1, v2, v3, v4, v5, v6, v7, v8, v9; // Creating variables

    printf("\nJogo da velha\n"); // Board Draw
    printf(" - | - | - \n");
    printf(" ---------\n");
    printf(" - | - | - \n");
    printf(" ---------\n");
    printf(" - | - | - \n");
    printf(" ---------\n");
    
    scanf("%c %c %c %c %c %c %c %c %c", &v1, &v2, &v3, &v4, &v5, &v6, &v7, &v8, &v9); // To read the game.
    
    if(v1 == v2 && v2 == v3){
        printf("%c venceu.\n",v1);
    }
    
    else if(v4 == v5 && v5 == v6){
        printf("%c venceu. \n",v4);
    }
    
    else if(v7 == v8 && v8 == v9){ // End of horizontals.
        printf("%c venceu. \n",v7);
    }
    
    else if(v1 == v4 && v4 == v7 ){  
        printf("%c venceu. \n",v1);
    }
    
    else if(v2 == v5 && v5 == v8 ){
        printf("%c venceu. \n",v2);
    }
    else if(v3 == v6 && v6 == v9){ // End of verticals.
        printf("%c venceu. \n",v3);
    }
    
    else if(v1 == v5 && v5 == v9){
        printf("%c venceu. \n",v1);
    }
    
    else if(v3 == v5 && v5 == v7){ // End of diagonals.
        printf("%c venceu. \n",v3);
    }
    
    else{
        printf("empatou. \n"); // If none of these conditions are true.
    }
    
    return 0;
}
