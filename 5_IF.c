#include<stdio.h>
int main(){

    float n1, n2, n3,
          media;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >8)
    printf("Aprovado com Distin��o.");

    else if (media >=6)
    printf ("Aprovado Direto. ");

    else if (media >=4)
    printf ("Vai para a Final.");

    else
    printf ("Reprovado Direto. ");

    return 0;

}
