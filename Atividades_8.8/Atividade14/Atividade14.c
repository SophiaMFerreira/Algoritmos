/* 14) Codificar uma função capaz de imprimir uma frase de trás para frente. Veja o exemplo abaixo:
        Entrada: Bom dia
        Saída: aid moB
*/

#include <string.h>
#include <ctype.h>
#include <locale.h>

#define CARACTERES 32

void inverteMensagem(char frase[CARACTERES]);

main(){
    setlocale(LC_ALL, "Portuguese");

     char frase[CARACTERES];
     gets(frase);
    //char frase[CARACTERES] = "Bom dia";
    inverteMensagem(frase);
}

void inverteMensagem(char frase[CARACTERES]) {
    int tamanhoMensagem = strlen(frase);
    char mensagemInversa[tamanhoMensagem];
    int j = 0;
    for(int i = strlen(frase) - 1; i >= 0; i--){
        j = strlen(frase) - i;
        mensagemInversa[j] = frase[i];
        printf("%c", mensagemInversa[j]);
    }
}
