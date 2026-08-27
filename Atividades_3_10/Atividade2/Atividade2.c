/*  2) Copie e cole o programa abaixo em seu ambiente de desenvolvimento. Ao executar
        perceberá alguns erros. Primeiro procure identificar e diferenciar os erros de
        compilação dos de execução. A apresentação da palavra “Média” está com
        acentuação incorreta, faça a correção. Sua tarefa é eliminar todos os erros e fazer o
        programa funcionar corretamente. Atenção: Programa que executa não é sinônimo
        de programa correto.

#include <stdio.h>
#include <stdlib.h>
int main()
{
 float nota1, nota2, media
 printf("Informe a Nota 1: ");
 scanf("%d", nota1);
 printf("Informe a Nota 2: ");
 scanf("%d", nota2);
 media = nota1 + nota2 /2;
 printf("Média: %d", media);
 return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;

    printf("Informe a Nota 1: ");
        scanf("%f", &nota1);
    printf("Informe a Nota 2: ");
        scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Média: %.2f", media);

 return 0;
}
