/**11) Uma empresa especializada em produtos agropecuários plantou em um viveiro 5.000 sementes de uma determinada planta e deseja contratar os seus serviços de
        programador para verificar o grau de germinação de tais sementes. Você deverá criar um programa que permita registrar o grau de germinação de cada
        semente como sendo uma nota atribuída por um técnico agropecuário usando uma escala de 0 a 10. Codificar uma função para calcular o percentual de sementes que conseguiram um
        grau de germinação acima da média. Situação exemplo:

        Semente     Grau de germinação                          Somatório          30
                1       10                       Grau médio de germinação           6
                2        5                     Quantidade de sementes com
                3        2                      germinação acima da média           2
                4       10                Percentual de sementes com grau
                5        3                   de germinação acima da média         40%
**/

#include <stdio.h>
#include <locale.h>
#define PLANTIO 5

typedef struct{
    int somatorio_germinacao;
    double grau_medio_germinacao;
    int qnt_individuoas_acima_media;
    double percentual_germinacao;
}DadosPlantio;

int ColetaDados();
DadosPlantio calculaEstatisticasPlantio(int dadosSementes[PLANTIO]);

main (){
    setlocale(LC_ALL, "Portuguese");
    //DadosPlantio semeadura = calculaEstatisticasPlantio(ColetaDados());
   ColetaDados();
    //printf("%d", ColetaDados());
    //printf("Somatório %d, \n", semeadura.somatorio_germinacao);
   // printf("Grau médio de germinação %.2f, \n", semeadura.grau_medio_germinacao);
    //printf("Quantidade de sementes com germinação acima da média %.2f, \n", semeadura.qnt_individuoas_acima_media);
   // printf("Percentual de sementes com grau de germinação acima da média %.2f", semeadura.percentual_germinacao);
}

int ColetaDados(){
    int dadosSementes[PLANTIO];
    for(int i = 0; i < PLANTIO; i++){
        printf("Indique o grau de germinação do indivíduo %d:", (i + 1));
        scanf("%d", &dadosSementes[i]);
    }
    return dadosSementes;
}
//ATÉ AQUI FUNCUIONA!!!!

DadosPlantio calculaEstatisticasPlantio(int dadosSementes[PLANTIO]){
    DadosPlantio estatisticaPlantio;
    for(int i = 0; i < PLANTIO; i++){
       estatisticaPlantio.somatorio_germinacao = dadosSementes[i];
    }
        estatisticaPlantio.grau_medio_germinacao = estatisticaPlantio.somatorio_germinacao / PLANTIO;

    for(int i = 0; i < PLANTIO; i++){
        if(estatisticaPlantio.grau_medio_germinacao >= dadosSementes[i])
            estatisticaPlantio.somatorio_germinacao++;
    }

        estatisticaPlantio.percentual_germinacao = ((estatisticaPlantio.qnt_individuoas_acima_media * 100) / PLANTIO);
        return estatisticaPlantio;
}
