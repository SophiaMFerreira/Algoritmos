// 3) Crie uma função capaz de gerar um número aleatório entre 1 e 6.

#include <stdlib.h>
#include <locale.h>
#include <time.h>

float geraNumeroAleatorio();

main (){
    setlocale(LC_ALL, "Portuguese");

  printf("O número aleatório gerado entre 1 e 6 foi: \n%.0f",geraNumeroAleatorio());
}

float geraNumeroAleatorio() {
   double numGerado;

    srand(time(NULL));
    numGerado = (rand() % 6) + 1;

  return numGerado;
}
