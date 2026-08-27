// 5) Codificar uma função capaz de imprimir todos os números inteiros localizados em
//     uma faixa de valores.

void imprimeIntervalo(int valInicial, int valFinal);
int main(){
    int valInicial, valFinal;

    printf("Indique o inicio do intervalo\n");
    scanf("%d", &valInicial);
    printf("\nIndique o fim do intervalo\n");
    scanf("%d", &valFinal);

    imprimeIntervalo(valInicial, valFinal);
}

void imprimeIntervalo(int valInicial, int valFinal){
    int i = valInicial;
    while(i <= valFinal){
        printf("\n%d", i);
        i++;
    }
}
