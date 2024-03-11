/**5) Um professor de matemática deseja disponibilizar aos seus alunos um programa
capaz de calcular a potência de determinado número inteiro.
    Exemplos: 2^4, 3^5, etc.
O professor espera que os alunos utilizem o programa como forma de averiguar os
cálculos realizados manualmente.
Dica: pesquise sobre a função pow, presente em uma das bibliotecas de C.**/

#include <stdio.h>
#include <locale.h>
#include <math.h>

main (){
    setlocale(LC_ALL, "Portuguese");

    float base, resultado;
    int potencia;

    printf("Informe a base da potência: \n");
    scanf("%f", &base);
    printf("Informe a potência: \n");
    scanf("%d", &potencia);
    resultado = pow(base,potencia);

    printf("A base %.2f elevada a potência %d é igual a %.2f", base, potencia, resultado);
}
