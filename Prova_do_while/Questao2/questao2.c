int editaTexto();
int main(){
    printf("Digite * para sair....\n");
    printf("\nQuantidade de caracteres: %d", editaTexto());
}

int editaTexto(){
    char caracter;
    int contaCaracteres = 0;

    do{
        caracter = getche();
        contaCaracteres++;
    } while(caracter != '*');

    return contaCaracteres--;
}
