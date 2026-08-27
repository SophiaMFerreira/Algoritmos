/* 10. Codificar uma função capaz de calcular as raízes de uma equação do segundo grau.
        Aqui será necessário o retorno de uma struct pois sabemos que há 2 possibilidades:
            a) 2 Raízes reais (Delta >= 0).
        b) Raízes indeterminadas (Delta < 0).
*/
#include <math.h>
#include <locale.h>
struct raizes {
    double raiz1, raiz2;
    char irreais;
};

typedef struct raizes Raizes;

double calculaDelta(double coeficienteAngular, double coeficienteLinear, double termoIndependente);
Raizes calculaRaizes(double coeficienteAngular,  double coeficienteLinear, double termoIndependente);

int main(){
    setlocale(LC_ALL, "Portuguese");

    Raizes raizes;
    calculaRaizes(1, -2, 1);

    if(raizes.irreais == 's'){
            printf("As raises são irreais");

    } else{
        printf("As raises são %f e %f", raizes.raiz1, raizes.raiz2);
        //printf("%f , %f", calculaRaizes(1, -2, 1).raiz1, calculaRaizes(1, -2, 1).raiz2);
    }
}

double calculaDelta(double coeficienteAngular, double coeficienteLinear, double termoIndependente){
    double delta;
    delta = (coeficienteLinear * coeficienteLinear) * (-4 * coeficienteAngular * termoIndependente);
    return delta;
}

Raizes calculaRaizes(double coeficienteAngular, double coeficienteLinear, double termoIndependente){
     Raizes raizes;
     double delta;
     delta = calculaDelta(coeficienteAngular, coeficienteLinear, termoIndependente);

     if(sqrtl(delta) > 0){
        raizes.raiz1 = (-coeficienteLinear + (sqrtl(delta)))/ 2 * coeficienteLinear;
        raizes.raiz2 = (-coeficienteLinear - (sqrtl(delta)))/ 2 * coeficienteLinear;
    }else{
        raizes.irreais = 's';
    }
    return raizes;
}
