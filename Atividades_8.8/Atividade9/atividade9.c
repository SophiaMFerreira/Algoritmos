/**9) O supermercado Excelente Preço deseja um programa para registrar todas as vendas realizadas para um cliente. Codificar uma função para calcular o valor a ser
    pago pelo cliente, considerando:
    a) Pagamento a vista – 5% de desconto do valor total da venda dividido em 2 parcelas.
    b) Pagamento com cartão de crédito – 5% de acréscimo ao valor total da venda. **/

#include <stdio.h>
#include <locale.h>
#define QNT_MAX_ITENS 10
#define DESCONTO_A_VISTA 0.05
#define CUSTO_CARTAO 0.05

void contabiliza_vendas(double nota_fiscal[QNT_MAX_ITENS]);
double calula_pagamento( double nota_fiscal[QNT_MAX_ITENS],int forma_pgmt);

main (){
    setlocale(LC_ALL, "Portuguese");
    double nota_fiscal[QNT_MAX_ITENS];
    contabiliza_vendas(nota_fiscal);
        //double nota_fiscal[QNT_MAX_ITENS] = {2, 3, 5, 0, 0 , 0, 0, 0 , 0, 0};
        int forma_pgmt = 1;
        if(forma_pgmt == 2){
            printf("TT   TOTAL PARCELAS X 2 ..................... R$%.2f", calula_pagamento(nota_fiscal, forma_pgmt));
        }else{
           printf("TT   TOTAL  ................................. R$%.2f", calula_pagamento(nota_fiscal, forma_pgmt));
        }


}

// não consigo retornar double/float
void contabiliza_vendas(double nota_fiscal[QNT_MAX_ITENS]){
    for(int i = 0; i < QNT_MAX_ITENS; i++){
        printf("%d   Produto XPTO .......................... R$", i);
        scanf("%f", &nota_fiscal[i]);
        if(nota_fiscal[i] == 0.00){
            i = QNT_MAX_ITENS;
        }
    }
}

//Admite-se:
//1: Pagamento a vista
//2: Pagamento a vista com 5% de desconto do valor total da venda dividido em 2 parcela
//3: Pagamento com cartão de crédito com 5% de acréscimo ao valor total da venda

double calula_pagamento( double nota_fiscal[QNT_MAX_ITENS], int forma_pgmt){
    double total_vendas = 0;
    double valor_a_pagar = 0.00;
    for(int i = 0; i < strlen(nota_fiscal); i++){
        total_vendas = total_vendas + nota_fiscal[i];
    }
    switch (forma_pgmt){
        case 1:
            return total_vendas;
            break;
        case 2:
            valor_a_pagar = (total_vendas * (1 - DESCONTO_A_VISTA)) / 2;
            return valor_a_pagar;
            break;
        case 3:
            valor_a_pagar = total_vendas * (1 + DESCONTO_A_VISTA);
            return valor_a_pagar;
            break;
        default:
            return 0.00;
            break;
    }
}
