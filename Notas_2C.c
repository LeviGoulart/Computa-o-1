#include <stdio.h>
int main()
{
    int frequencia;
    float n1, n2, n3,
          media;

    printf("digite as tres notas:\n ");
    scanf ("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2+ n3) / 3;

    printf("digite a frequencia (0-100):");
    scanf("%d", &frequencia );

    if(media>8 && frequencia >=75)
    {
        printf("Aprovado com distinçao. ");
    }
    else if (media >=6 && frequencia >=75)
    {
        printf("O estudante foi Aprovado direto pois teve media %.2f e frequencia %d%%. |\n. ", media, frequencia);
    }
    else if(media >= 4.0 && media < 6.0 && frequencia >= 75)
    {
        (media >= 6.0 && frequencia < 75 || media >= 4.0 && frequencia > 50 && frequencia < 75 || media >= 4 && frequencia > 50 && frequencia < 75);
        printf("O estudante vai para a final pois teve media %.2f e frequencia %d%%. \n.", media, frequencia);
    }
    else
        printf("O estudante foi reprovado direto pois teve media %.2f e frequencia %d%%. \n.", media, frequencia);


    return 0;

}
