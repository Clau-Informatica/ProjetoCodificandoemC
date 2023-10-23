#include <stdio.h>

int main(){

    int mat[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int l, c;

    puts("Primeira linha:");
    for (c = 0; c < 3; c++)
    {
        printf(" %d | ", mat[0][c]);
    }
        puts("\n---------------");

    puts("Matriz toda:");

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            printf(" %d | ", mat[l][c]);
        }
        puts("\n---------------");
    }
    
    
    return 0;
}