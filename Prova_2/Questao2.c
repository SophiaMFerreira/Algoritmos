// Prova 2 de Algoritmos
// Aluna: Sophia Agnes de Machado Ferreira
// 28/08/2024
// 1ºp BSI                          Turma: A


/* Questão 2) Codificar uma função capaz de calcular a quantidade de países com IDH (índice de desenvolvimento humano)
    inferior à média geral. A ONU, junto aos 193 países participantes, é responsável pelo registro desse índice para cada país membro. */

#include <locale.h>

//valor de teste
#define N_PAISES_ONU 5
//valor real de países participantes
//#define PAISES_ONU 193

int verificaAbaixoMediaIDH(float idhPaises[N_PAISES_ONU]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    //vetor de teste
    //float idhPaises[N_PAISES_ONU] = {1,1,2,1,1};
    float idhPaises[N_PAISES_ONU] = {0.3, 0.44, 0.555, 0.1, 1.00};

    printf("%d países da ONU têm seu IDH abaixo da média geral", verificaAbaixoMediaIDH(idhPaises));
}

int verificaAbaixoMediaIDH(float idhPaises[N_PAISES_ONU]){
    int paisesAbaixoMediaIDH = 0;
    float idhMedio = 0;

    for(int i = 0; i < N_PAISES_ONU; i++){
        idhMedio += idhPaises[i];
    }
    idhMedio = idhMedio / N_PAISES_ONU;

    for(int i = 0; i < N_PAISES_ONU; i++){
        if(idhPaises[i] < idhMedio){
            paisesAbaixoMediaIDH++;
        }
    }
    return paisesAbaixoMediaIDH;
}
