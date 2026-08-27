//1) Sugiro que faça o teste de mesa para o programa potencia.c (listagem na página
//   anterior) e codifique novas versões usando as outras duas estruturas de repetição
//   estudadas anteriormente.

int calculaPotencia(int base, int expoente);

int main(){
    int base, expoente;

    printf("\nInforme o valor da base:");
    scanf("%d",&base);
    printf("\nInforme o valor do expoente:");
    scanf("%d",&expoente);

    printf("\nResultado: %d", calculaPotencia(base, expoente));
 }

 int calculaPotencia(int base, int expoente){
    int potencia = base;
    int i;
    i = 1;

    while(i < expoente){
        potencia = potencia * base;
        i++;
    }

    return potencia;
 }
