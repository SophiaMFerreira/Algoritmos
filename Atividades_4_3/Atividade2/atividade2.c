// 2) Melhorando um programa desenvolvido anteriormente. Codificar uma função capaz
//    de apresentar a seguinte mensagem na tela: “Programa em estado de espera por X
//    segundos”. A função deve ser finalizada após apresentar a mensagem pelo tempo,
//    em segundos, determinado pelo usuário.

#include <locale.h>

int converteSegundosMilissegundos (tempoSegundos);

main (){
    setlocale(LC_ALL, "Portuguese");

    int tempoSegundos;

    printf("Indique um tempo (em segundos): \n");
    scanf("%d", &tempoSegundos);

    printf("Programa em estado de espera por %.d segundos.\n", tempoSegundos);
    Sleep(converteSegundosMilissegundos (tempoSegundos));

    printf("Fim do tempo de espera.");
}

int converteSegundosMilissegundos (tempoSegundos) {
    int tempoMilissegundos;
    tempoMilissegundos = tempoSegundos * 1000;
    return tempoMilissegundos;
}
