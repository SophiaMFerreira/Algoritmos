/*8. Codificar uma função para verificar se 3 valores inteiros podem ser lados de
     um triângulo. Em caso positivo a função deverá indicar o tipo de triângulo
     (escaleno, isósceles ou equilátero). A função deve retornar 0 (não é triangulo),
      1 (escaleno), 2(isósceles) ou 3 (equilátero).
*/

int verificaTriangulo(int ladoA, int ladoB, int ladoC);

int main(){
    printf("%d\n", verificaTriangulo(1, 2, 5));
    printf("%d\n", verificaTriangulo(16, 20, 30));
    printf("%d\n", verificaTriangulo(20, 20, 30));
    printf("%d\n", verificaTriangulo(20, 20, 20));
}

 int verificaTriangulo(int ladoA, int ladoB, int ladoC){
    if(((ladoA + ladoB) > ladoC) && ((ladoA + ladoC) > ladoB) && ((ladoB + ladoC) > ladoA)){
        if((ladoA == ladoB) && (ladoA == ladoC)){
            return 3;
        }else{
            if((ladoA == ladoB) || (ladoA == ladoC) || (ladoB == ladoC)){
                return 2;
            }else{
                return 1;
            }
        }
     }else {
        return 0;
     }
 }
