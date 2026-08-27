/* 20) Uma professora do Ensino Fundamental solicitou sua ajuda. Ela deseja um
programa que possa transformar o aprendizado da tabuada de multiplicação em um
jogo. O programa deve solicitar um número de 1 a 10, em seguida apresentar a
tabuada de multiplicação desse número no formato abaixo:
n x 1 = ?
n x 2 = ?
n x 3 = ?
n x 4 = ?
n x 5 = ?
n x 6 = ?
n x 7 = ?
n x 8 = ?
n x 9 = ?
n x 10 = ?

Atenção:
1. Antes de apresentar o resultado de cada operação o programa
deverá solicitar ao aluno que informe o valor da operação. Para
cada acerto o aluno ganha um ponto.

2. Ao final da tabuada o programa deverá informar a pontuação
total obtida pelo aluno, seguida de uma dessas mensagens:
a. “Excelente” para alunos com nenhum erro.
b. “Estude mais um pouquinho” para alunos com 1 erro.
c. “Estude mais” para alunos com 2 erros.
d. “Estude muito mais” para alunos com 3 erros ou mais.

*/
void verificaDesempenho(int erros);
int verificaResposta(int i, int numero, int resposta);
void imprimeTabuada(int numero);
int main(){
    int numero;

    printf("Indique um numero para verificar sua tabuada.\n");
    scanf("%d", &numero);

    imprimeTabuada(numero);
}

void imprimeTabuada(int numero){
    int i = 1;
    int fimTabuada = 10;
    int resposta;
    int erros = 0;

    while(i <= fimTabuada){
        printf("\n%d x %d = ", numero, i);
        scanf("%d", &resposta);
        if (!verificaResposta(i, numero, resposta)){
            erros++;
        }
        printf("%d x %d = %d\n", numero, i, (i * numero));
        i++;
    }
    verificaDesempenho(erros);
}

int verificaResposta(int i, int numero, int resposta){
    int produto = i * numero;

    if(produto != resposta){
        return 0; //indica falso = houve erro
    }
    return 1; //inidcia verdadeiro = não houve erro
}

void verificaDesempenho(int erros){

   switch(erros){
        case 0:
            printf("Excelente!");
            break;
        case 1:
            printf("Estude mais um pouquinho!");
            break;
        case 2:
            printf("Estude mais!");
            break;
        default:
            printf("Estude muito mais!");
        break;
   }
}
