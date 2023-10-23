#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    char senha[N] = {"descobriu_morreu"};
    char tentativa[N];
    int ok;

    puts("Digite a senha: ");
    gets(tentativa);

    ok = strcmp(senha, tentativa);

    if (ok == 0)
    {
        puts("senha CORRETA");
        //system("color 2");
    } else
    {
        //system("color 4");
        puts("senha INCORRETA");
    }
    
    return 0;
}