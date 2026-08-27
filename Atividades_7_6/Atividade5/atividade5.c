//5. Codificar uma função que imprima o mês e a quinzena por extenso.

#include <locale.h>

struct extruturaData {
        int dia;
        int mes;
        char mesExtenso;
        int quinzena;
};
typedef struct extruturaData Data;

Data verificaMes(Data);
Data verificaQuinzenaMes(Data);
void exibeQuinzenaMes(Data);

int main(){
    setlocale(LC_ALL, "Portuguese");
    int mes = 11;
    Data data;
    data.dia = 10;
    data.mes = 9;
    verificaMes(data);
    printf("O dia %d de %s pertence a %d quinzena do mês.", data.dia, data.mesExtenso);
    //printf("%s", data.mesExtenso);
}


Data verificaMes(Data data){
    switch (data.mes) {
        case 1:
            data.mesExtenso = "janeiro";
            break;
        case 2:
            data.mesExtenso = "fevereiro";
            break;
        case 3:
            data.mesExtenso = "março";
            break;
        case 4:
            data.mesExtenso = "abril";
            break;
        case 5:
            data.mesExtenso = "maio";
            break;
        case 6:
            data.mesExtenso = "junho";
            break;
        case 7:
            data.mesExtenso = "julho";
            break;
        case 8:
            data.mesExtenso = "agosto";
            break;
        case 9:
           data.mesExtenso = "setembro";
            break;
        case 10:
            data.mesExtenso = "outubro";
            break;
        case 11:
            data.mesExtenso = "novembro";
            break;
        case 12:
            data.mesExtenso = "dezembro";
            break;
        default:
            data.mesExtenso = "Falso";
            break;
    }
    return data;
}

/*if(data.dia < 1 || data.dia > 31){
        data.quinzena = 0;
    }else{
        data.quinzena = (data.dia < 16 ) ? 1 : 2;
    }

void exibeQuinzenaMes(Data data){
    verificaQuinzenaMes(Data data);

    if(data.quinzena != 0){
        printf("Dia inválido");
    }else{
        if(data.mesExtenso == "Falso"){
            printf("Mês inválido");
        }else{
            printf("%dª quinzena do mês de %s.", data.quinzena, data.mesExtenso);
        }
    }
}*/
