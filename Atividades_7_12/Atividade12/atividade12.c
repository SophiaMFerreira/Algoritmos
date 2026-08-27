// 12) Faça uma função que verifique se um valor (inteiro) é perfeito ou não. Um valor é
//     dito perfeito quando ele é igual à soma dos seus divisores, excluindo-o. (Ex: 6 é
//     perfeito porque 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar
//     verdadeiro ou falso.

struct divisores {
    int qntDiisores;
    int somaDivisores;
};
typedef struct divisores Divisores;

Divisores calculaDivisores(int numero);
void verificaPerfeito(int numero, Divisores infoDivisores);


int main (){
    int numero = 6;
    verificaPerfeito(numero, calculaDivisores(numero));
}

Divisores calculaDivisores(int numero){
    int i;
    Divisores infoDivisores;

    infoDivisores.qntDiisores = 0;
    infoDivisores.somaDivisores = 0;
    i = 1;

    while(i <= numero){
        if(numero%i == 0){
            infoDivisores.qntDiisores++;
            infoDivisores.somaDivisores = infoDivisores.somaDivisores + i;
        }
        i++;
    }
    return infoDivisores;
}
void verificaPerfeito(int numero, Divisores infoDivisores){
    if((infoDivisores.somaDivisores - numero) == numero){
        printf("Verdadeiro");
    } else {
        printf("Falso");
    }
}
