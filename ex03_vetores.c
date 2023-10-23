#include <stdio.h>

int main(){

    int v[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Posicao[%d] = ", i); 
        scanf("%d", &v[i]);
    }
    
    printf("Dados inseridos: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("v[%d]: %d\n", i, v[i]);
    }
    
    
    return 0;
}