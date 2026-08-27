// 1) Melhorando um programa desenvolvido anteriormente. Codificar uma função para
//    calcular a quantidade de ferraduras necessárias para equipar todos os cavalos de um
//    haras.

#include <locale.h>

int calculaFerraduras (nCavalos);
main (){
    setlocale(LC_ALL, "Portuguese");

    int nCavalos;

    printf("Quantos cavalos há em seu haras? \n");
    scanf("%d", &nCavalos);

       printf("Você precisará de %d ferraduras para os %d cavalos hospedados no haras.", calculaFerraduras(nCavalos), nCavalos);
}

int calculaFerraduras (nCavalos){
    int nFerraduras;
    nFerraduras = nCavalos * 4;
    return nFerraduras;
}
