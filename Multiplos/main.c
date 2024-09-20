#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int v;
    printf("Insira um valor:");
    scanf ("%d",&v);
    if (v%2== 0)
        printf ( "\n%d é multiplo de 2 ",v);
    if (v%3 == 0)
        printf ( "\n%d é multiplo de 3 ",v);
    if (v%5 == 0)
        printf ( "\n%d é multiplo de 5 ",v);
    return 0;
}
