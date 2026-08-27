// Prova 2 de Algoritmos
// Aluna: Sophia Agnes de Machado Ferreira
// 28/08/2024
// 1ºp BSI                          Turma: A


// Questão 1) Codificar uma função que seja capaz de verificar se os elementos em uma determinada relação de valores inteiros estão armazenados em ordem crescente.

#include <locale.h>
#define N_ELEMENTOS 5

int verificaOrdemCrescente(int conjuntoElementos[N_ELEMENTOS]);

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Vetores para teste
    int vetorCrescente[N_ELEMENTOS] = {0, 3, 4, 77, 100};
    int vetorDesorganizado[N_ELEMENTOS] = {0, 3, 4, 770, 10};
    int vetorDecrescente[N_ELEMENTOS] = {1000, 770, 44, 3, 0};

    if(verificaOrdemCrescente(vetorDesorganizado)){
        printf("O vetor está em ordem crescente");
    }else{
        printf("O vetor está desorganizado");
    }
}

// 0 == FALSE == desorganizado; 1 == TRUE == ordem crescente
int verificaOrdemCrescente(int conjuntoElementos[N_ELEMENTOS]){
    for(int i = 1; i < N_ELEMENTOS; i++){
        if(conjuntoElementos[i - 1]> conjuntoElementos[i]){
            return 0;
        }
    }

    return 1;
}
