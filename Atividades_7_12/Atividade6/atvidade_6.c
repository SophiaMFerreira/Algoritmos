// 6) Codificar uma função para imprimir a tabuada de multiplicação de um número
//    entre 1 e 10

void imprimeTabuada(int numero);
int main(){
    int numero;

    printf("Indique um numero para verificar sua tabuada.\n");
    scanf("%d", &numero);

    imprimeTabuada(numero);
}

void imprimeTabuada(int numero){
    int i = 1;
    int fimTabuada = 10;
    int produto = 0;

    while(i <= fimTabuada){
        produto = i * numero;
        printf("\n%d x %d = %d", i, numero, produto);
        i++;
    }
}
