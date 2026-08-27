//7. Codificar uma função capaz de determinar o quadrante em que um ângulo está
//   localizado no plano cartesiano.

#include <locale.h>

int verificaQuadrante(int angulo);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int angulo;
    //angulo = 0;
    //angulo = 90;
    //angulo = 180;
    //angulo = 270;
    //angulo = 360;
    //angulo = 10;
    //angulo = 150;
    //angulo = 200;
    //angulo = 300;
    angulo = 380;


    if(verificaQuadrante(angulo)){
        printf("O ângulo está sobre %dº quadrante", verificaQuadrante(angulo));

    } else {
        printf("O ângulo está sobre um dos eixos");
    }
}
int verificaQuadrante(int angulo){

    if(angulo >= 360){
        angulo = angulo % 360;
    }
    if((angulo == 0) || (angulo == 90) || (angulo == 180) || (angulo == 270)){
        return 0;
    } else {
        if(angulo < 90 || angulo < 180){
            return (angulo < 90) ? 1 : 2;
        } else {
            return (angulo < 270) ? 3 : 4;
        }
    }
}

