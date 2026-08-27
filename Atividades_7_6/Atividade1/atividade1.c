/* 1. Considerando a função abaixo:

int X(int A, int B, int C){
    if ((A > B) && (B > C)){
        return A;
    }

    if ((A < B) && (B < C)){
        return B;
    }else{
        return (A + B + C) / 3;
    }
}

Calcule:
a) X(10, 8, -1) : 10;
b) X(1, 3, 5) : 3;
c) X(5, 2, -1) : 5;
d) X(X(10, 8, -1), 6 * X(1, 3, 5), 2) : -> X(10, 18, 2) -> 10;*/

int X(int A, int B, int C);

int main(){
    printf("X(10, 8, -1) => %d", X(10, 8, -1));
    printf("\nX(1, 3, 5) => %d", X(1, 3, 5));
    printf("\nX(5, 2, -1) => %d", X(5, 2, -1));
    printf("\nX(X(10, 8, -1), 6 * X(1, 3, 5), 2) => %d", X(X(10, 8, -1), 6 * X(1, 3, 5), 2));
}

int X(int A, int B, int C){
    if ((A > B) && (B > C)){
        return A;
    }

    if ((A < B) && (B < C)){
        return B;
    }else{
        return (A + B + C) / 3;
    }
}
