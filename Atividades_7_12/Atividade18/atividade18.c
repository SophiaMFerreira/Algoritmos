/* 18) Faça um programa que calcule o termo de ordem n da sequência de Fibonacci. Use
        a seguinte definição:
        F(n) + { 0, se n = 0;
                 1, se n = 1;
                 F(n-1) + F(n-2), demais casos;
        }
*/
int calculaFibonacci(int termoN);

int main(){
    printf("%d\n", calculaFibonacci(0));
    printf("%d\n", calculaFibonacci(1));
    printf("%d\n", calculaFibonacci(2));
    printf("%d\n", calculaFibonacci(3));
    printf("%d\n", calculaFibonacci(4));
    printf("%d\n", calculaFibonacci(5));
    printf("%d\n", calculaFibonacci(6));
    printf("%d\n", calculaFibonacci(7));
}

int calculaFibonacci(int termoN){
    if(termoN == 0){
        return termoN;
    }else{
        int nFibonacci = 0;
        int n1Fibonacci = 1;
        int n2Fibonacci = 1;
        for(int i = 0; i < termoN; i++){
            n2Fibonacci = n1Fibonacci;
            n1Fibonacci = nFibonacci;
            nFibonacci = n1Fibonacci + n2Fibonacci;
        }
        return nFibonacci;
    }
}
