/*  2) Considere a seguinte declaração:
            int vet[5][5] = {1,2,2,2,2,3,1,2,2,2,3,3,1,2,2,3,3,3,1,2,3,3,3,3,1}
        Codificar as seguintes funções:
            a) Calcule a soma dos elementos da diagonal principal
            b) Calcule a soma dos elementos localizados acima da diagonal principal
            c) Calcule a soma dos elementos localizados abaixo da diagonal principal*/

#include <locale.h>

int calculaSomaDiagonal(int vet[5][5]);
int calculaSomaDiagSuperior(int vet[5][5]);
int calculaSomaDiagInferior(int vet[5][5]);

main(){
    setlocale(LC_ALL, "Portuguese");
    int vet[5][5] = {1,2,2,2,2,3,1,2,2,2,3,3,1,2,2,3,3,3,1,2,3,3,3,3,1};

	printf("A soma da diagonal é %d\n\n", calculaSomaDiagonal(vet));
	printf("A soma dos números acima da diagonal é %d\n\n", calculaSomaDiagSuperior(vet));
	printf("A soma dos números abaixo da diagonal é %d\n\n", calculaSomaDiagInferior(vet));
}

int calculaSomaDiagonal(int vet[5][5]){
    int somaDiagonal = 0;

	for (int i = 0; i < 6; i++){
		for (int j = 0; j < 5; j++){
			if (i == j){
				somaDiagonal = somaDiagonal + vet[i][j];
			}
		}
	}
	return somaDiagonal;
}

int calculaSomaDiagSuperior(int vet[5][5]){
    int somaDiagSuperior = 0;

	for (int i=0; i<5; i++){
		for (int j=0; j<5; j++){
			if (i < j){
				somaDiagSuperior = somaDiagSuperior + vet[i][j];
			}
		}
	}
	return somaDiagSuperior;
}

int calculaSomaDiagInferior(int vet[5][5]){
int somaDiagInferior = 0;

	for (int i=0; i<5; i++){
		for (int j=0; j<5; j++){
			if (i > j){
				somaDiagInferior = somaDiagInferior + vet[i][j];
			}
		}
	}
	return somaDiagInferior;
}
