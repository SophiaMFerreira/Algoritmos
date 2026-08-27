//5) Crie uma função capaz de inverter a ordem os algarismos de um número inteiro de
//   3 algarismo.

#include <locale.h>
#include <time.h>

int inverteAlgarismos(numeroIncicial);

main (){
    setlocale(LC_ALL, "Portuguese");
    int numeroIncicial;
    printf("Indique um número de 3 algarismos: \n");
    scanf("%d", &numeroIncicial);

    printf("A inversão dessenúmero resulta no número: \n%d",inverteAlgarismos(numeroIncicial));
}

int  inverteAlgarismos(numeroIncicial) {
    int centenas, dezenasUnidaes, dezenas, unidades, inversao;
    centenas = numeroIncicial / 100;
    dezenasUnidaes = numeroIncicial % 100;

    dezenas = dezenasUnidaes / 10;
    unidades = dezenasUnidaes % 10;

    inversao = (unidades * 100) + (dezenas * 10) + centenas ;
    return inversao;
}
