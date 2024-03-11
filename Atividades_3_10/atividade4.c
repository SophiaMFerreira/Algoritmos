/**4) Um haras está com dificuldade em calcular a quantidade de ferraduras necessárias para equipar todos os cavalos hospedados.
Crie uma solução para o problema em forma de programa.**/

#include <locale.h>

main (){
    setlocale(LC_ALL, "Portuguese");

    int NCavalos, NFerraduras;

    printf("Quantos cavalos há em seu haras? \n");
    scanf("%d", &NCavalos);
    NFerraduras = NCavalos * 4;

    printf("Você precisará de %d ferraduras para os %d cavalos hospedados no haras.", NFerraduras, NCavalos);
}
