// 13) Codificar uma função para calcular o fatorial de um número.

int calculaFatorial(int numero);

main (){
    printf("%d", calculaFatorial(5));
}

int calculaFatorial(int numero){
    int fatorial;
    fatorial = 1;

    for(int i = numero; i > 1; i--){
        fatorial = fatorial * i;
    }
    return fatorial;
}
