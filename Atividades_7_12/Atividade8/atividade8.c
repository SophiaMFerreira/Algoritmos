//8) Sabe-se que um investimento financeiro rende determinado juros mensais.
//   Codificar uma função para calcular a quantidade de meses necessários para que um
//   determinado aporte mensal e constante durante todo o período do investimento,
//   alcance o valor final desejado.

int calculaMeses(double depositoInicial, double valorFinal, double juros);

int main(){

    printf("%d\n", calculaMeses(2.00, 3.50, 50.00));
    printf("%d\n", calculaMeses(2.00, 4.90, 50.00));
    printf("%d\n", calculaMeses(2.00, 6.00, 50.00));
    printf("%d\n", calculaMeses(2.00, 10.00, 50.00));
}

int calculaMeses(double depositoInicial, double valorFinal, double juros){
    int meses = 0;
    double valorAcumulado = depositoInicial;

    while(valorAcumulado < valorFinal){
        //valorAcumulado = valorAcumulado + (valorAcumulado * juros / 100) + depositoInicial ;
        valorAcumulado = valorAcumulado + (valorAcumulado * juros / 100);
        meses++;
    }
    return meses;
}
