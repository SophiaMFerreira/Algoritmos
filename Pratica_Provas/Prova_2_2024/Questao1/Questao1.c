/* 1) Codificar uma função que seja capaz de verificar se os elementos em uma
      determinada relação de valores inteiros estão o armazenados em ordem crescente.
*/

#define N_ELEMENTOS 5

int verificaCrescente(int elementos[N_ELEMENTOS]);

int main(){
    int elementos[N_ELEMENTOS] = {1, 2, 3, 5, 1};
    if(verificaCrescente(elementos)){
        printf("OK");
    }else{
        printf(":(");
    }
}

int verificaCrescente(int elementos[N_ELEMENTOS]){
    for(int i = 1; i < N_ELEMENTOS; i++){
        if(elementos[i-1] > elementos[i]){
           return 0;
        }
    }

    return 1;
}
