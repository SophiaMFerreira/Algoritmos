//10) Codificar uma função para calcular a quantidade de divisores de um número inteiro.

int calculaDivisores(int numero);

int main(){
    printf("%d", calculaDivisores(10));
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
