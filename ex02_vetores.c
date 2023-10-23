#include <stdio.h>
int main()
{
    int v[5] = {10, 20, 30, 40, 50};
    float soma;
    for (int i = 0; i < 5; i++)
    {
        soma += v[i];
    }
    printf("%f", soma/5);
    
   
    return 0;
}
