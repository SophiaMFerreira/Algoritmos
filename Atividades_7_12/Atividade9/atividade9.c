//9) Sabe-se que um investimento financeiro rende determinado juros mensais.
//   Codificar uma função para calcular o saldo final após decorrer alguns meses.
//   Considere um aporte mensal e constante durante todo o período do investimento.

float calculaFinal(float depositoInicial, int meses, float juros);

int main(){
    printf("%.2f\n", calculaFinal(2.00, 0.00, 50.00));
    printf("%.2f\n", calculaFinal(2.00, 1.00, 50.00));
    printf("%.2f\n", calculaFinal(2.00, 2.00, 50.00));
    printf("%.2f\n", calculaFinal(2.00, 3.00, 50.00));
}

float calculaFinal(float depositoInicial, int meses, float juros){
    float valorAcumulado;
    valorAcumulado = depositoInicial;

    for(int i = 0; i < meses; i++){
        valorAcumulado = valorAcumulado + (valorAcumulado * juros / 100);
    }
    return valorAcumulado;
}
