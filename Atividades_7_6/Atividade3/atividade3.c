//3. Quais as saídas produzidas pelo trecho de programa abaixo.
//R.:1, 4, 6, 7, 10, 11

main(){
    int a=10, b=10, c=2;

    if (a){
        printf("\num");
    }else{
        printf("\ndois");
    }
    if (a-b){
        printf("\ntres");
    }else{
        printf("\nquatro");
    }
    if (a>b){
        printf("\ncinco");
    }else{
        printf("\nseis");
    }
    if (!(a>b)){
        printf("\nsete");
    }else{
        printf("\noito");
    }
    if (a == b && c > a){
        printf("\nnove");
    }else{
        printf("\ndez");
    }
    if (a == b || c > a){
        printf("\nonze");
    }else{
        printf("\ndoze");
    }
}
