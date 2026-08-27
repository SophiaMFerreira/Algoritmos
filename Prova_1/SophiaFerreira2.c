// Aluna: Sophia Agnes de Machado Ferreira
// Turma: A
// Data: 17/07/2024

/*      2) Codificar uma função capaz de simular um editor de textos bem simples, ou seja, que
            permita apenas a digitação de texto. Ao final, a função deverá calcular a quantidade
            total de caracteres digitados pelo usuário.

*/

#include <locale.h>
void noteBlock (char caractere);

int main()
{
    char caractere;
    setlocale(LC_ALL, "Portuguese");

    printf("Para parar o Note digite '*'\n");
    //mesmo o enter é considerado um caractere nesse programa, é proposital pois no doc ele é exibido como um caractere de quebra quebra
    //catch("c", &caractere);
    scanf("%c", &caractere);

    //linhas 19 a 21 desenecessárias

    noteBlock (caractere);//deveria imprimir o valor de retorno
}

//deveria ter retorno
//não era necessário parâmetros
void noteBlock (char caractere)
{
    int contadorCaracteres = 0;
    while(caractere != '*' )
    {
        scanf("%c", &caractere);
        contadorCaracteres++;
    }
    printf("%d caracteres no documento", contadorCaracteres);//informação que deveria ser retornada e não impressa.

}
