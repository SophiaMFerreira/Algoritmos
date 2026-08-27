void imprimeSimbolo (int idade);

int main() {
    imprimeSimbolo(5);
    printf("\n");
    imprimeSimbolo(10);
    printf("\n");
    imprimeSimbolo(0);
    printf("\n");
    imprimeSimbolo(-2);
    printf("\n");
}


void imprimeSimbolo (int idade){
    if(idade > 0){
        int repeticoes = 0;

        do{
            printf("O");
            repeticoes++;
        } while (repeticoes < idade);
    }
}
