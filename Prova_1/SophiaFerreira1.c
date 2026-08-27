// Aluna: Sophia Agnes de Machado Ferreira
// Turma: A
// Data: 17/07/2024

/*      1) Codificar uma função capaz de imprimir na tela o símbolo ‘O’ tantas vezes quanto a
        idade da pessoa. Por exemplo: para uma pessoa de 5 anos a função deve ser
        responsável por imprimir OOOOO.

*/


void exibePelaIdade (int idade);

int main(){
    exibePelaIdade (1);
        printf("\n");
    exibePelaIdade (4);
        printf("\n");
    exibePelaIdade (10);
        printf("\n");
    exibePelaIdade (3);
}

void exibePelaIdade (int idade){
    int i = 0;
    while(idade > i){
            printf("O");
            i++;
    }
}
