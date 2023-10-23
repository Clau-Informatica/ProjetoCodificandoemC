#include <stdio.h>
int main()
{
    int v[5];
    v[0] = 10;
    v[1] = 20;
    v[2] = 30;
    v[3] = 40;
    v[4] = 50;
    float media = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;
    printf("%f", media);
    return 0;
}
