#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
    setlocale(LC_ALL, "Portuguese");
    char s[N];
    int i;

    puts("Digite um texto:");
    gets(s);
    i = strlen(s);
    printf("Tamanho do texto: %d\n", i);

    puts("Impressão posição a posição:");
    for (i = 0; i < strlen(s); i++)
    {
        printf("%c\n", s[i]);
    }
    

}