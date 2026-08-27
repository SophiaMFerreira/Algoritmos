/* 9. Codificar uma função capaz de imprimir a seguinte mensagem:
        Aluno <matricula>, suas notas:
        Nota 1: <99,99>
        Nota 2: <99,99>
        Quantidade de faltas: <99>
        Você está <situação do aluno>!

        ex.:
        Aluno 112233, suas notas:
        Nota 1: 8,0
        Nota 2: 9,0
        Quantidade de faltas: 5
        Você está aprovado!

        Considere aprovado o aluno com faltas inferior a 15 e médias das notas maior
        ou igual a 6.0. Aqui será necessário a passagem de uma struct como parâmetro.
        Defina um tipo de dado adequado ao aluno.
*/

// Em verdade eu queria exibir a situação pelo estado "situação", mas n consigo formatar uma string sem criar uma função c for para montar um vetor p ela
#include <locale.h>
struct aluno {
    int matricula;
    double nota1;
    double nota2;
    int faltas;
    //char situacao;
};

typedef struct aluno Aluno;

double calculaMedia(Aluno alunoMatriculado);
void verificaAprovacao(Aluno alunoMatriculado);
//Aluno verificaAprovacao(Aluno alunoMatriculado);

int main(){
    setlocale(LC_ALL, "Portuguese");

    Aluno alunoMatriculado = {12345, 10, 8.00 ,7};
    //verificaAprovacao(alunoMatriculado);

    printf("Aluno %d, suas notas:", alunoMatriculado.matricula);
    printf("\nNota 1: %.2f", alunoMatriculado.nota1);
    printf("\nNota 2: %.2f", alunoMatriculado.nota2);
    printf("\nQuantidade de faltas: %d", alunoMatriculado.faltas);
    //printf("\nVocê está %s!", alunoMatriculado.situacao);
    verificaAprovacao(alunoMatriculado);
}
double calculaMedia(Aluno alunoMatriculado){
    double media;
    media = (alunoMatriculado.nota1 + alunoMatriculado.nota2) / 2;
    return media;
}

//Aluno verificaAprovacao(Aluno alunoMatriculado){
void verificaAprovacao(Aluno alunoMatriculado){

    double media;
    media = calculaMedia(alunoMatriculado);

    if((media >= 6) && (alunoMatriculado.faltas < 15)){
       //alunoMatriculado.situacao = "aprovado";
       printf("\nVocê está aprovado!");
    }else{
        //alunoMatriculado.situacao = "reprovado";
        printf("\nVocê está reprovado!");
    }

    //return alunoMatriculado;
}
