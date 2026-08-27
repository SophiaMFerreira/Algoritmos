#include <locale.h>
main () {
    setlocale(LC_ALL, "Portuguese");

    float custoCarroNovo, custoFabrica, valorDistribuidor, valorImpostos, porcentagemDistribuidor, porcentagemImpostos;

    printf("Qual o custo de fábrica do carro? \n");
    scanf("%f", &custoFabrica);

    printf("Qual a porcentagem do distribuidor? \n");
    scanf("%f", &porcentagemDistribuidor);

    printf("Qual a porcentagem dos impostos? \n");
    scanf("%f", &porcentagemImpostos);

    valorDistribuidor = porcentagemDistribuidor * custoFabrica;
    valorImpostos = porcentagemImpostos * custoFabrica;
    custoCarroNovo = custoFabrica + valorDistribuidor + valorImpostos;

    printf("O carro novo custa R$%.2f", custoCarroNovo);
}
