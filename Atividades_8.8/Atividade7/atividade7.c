/**7) 7) Codificar funções responsáveis pelos seguintes cálculos:
        a) A temperatura mínima no mês.
        b) A temperatura máxima no mês.
        c) A temperatura média do mês.
        d) Quantidade de dias com temperatura igual à mínima do mês.
        e) Quantidade de dias com temperatura igual à máxima do mês.
        f) Quantidade de dias com temperatura acima da média do mês.
        g) Quantidade de dias com temperatura abaixo da média do mês.

**/

#include <locale.h>
#define DIAS_MES 28

float calculaMinima(float temperaturas[DIAS_MES]);
float calculaMaxima(float temperaturas[DIAS_MES]);
float calculaMedia(float temperaturas[DIAS_MES]);
int diasMin(float temperaturas[DIAS_MES]);
int diasMax(float temperaturas[DIAS_MES]);
int diasdiasAcimaMedia(float temperaturas[DIAS_MES]);
int diasdiasAbaixoMedia(float temperaturas[DIAS_MES]);


main (){
    setlocale(LC_ALL, "Portuguese");
    float temperaturas[DIAS_MES];
        for(int i = 0; i < DIAS_MES; i++){
                printf("Indique a temperatura do dia %d: ", (i + 1));
                scanf("%f", &temperaturas[i]);
            }

    printf("A mínima do mês foi : %.2f°C", calculaMinima(temperaturas));
    printf("\nA máxima do mês foi : %.2f°C", calculaMaxima(temperaturas));
    printf("\nA média do mês foi : %.2f°C", calculaMedia(temperaturas));
        printf("\n");
    printf("\n%d dias mediram %.2f°C", diasMin(temperaturas), calculaMinima(temperaturas));
    printf("\n%d dias mediram %.2f°C", diasMax(temperaturas), calculaMaxima(temperaturas));
    printf("\n%d dias estavam acima da temperatura média", diasdiasAcimaMedia(temperaturas));
    printf("\n%d dias estavam abaixo da temperatura média", diasdiasAbaixoMedia(temperaturas));
        printf("\n");
}

float calculaMinima(float temperaturas[DIAS_MES]){
    float tMin = temperaturas[0];
    for(int i = 0; i < DIAS_MES; i++){
        tMin = tMin > temperaturas[i] ? temperaturas[i] : tMin;
    }
    return tMin;
}

float calculaMaxima(float temperaturas[DIAS_MES]){
    float tMax = temperaturas[0];
    for(int i = 0; i < DIAS_MES; i++){
        tMax = tMax < temperaturas[i] ? temperaturas[i] : tMax;
    }
    return tMax;
}

float calculaMedia(float temperaturas[DIAS_MES]){
    float somaTemperauras = 0;
    float media = 0;
    for(int i = 0; i <= DIAS_MES; i++){
        somaTemperauras = somaTemperauras + temperaturas[i];
    }

    media = somaTemperauras / DIAS_MES;
    return media;
}

int diasMin(float temperaturas[DIAS_MES]){
    float minima = calculaMinima(temperaturas);
    int diasMinima = 0;
    for(int i = 0; i < DIAS_MES; i++){
        if(temperaturas[i] ==  minima){
            diasMinima++;
        }
    }
    return diasMinima;
}

int diasMax(float temperaturas[DIAS_MES]){
    float maxima = calculaMaxima(temperaturas);
    int diasMaxima = 0;
    for(int i = 0; i < DIAS_MES; i++){
      if(temperaturas[i] ==  maxima){
            diasMaxima++;
        }
    }
    return diasMaxima;
}

int diasdiasAcimaMedia(float temperaturas[DIAS_MES]){
    float media = calculaMedia(temperaturas);
    int diasAcimaMedia = 0;
    for(int i = 0; i < DIAS_MES; i++){
      if(temperaturas[i] >  media){
            diasAcimaMedia++;
        }
    }
    return diasAcimaMedia;
}

int diasdiasAbaixoMedia(float temperaturas[DIAS_MES]){
float media = calculaMedia(temperaturas);
    int diasAbaixoMedia = 0;
    for(int i = 0; i < DIAS_MES; i++){
      if(temperaturas[i] >  media){
            diasAbaixoMedia++;
        }
    }
    return diasAbaixoMedia;
}
