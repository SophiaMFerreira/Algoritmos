//5. Codificar uma função que imprima o mês e a quinzena por extenso.

#include <locale.h>

struct extruturaData {
        int dia;
        int mes;
        //char mesExtenso;
        int quinzena;
};
typedef struct extruturaData Data;

Data verificaQuinzenaMes(Data);
void verificaMes(Data data);
//void exibeQuinzenaMes(Data);

int main(){
    setlocale(LC_ALL, "Portuguese");
    Data data;
    data.dia = 7;
    data.mes = 9;

    verificaQuinzenaMes(data);
     printf("O dia %d de %d pertence a %d quinzena do mês.", data.dia, data.mes, data.quinzena);

    //verificaMes(data);
    //printf("O dia %d de %s pertence a %d quinzena do mês.", data.dia, data.quinzena);
}

Data verificaQuinzenaMes(Data data){
    if(data.dia < 1 || data.dia > 31){
        data.quinzena = 0;                  //Não consigo modificar mesmo tendo passado cm parâmetro
        data.mes = 0;
        printf("oi");
    }else{
        data.quinzena = (data.dia < 16 ) ? 1 : 2;
        printf("xau");

    }
    return data;
}

void verificaMes(Data data){
    switch (data.mes) {
        case 1:
            printf("O dia %d de janeiro pertence a %d quinzena do mês.", data.dia, data.quinzena);
            break;
        case 2:
            printf("O dia %d de fevereiro pertence a %d quinzena do mês.", data.dia, data.quinzena);
            break;
        case 3:
            printf("O dia %d de março pertence a %d quinzena do mês.", data.dia, data.quinzena);
            break;
        case 4:
            printf("O dia %d de abril pertence a %d quinzena do mês.", data.dia, data.quinzena);
            break;
        case 5:
            printf("O dia %d de maio pertence a %d quinzena do mês.", data.dia, data.quinzena);
            break;
        case 6:
            printf("O dia %d de junho pertence a %d quinzena do mês.", data.dia, data.quinzena);
            break;
        case 7:
            printf("O dia %d de julho pertence a %d quinzena do mês.", data.dia, data.quinzena);
            break;
        case 8:
            printf("O dia %d de agosto pertence a %d quinzena do mês.", data.dia, data.quinzena);
            break;
        case 9:
            printf("O dia %d de setembro pertence a %d quinzena do mês.", data.dia, data.quinzena);
            break;
        case 10:
            printf("O dia %d de outubro pertence a %d quinzena do mês.", data.dia, data.quinzena);
            break;
        case 11:
            printf("O dia %d de novembro pertence a %d quinzena do mês.", data.dia, data.quinzena);
            break;
        case 12:
            printf("O dia %d de dezembro pertence a %d quinzena do mês.", data.dia, data.quinzena);
            break;
        default:
            printf("O dia %d não pertence a nenhum mês.", data.dia);
            break;
    }
}


