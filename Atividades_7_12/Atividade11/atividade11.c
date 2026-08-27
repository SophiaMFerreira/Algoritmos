//11) Codificar uma função capaz de verificar se um determinado número é primo.

int calculaDivisores(int numero);
int verificaPrimo(int numero);

int main(){
    if(verificaPrimo(7)){
        printf("E primo");
    }else{
        printf("Nao e primo");
    }
}

int calculaDivisores(int numero){
    int i, qntDivisores;
    qntDivisores = 0;
    i = 1;

    while(i <= numero){
        if(numero%i == 0){
            qntDivisores++;
        }
        i++;
    }
    return qntDivisores;
}

int verificaPrimo(int numero){
    return calculaDivisores(numero) == 2 ? 1 : 0;
}
