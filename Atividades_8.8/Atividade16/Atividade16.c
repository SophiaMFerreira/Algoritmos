/* 16) Codificar uma função capaz de criar uma sigla para cada nome fornecido. A
        sigla deve ser composta da letra inicial de cada parte do nome. Veja exemplos
        abaixo:
            Jose da Silva => JdS
            José Pedro Nogueira => JPN
            Minas Gerais => MG
            Goiás => G
*/
#include <string.h>
#include <ctype.h>
#define CARACTERES 32
#define N_LETRAS_SIGLAS

char criaSigla(char frase[CARACTERES]);

main(){
    char frase[CARACTERES] = "Jose da Silva";
    //printf("%s", criaSigla(frase));
    criaSigla(frase);
}

char criaSigla(char frase[CARACTERES]){
    char sigla[N_LETRAS_SIGLAS] = {frase[0]};
    int j = 0;
     printf("%s\n\n", sigla);
    for(int i = 1; i < strlen(frase); i++){
        if(isspace(frase[i - 1])){
            j++;
            sigla[j] = frase[i];
            printf("%d, \t %d", j, i);

        }
    }
    //return sigla;
}
