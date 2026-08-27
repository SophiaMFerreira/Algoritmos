/* Questão 2) Codificar uma função capaz de calcular a quantidade de países com IDH (indice de
            desenvolvimento humano) inferior à média geral. A ONU, junto aos 193 países participantes, é
            responsável pelo registro desse índice para cada país membro
*/

#define PAISES_ONU 4

int verificaAbaixoMediaIDH(float idhPaises[PAISES_ONU]);

int main(){
    float paises[PAISES_ONU] = {0.1, 0.2, 0.3, 0.55};
    printf("%d", verificaAbaixoMediaIDH(paises));
}

int verificaAbaixoMediaIDH( float idhPaises[PAISES_ONU]){

    int paisesAbaixoMedia = 0;
    double idhMedio = 0;
    for(int i = 0; i < PAISES_ONU; i++){
        idhMedio += idhPaises[i];
    }
    idhMedio /= PAISES_ONU;
    for(int i = 0; i < PAISES_ONU; i++){
        if(idhPaises[i] < idhMedio){
            paisesAbaixoMedia++;
        }
    }
    return paisesAbaixoMedia;
}
