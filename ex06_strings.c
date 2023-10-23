#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
    setlocale(LC_ALL, "Portuguese");

    char origem[N] = {"Olá mundo!"};
    char destino[N];

    puts("Antes do strcpy:");
    puts(origem);
    puts(destino);

    strcpy(destino, origem);

    puts("Depois do strcpy:");
    puts(origem);
    puts(destino);
}