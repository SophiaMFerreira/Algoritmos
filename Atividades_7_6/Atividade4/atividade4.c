//4. Codificar uma função para calcular a quinzena a que pertence um determinado dia
//   do mês.

#include <locale.h>
int verificaQuinzena(dia);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int retorno, dia;
    retorno = verificaQuinzena(-1);
    //retorno = verificaQuinzena(100);
    //retorno = verificaQuinzena(4);
    //retorno = verificaQuinzena(20);

    /*if(retorno == 1){
        printf("1ª quinzena do mês");
    }else{
        if(retorno == 2){
            printf("2ª quinzena do mês");
        }else{
            printf("Dia inválido");
        }
    }*/

    if(retorno){
        printf(retorno == 1 ? "1ª quinzena do mês" : "2ª quinzena do mês");
    }else{
        printf("Dia inválido");
    }
}

int verificaQuinzena(dia){
    if(dia < 1 || dia > 31){
        return 0;
    }else{
        return (dia < 16 ) ? 1 : 2;
    }

}

/*int verificaQuinzena(dia){
    if(dia < 1 || dia > 31){
        return 0;
    }else{
        if(dia < 16 ){
            return 1;
        } else{
            return 2;
        }
    }
}*/
