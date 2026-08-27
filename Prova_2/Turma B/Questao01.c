#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 10

//Codificar uma função que seja capaz de verificar se uma determinada inscrição de um candidato está presente em uma relação de candidatos.

void imprimirVerificacao(int resultado, int inscricaoCandidato);
int verificarInscricao(int inscricaoCandidato, int inscricoes[MAX]);

main()
{
    setlocale(LC_ALL, "");
    int inscricoes[MAX] = {231, 321, 563, 934, 241, 507, 798, 112, 603, 367};

    imprimirVerificacao(verificarInscricao(231, inscricoes), 231);
    imprimirVerificacao(verificarInscricao(507, inscricoes), 507);
    imprimirVerificacao(verificarInscricao(111, inscricoes), 111);
}

void imprimirVerificacao(int resultado, int inscricaoCandidato)
{
    if(resultado)
    {
        printf("A inscrição %d está presente.\n", inscricaoCandidato);
    }
    else
    {
        printf("A inscrição %d não está presente.\n", inscricaoCandidato);
    }
}

int verificarInscricao(int inscricaoCandidato, int inscricoes[MAX])
{
    for(int i = 0; i < MAX; i++)
    {
        if(inscricoes[i] == inscricaoCandidato)
        {
            return 1;
        }
    }
    return 0;
}
