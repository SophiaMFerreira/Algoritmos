/*  16) Codificar uma função para imprimir triângulos retângulos com altura definida pelo
        usuário. Veja a saída desejada para um triangulo de altura 4:
*
**
***
****

*/

void exibeTriangulos(int altura);

int main(){
    int altura;
    printf("Digite quantas vezes deseja repetir: \n");
    scanf("%d", &altura);
    exibeTriangulos(altura);
}

void exibeTriangulos(int altura){
    for(int i = 0; i <=  altura; i++){
        for(int l = 0; l <  i; l++){
            printf("* ");
        }
        printf("\n");
    }
}
