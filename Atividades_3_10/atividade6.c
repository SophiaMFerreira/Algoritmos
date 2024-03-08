/**6) Determinar a média ponderada das três notas de um aluno. Considerar que os pesos das notas são 2, 3 e 5, respectivamente**/

#include <stdio.h>
#include <locale.h>

main (){
    setlocale(LC_ALL, "Portuguese");

    float nota_1, nota_2, nota_3, soma, media_p;
    int peso_2 = 2;
    int peso_3 = 3;
    int peso_5 = 5;

    printf("Informe a 1ª nota: \n");
    scanf("%f", &nota_1);
    printf("Informe a 2ª nota: \n");
    scanf("%f", &nota_2);
    printf("Informe a 3ª nota: \n");
    scanf("%f", &nota_3);
    soma = (nota_1 * peso_2) + (nota_2 * peso_3) + (nota_3* peso_5);
    media_p = soma/ 3;

    printf("A média ponderada das notas: %.2f, %.2f e %.2f é igual a %.2f", nota_1, nota_2, nota_3, media_p);
}
