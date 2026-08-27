/*      3) Codificar uma função capaz de calcular a quantidade de candidatos classificados em
            um concurso público. Sabe-se que são 1000 candidatos e que a pontuação necessária
            para classificação deve ser maior ou igual a 650.*/

#include <locale.h>
#define N_CANDIDATOS 1000


int calculaClassificados();

main (){
    setlocale(LC_ALL, "Portuguese");
    printf("%d", calculaClassificados());
}

int calculaClassificados(){
    float notas[N_CANDIDATOS];
    int nClassficados = 0;

    for(int i = 0; i < N_CANDIDATOS; i++){
        printf("Indique a nota do %dº candidato: ", (i + 1));
        scanf("%f", &notas[i]);
        if(notas[i] >= 650){
           nClassficados++;
        }
    }
    return nClassficados;
}
