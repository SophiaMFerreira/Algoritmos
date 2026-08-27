/*15) Codificar uma função para mostrar cada parte do nome de uma pessoa em linhas
        diferentes. Veja o exemplo abaixo.
        Entrada: José da Silva Oliveira Santos
        Saída: José
                da
                Silva
                Oliveira
                Santos
*/


#include <string.h>
#include <ctype.h>
#include <locale.h>

#define CARACTERES 32

void mostraPartesNome(char nome[CARACTERES]);

main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[CARACTERES] = "José da Silva Oliveira Santos";
    criaSigla(nome);
}

void criaSigla(char nome[CARACTERES]){
    //char PareteNome[N_LETRAS_SIGLAS] = {nome[0]};
    //int j = 0;

    for(int i = 0; i < strlen(nome); i++){
        if(isspace(nome[i])){
            printf("\n");

        }else{
            printf("%c", nome[i]);
        }
    }
}

