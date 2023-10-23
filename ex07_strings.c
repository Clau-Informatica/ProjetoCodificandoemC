#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
    setlocale(LC_ALL, "Portuguese");
    char s1[N] = {"Codificando "};
    char s2[N] = {"em linguagem C!"};
    
    puts("Antes do strcat:");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);

    strcat(s1, s2);
    puts("Depois do strcat:");
    puts(s1);
}