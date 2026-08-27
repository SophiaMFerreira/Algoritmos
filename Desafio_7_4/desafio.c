// Desafio:
// Crie uma versão para a função eDivisivel que contenha apenas uma linha de instrução.

int eDivisivel(int a, int b);

int main(){
    printf("6/3=>%d\n", eDivisivel(6,3));
    printf("3/2=>%d\n", eDivisivel(3,2));
    printf("0/9=>%d", eDivisivel(0,9));
}

int eDivisivel(int a, int b){
    return (a % b) ? 0 : 1;
}
