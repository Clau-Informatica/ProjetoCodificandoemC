#include <stdio.h>
#include <locale.h>

int main(){
    char s[10];

    printf("Digite algo (convencional): ");
    scanf("%s", s);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);

    printf("Digite algo (aprimorado):\n");
    scanf("%10[^\n]s", s);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);
    return 0;
}