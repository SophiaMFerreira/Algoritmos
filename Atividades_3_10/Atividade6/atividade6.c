/**6) Determinar a média ponderada das três notas de um aluno. Considerar que os pesos das notas são 2, 3 e 5, respectivamente**/

#include <stdio.h>
#include <locale.h>

main (){
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, soma, mediaP;
    int peso2 = 2;
    int peso3 = 3;
    int peso5 = 5;

    printf("Informe a 1ª nota: \n");
    scanf("%f", &nota1);
    printf("Informe a 2ª nota: \n");
    scanf("%f", &nota2);
    printf("Informe a 3ª nota: \n");
    scanf("%f", &nota3);
    soma = (nota1 * peso2) + (nota2 * peso3) + (nota3* peso5);
    mediaP = soma/ 3;

    printf("A média ponderada das notas: %.2f, %.2f e %.2f é igual a %.2f", nota1, nota2, nota3, mediaP);
}
