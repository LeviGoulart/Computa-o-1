#include<stdio.h>
#include<math.h>

int main()
{

    float altura, largura, area;
    int tinta_necessaria;

    printf("Altura (m):");
    scanf("%f", &altura);

    printf("largura (m):");
    scanf("%f", &largura);

    area = (altura * largura);

    tinta_necessaria = ceil(area / 2.0);

    printf ("Area da parede: %.2f (metros quadrados)\n", area);
    printf ("Quantidade de tinta necessaria: %d litros\n", tinta_necessaria);


    return 0;


}

