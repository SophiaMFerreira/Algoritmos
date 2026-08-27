// 14) Codificar uma função capaz de calcular a soma dos n primeiros termos de uma PA.
//                  ATENÇÃO: NÃO UTULIZE A FÓRMULA DA SOMA DE PA.

double calculaSomaPA(double primeiroTermo, double razao, int intervaloN);

main(){
    printf("%.2f", calculaSomaPA(0, 5, 5));
}

double calculaSomaPA(double primeiroTermo, double razao, int intervaloN){
    double somaPA;

    for(int i = 0; i < intervaloN; i++){
        somaPA = somaPA + (primeiroTermo + razao * i);
    }
       return somaPA;
}
