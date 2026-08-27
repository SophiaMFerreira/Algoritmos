//6. Codificar uma função capaz de calcular o resultado de uma determinada operação
//   (soma, subtração, multiplicação e divisão) entre dois operandos.

double calculadora(char operacao, double num1, double num2);

int main(){
    printf("%.2f\n", calculadora('+', 2.99, 9.99));
    printf("%.2f\n", calculadora('-', 2, 9.99));
    printf("%.2f\n", calculadora('*', 2, 9.99));
    printf("%.2f\n", calculadora('/', 2, 9));
}

double calculadora(char operacao, double num1, double num2){
    switch (operacao) {
        case '+':
            return num1 + num2;
        break;
        case '-' :
            return num1 - num2;
        break;
        case '*':
            return num1 * num2;
        break;
        case '/' :
            return num1 / num2;
        break;
        default:
            return 0;
        break;
    }
}
