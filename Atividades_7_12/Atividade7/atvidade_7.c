// 7) Chico tem 1,50 metro de altura e cresce 2 centímetros por ano, enquanto Zé tem
//     1,10 metro e cresce 3 centímetros por ano. Codificar uma função para calcular
//     quantos anos serão necessários para que Zé alcance uma altura maior que a do
//     Chico.

#include <locale.h>
int verificaAlturaIgual();
int main(){
    setlocale(LC_ALL, "Portuguese");61
    printf("Apos %d anos, Zé será maior que Chico.", verificaAlturaIgual());
}

int verificaAlturaIgual(){
    float alturaInicialZe, alturaInicialChico, crescimentoAnualZe, crescimentoAnualChico, alturaZe, alturaChico;
    int anos = 0;
    alturaInicialChico = 1.5;
    crescimentoAnualChico = 0.02;
    alturaInicialZe = 1.1;
    crescimentoAnualZe = 0.03;

    alturaChico = alturaInicialChico;
    alturaZe = alturaInicialZe;

    while(alturaZe <= alturaChico){
        anos++;

        alturaChico = alturaInicialChico + (anos * crescimentoAnualChico);
        alturaZe = alturaInicialZe + (anos * crescimentoAnualZe);
    }

    return anos;
}
