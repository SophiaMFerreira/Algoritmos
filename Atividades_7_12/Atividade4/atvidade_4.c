//4) Codificar uma função capaz de imprimir na tela um determinado caractere diversas
//   vezes.

int main(){
    int controle, i;
    char caracter;
    controle = 0;
    i = 0;

    printf("Indique um caracter\n");
    scanf("%s", &caracter);
    printf("\nIndique quantas vezes deseja repetir\n");
    scanf("%d", &controle);

    while(i < controle){
        i++;
        printf("\n%c", caracter);
    }
}
