// 4) Crie uma função capaz de gerar um número aleatório entre 1 e n.

#include <stdlib.h>
#include <locale.h>
#include <time.h>

int numeroAleatorioIntervalo(numeroMaximo);

main (){
    int numeroMaximo;
    setlocale(LC_ALL, "Portuguese");

    printf("Indique o número máximo do intervalo: \n");
    scanf("%d", &numeroMaximo);

    printf("O número aleatório gerado entre 1 e %d foi: \n%d", numeroMaximo, numeroAleatorioIntervalo(numeroMaximo));
}

int numeroAleatorioIntervalo(numeroMaximo) {
   int numGerado;
   srand(time(NULL));

    numGerado = (rand() % numeroMaximo) + 1;

    return numGerado;
}
