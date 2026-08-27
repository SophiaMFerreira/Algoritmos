/*  17) Codifique uma função capaz de imprimir um gráfico de temperatura. Para melhor
        entendimento veja algumas possíveis situações:
            Para 5º a saída será: +++++
            Para -5º a saída será: -----
            Para 0º a saída será: 0
*/
#include <math.h>
void exibeGraficoTemperatura(int temperatura);

int main(){
    exibeGraficoTemperatura(3);
     printf("\n ");
     exibeGraficoTemperatura(-5);
     printf("\n ");
     exibeGraficoTemperatura(0);

}

void exibeGraficoTemperatura(int temperatura){
    if(temperatura){
        for(int i = 0; i < abs(temperatura); i++){
            if(temperatura > 0){
                printf("+ ");
            }else{
                printf("- ");
            }
        }
    }else{
        printf("0");
    }

}
