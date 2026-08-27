#include <locale.h>

#define VALORES_MINIMOS 0.05
#define VALORES_MAXIMOS 0.25
#define VALORES_REF1 0.3
#define VALORES_REF2 0.4
#define VALORES_REF3 0.5

void verificaIndicePoluicao (int grupoIndustria, double indicePoluicao);

int main (){
    setlocale(LC_ALL, "Portuguese");

    verificaIndicePoluicao(1, 0.25); //ok
        printf("\n");
    verificaIndicePoluicao(1,0.05);
        printf("\n");
    verificaIndicePoluicao(2, 0.24);
        printf("\n");
    verificaIndicePoluicao(2, 0.05);
        printf("\n");
    verificaIndicePoluicao(3, 0.05);
        printf("\n");
    verificaIndicePoluicao(3, 0.25);
        printf("\n");
        printf("---------------------------------------\n");
    verificaIndicePoluicao(1,0.33); //1 suspende
        printf("\n");
    verificaIndicePoluicao(2,0.37);
        printf("\n");
    verificaIndicePoluicao(3,0.3);
        printf("\n");
         printf("---------------------------------------\n");
    verificaIndicePoluicao(1, 0.4); //1 e 2 suspende
        printf("\n");
    verificaIndicePoluicao(2, 0.46);
        printf("\n");
    verificaIndicePoluicao(3, 0.45);
        printf("\n");
         printf("---------------------------------------\n");
     verificaIndicePoluicao(1, 0.5); //1 e 2 e 3 suspende
        printf("\n");
    verificaIndicePoluicao(2, 0.55);
        printf("\n");
    verificaIndicePoluicao(3, 0.59);
        printf("\n");
    verificaIndicePoluicao(2, 0.60); // fora
        printf("\n");
        printf("---------------------------------------\n");
    verificaIndicePoluicao(3, 0.04);
}

void verificaIndicePoluicao (int grupoIndustria, double indicePoluicao){
    if(indicePoluicao >= VALORES_MINIMOS){
        if(indicePoluicao >= VALORES_REF1 && grupoIndustria == 1){
            printf("Você está sendo intimado e deve suspender as suas atividades");
        } else{
            if(indicePoluicao >= VALORES_REF2 && grupoIndustria < 3){
                printf("Você está sendo intimado e deve suspender as suas atividades");
            }else{
                if(indicePoluicao >= VALORES_REF3){
                    printf("Você deve paralizar suas atividades");
                }else{
                    if(indicePoluicao >= VALORES_REF3){
                        printf("Você deve paralizar suas atividades");
                    }else{
                        printf("Níveis de poluíção aceitáveis");
                    }
                }
            }
        }
    }else{
        printf("Níveis de poluíção abaixo do tratado");

    }
}
