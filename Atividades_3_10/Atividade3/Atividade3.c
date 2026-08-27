/*      3) Procure entender a finalidade das funções Sleep e sleep presentes em uma das
        bibliotecas da linguagem C. Em seguida codificar um programa capaz de apresentar
        a seguinte mensagem na tela: “Programa em estado de espera por X segundos”. O
        programa deve ser finalizado após apresentar a mensagem pelo tempo, em
        segundos, determinado pelo usuário.*/

#include <locale.h>

int converteSegundosMilissegundos (tempoSegundos);

main (){
    setlocale(LC_ALL, "Portuguese");

    int tempoSegundos;

    printf("Indique um tempo (em segundos): \n");
    scanf("%d", &tempoSegundos);

    printf("Programa em estado de espera por %.d segundos.\n", tempoSegundos);
    Sleep(tempoSegundos * 1000);

    printf("Fim do tempo de espera.");
}
