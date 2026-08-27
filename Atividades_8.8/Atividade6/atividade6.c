/**6) Codificar uma função para calcular a quantidade de alunos que obtiveram nota
        acima da média da turma.   **/

#include <locale.h>
#define N_ALUNOS 3

int calculaNerds();

main (){
    setlocale(LC_ALL, "Portuguese");
    printf("%d aluno(s) tiraram nota acima da média da turma", calculaNerds());
}

int calculaNerds(){
    float notasTurma[N_ALUNOS];
    float mediaTurma = 0;
    int nNerds = 0;
    float mediaNotas = 0;

        for(int i = 0; i < N_ALUNOS; i++){
            printf("Indique a nota do %dº aluno: ", (i + 1));
            scanf("%f", &notasTurma[i]);
            mediaNotas = mediaNotas + notasTurma[i];
        }

        mediaNotas = mediaNotas / N_ALUNOS;

        for(int i = 0; i < N_ALUNOS; i++){
            if(notasTurma[i] > mediaNotas){
                nNerds++;
            }
        }
    return nNerds;
}
