/* 19) Jogo de adivinhação contra o computador. Criar um programa que sorteie um
        número e permita que o usuário tente acertar. Caso não acerte, o programa deve
        imprimir uma mensagem informando se o número sorteado é maior ou menor que a
        tentativa feita e permitir ao usuário realizar nova tentativa. Ao acertar o número, o
        programa deve finalizar e imprimir a quantidade de tentativas realizadas.
*/
#include <locale.h>
#include <time.h>
int sorteiaN();
int verificaChute( int nSorte, int chute);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int chute;
    int tentativas = 0;
    int jogar = 1;
    int nSorte = sorteiaN();

    do{
        printf("Chute um número: \n");
        scanf("%d", &chute);
        printf("\n");

        if(verificaChute(nSorte, chute)){
            if(verificaChute(nSorte, chute) == 1){
                printf("Chutou alto! (Tente um número menor)\n");
            }else{
                printf("Chutou baixo! (Tente um número maior)\n");
            }

            printf("Deseja jogar novamente?\n");
            printf("(SIM = 1; NÃO = 0)\n");
            scanf("%d", &jogar);
            printf("\n");
        }else{
            jogar = 0;
        }

        tentativas++;


    }while(jogar);

    if(verificaChute(nSorte, chute)){
        printf("Você desistiu após %d tentativa(s)\n", tentativas);
    }else{
        printf("Você venceu o computador após %d tentativa(s)!!\n", tentativas);
    }
}

int sorteiaN(){
    int nSorte;
    #define INTERVALO 500; //nao precisa dessa linha
    srand(time(NULL));
    //nSorte = rand();
    nSorte = rand() % INTERVALO;
    return nSorte;
}

int verificaChute( int nSorte, int chute){
    if(nSorte == chute){
        return 0;
    }else{
        if(nSorte > chute){
            return -1;    // maior q nSorte
        }else{
            return 1;  // menor q nSorte
        }
    }
}
