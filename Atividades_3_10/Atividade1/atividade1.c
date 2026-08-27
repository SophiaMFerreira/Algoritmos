/*  1) Quais as saídas produzidas pelos programas abaixo. Dica: utilize o “teste de mesa”
    para auxiliar na depuração dos programas.*/

//Programa 1

/*main(){
	int a=0;
	a=a+1;
	a=a+2;
	a=a+3;
	printf("%d", a);
}*/
//	Resultado: 6


//Programa 2

/*main(){
	int a=1;
	++a;
	printf("%d", a++);
	printf("\n%d", a);
}*/
//Resultado:2 / 3


//Programa 3

/*main(){
	int a;
	a=1;
	a++;
	printf("%d", ++a);
	printf("%d", a);
}*/
//Resultado: 3 / 3


//Programa 4

main(){
	int i=1, j=2, k=3, l=4;
	i++;
	k=++i;
	l=j++;
	++j;
	printf("%d %d %d %d", i, j, k, l);
}
//Resultado:2,3,3,3
