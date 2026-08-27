/*  1) Qual será a configuração do vetor num depois de executado o trecho de
       programa abaixo?*/

void trexoPrograma();

main(){
	trexoPrograma();
}

void trexoPrograma(){
    int num[5][5], i , j;

	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			if (i>j){
				num[i][j]=1;
				printf("%d    ",num[i][j]);
			}
			if (i==j){
				num[i][j]=0;
				printf("%d    ",num[i][j]);
			}
			if (i<j){
				num[i][j]=-1;
				printf("%d    ",num[i][j]);
			}
		}
		printf("\n");
	}
}
