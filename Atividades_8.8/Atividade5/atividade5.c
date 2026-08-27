/**5) 5) Codificar uma função para calcular a quantidade de funcionários que possuem
        salário igual ao maior salário de uma empresa.**/

#include <locale.h>
#define N_FUNCIONARIOS 3

int calculaNmaioresSalarios();

main (){
    setlocale(LC_ALL, "Portuguese");
    printf("%d pessoas recebem o maior salário da empresa", calculaNmaioresSalarios());
}

int calculaNmaioresSalarios(){
    int salarios[N_FUNCIONARIOS];
    int nMaioresSalarios = 0;
    float maiorSalario = salarios[0];

        for(int i = 0; i < N_FUNCIONARIOS; i++){
            printf("Indique o salário do %dº funcionário: ", (i + 1));
            scanf("%f", &salarios[i]);
            if(maiorSalario < salarios[i]){
                maiorSalario = salarios[i];
            }
        }

        for(int i = 0; i < N_FUNCIONARIOS; i++){
            if(maiorSalario == salarios[i]){
                nMaioresSalarios++;
            }
        }

    return nMaioresSalarios;
}
