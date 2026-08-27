/** 10) A organização de um evento esportivo deseja um programa que seja responsável
        por dar mais credibilidade ao sistema de pontuação manual atualmente usado.
        Considere que cada competidor recebe uma pontuação ao final da execução da
        prova esportiva. Vence aquele competidor com a maior pontuação. O programa
        deverá ser capaz de exibir uma identificação do competidor vencedor e sua
        pontuação.**/

#include <stdio.h>
#include <locale.h>

#define PARTIDAS 3
#define N_JOGADORES 3

void coletaPontos(double resultadoPartidas[N_JOGADORES][PARTIDAS]);
void verificaVencedor(double resultadoPartidas[N_JOGADORES][PARTIDAS]);

main (){
    setlocale(LC_ALL, "Portuguese");
    double resultadoPartidas[N_JOGADORES][PARTIDAS];
    coletaPontos(resultadoPartidas);
    verificaVencedor(resultadoPartidas);
}

void coletaPontos(double resultadoPartidas[N_JOGADORES][PARTIDAS]){
    for(int i = 0; i < N_JOGADORES; i++){
        for(int j = 0; j <= PARTIDAS; j++){
            if(j == 0){
                printf("Código do jogador: ");
                scanf("%f", &resultadoPartidas[i][j]);
            }else{
                printf("Pontuação feita na %dª partida: ", (j));
                scanf("%.2f", &resultadoPartidas[i][j]);
            }
        }
    }
}


void verificaVencedor(double resultadoPartidas[N_JOGADORES][PARTIDAS]){
    int idMaiorPontuacao = 0;
    double maioPontuacaoSomada = 0;
    for(int i = 0; i < N_JOGADORES; i++){
        double somatorioIndividual = 0;
        for(int j = 0; j <= PARTIDAS; j++){
            if(j != 0){
                somatorioIndividual = somatorioIndividual + resultadoPartidas[i][j];
                if(j == PARTIDAS && somatorioIndividual > maioPontuacaoSomada){
                    maioPontuacaoSomada = somatorioIndividual;
                    idMaiorPontuacao = resultadoPartidas[i][0];
                }
            }
        }
    }
    printf("O jogador %d foi o vencedor!", resultadoPartidas[idMaiorPontuacao][0]);
    printf("Pontos somados: %.2f", maioPontuacaoSomada);
    for(int i = 0; i < N_JOGADORES; i++){
        for(int j = 0; j <= PARTIDAS; j++){
            if(j != 0){
                printf("%dª rodada: %.2f pnts", i+1, resultadoPartidas[idMaiorPontuacao][j]);
            }
        }
    }
}

