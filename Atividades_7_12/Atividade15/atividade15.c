/* Codificar uma função capaz de calcular a soma dos n primeiros termos de uma PG.
                ATENÇÃO: NÃO UTULIZE A FÓRMULA DA SOMA DE PG.
*/
#include <math.h>

double calculaSomaPG(double primeiroTermo, double razao, int intervaloN);

main(){
    printf("%.2f", calculaSomaPG(1, 5, 5));
}

double calculaSomaPG(double primeiroTermo, double razao, int intervaloN){
    double somaPG;

    for(int i = 0; i < intervaloN; i++){
        somaPG = somaPG + (primeiroTermo * pow(razao,i));
    }
       return somaPG;
}
