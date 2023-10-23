#include <stdio.h>

//criando funcao para retornar o maior entre dois numeros
float maior(float x, float y){
    if (x > y)
    {
        return x;
    } else
    {
        return y;
    }
}

int main()
{
    float x, y;
    scanf("%f %f", &x, &y);
    //mostrando o resultado da funcao
    printf("Maior numero: %.2f", maior(x, y));


    return 0;
}
