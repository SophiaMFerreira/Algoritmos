char verificaMes(mes);

int main(){
int mes = 5;
char mesExtenso = "";
char verificaMes(mes){
    switch (mes) {
        case 1:
            mesExtenso = "janeiro";
            break;
        case 2:
            mesExtenso = "fevereiro";
            break;
        case 3:
            mesExtenso = "março";
            break;
        case 4:
            mesExtenso = "abril";
            break;
        case 5:
           mesExtenso = "maio";
            break;
        case 6:
            mesExtenso = "junho";
            break;
        case 7:
            mesExtenso = "julho";
            break;
        case 8:
            mesExtenso = "agosto";
            break;
        case 9:
           mesExtenso = "setembro";
            break;
        case 10:
            mesExtenso = "outubro";
            break;
        case 11:
            mesExtenso = "novembro";
            break;
        case 12:
            mesExtenso = "dezembro";
            break;
        default:
            mesExtenso = "Falso";
            break;
    }
    return mesExtenso;
}
    printf("%s", verificaMes(mes));

}
