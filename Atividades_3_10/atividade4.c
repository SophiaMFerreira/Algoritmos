/**4) Um haras está com dificuldade em calcular a quantidade de ferraduras necessárias para equipar todos os cavalos hospedados.
Crie uma solução para o problema em forma de programa.**/

#include <locale.h>

main (){
    setlocale(LC_ALL, "Portuguese");

    int n_cavalos, n_ferraduras;

    printf("Quantos cavalos há em seu haras? \n");
    scanf("%d", &n_cavalos);
    n_ferraduras = n_cavalos * 4;

    printf("Você precisará de %d ferraduras para os %d cavalos hospedados no haras.", n_ferraduras, n_cavalos);
}
