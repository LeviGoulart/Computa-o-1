#include<stdio.h>

int main()
{
    int numero_base, intervalo_inicial, intervalo_final;
    int soma = 0;

    printf("numero base: ");
    scanf("%d", &numero_base);

    printf("valor inicial do intervalo: ");
    scanf("%d", &intervalo_inicial);

    printf("valor final do intervalo: ");
    scanf("%d", &intervalo_final);


    for (int i= intervalo_inicial; i <= intervalo_final; i++){
       if (i% numero_base ==0){
       soma += i;
       }
    }


    printf("A soma dos multiplos %d no intervalo eh %d\n", numero_base, soma);


    return 0;



}
