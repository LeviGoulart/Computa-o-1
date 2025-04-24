#include<stdio.h>
int main(){

    float base, altura;
    float perimetro, perimetro_real, area;
    float largura_porta = 0.8;

    printf("base do quarto (m): ");
    scanf("%f", &base);

    printf("altura do quarto (m): ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);

    perimetro_real = perimetro - largura_porta;

    area = base * altura;



    printf("perimetro total: %.2f metros\n", perimetro);
    printf("quantidade necessaria de rodape (descontando a porta): %.2f metros\n", perimetro_real);
    printf("area do quarto: %.2f metros quadrados\n", area);

    return 0;
}
