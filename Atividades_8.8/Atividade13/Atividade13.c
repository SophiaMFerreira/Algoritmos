/* 13) Codificar uma função capaz de validar a senha do usuário. Considere que a senha
        correta seja ALGORITMO.
*/

#include <string.h>
#include <ctype.h>
#include <locale.h>

#define CARACTERES 32

int confereSenha(char senha[CARACTERES], char verificacao[CARACTERES]);

main(){
    setlocale(LC_ALL, "Portuguese");

    if(confereSenha("abacaxi", "Abacaxi")){
       printf("Acesso concedido");
    }else{
        printf("Acesso negado");
    }
}

int confereSenha(char senha[CARACTERES], char verificacao[CARACTERES]){
    if(strlen(senha) == strlen(verificacao)){
        for(int i = 0; i < strlen(senha); i++){
            if(senha[i] != verificacao[i]){
                return 0;
            }
        }
    }else{
        return 0;
    }
    return 1;
}

