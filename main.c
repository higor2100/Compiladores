#include <stdio.h>
#include <string.h>

int main() {
    char *expo;

    printf("Entrada: \n");
    scanf("%s", expo);

    for (int i = 0; i < strlen(expo); i++) {

        if (expo[i] == '(') {
            printf("Pontuação(Abre Parenteses)\n");
        } else if (expo[i] == ')') {
            printf("Pontuação(Fecha Parenteses)\n");
        } else if (expo[i] == '+') {
            printf("Operador(Soma)\n");
        } else if (expo[i] == '-') {
            printf("Operador(Subtração)\n");
        } else if (expo[i] == '/') {
            printf("Operador(Divisão)\n");
        } else if (expo[i] == '*') {
            printf("Operador(Multiplicação)\n");
        } else if (expo[i] == '0' || expo[i] == '1' || expo[i] == '2' || expo[i] == '3' ||
                   expo[i] == '4' || expo[i] == '5' || expo[i] == '6' || expo[i] == '7' ||
                   expo[i] == '8' || expo[i] == '9') {
            printf("Numero(%c)\n", expo[i]);
        } else {
            printf("Expressao invalida");
            break;
        }


    }

    return 0;
}
