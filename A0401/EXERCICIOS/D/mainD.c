#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num;

    printf("Informe um número natural: ");
    scanf("%d", &num);

    printf("O número natural %d em binário é: %d", num, binario(num));

    return (EXIT_SUCCESS);
}

int binario(int n) {
    int binario, aux, digitos, potencia;
    aux = n;
    binario = 0;
    potencia = 1;

    while (aux > 0) {
        digitos = aux % 2;
        aux = aux / 2;
        binario = binario + (digitos * potencia);
        potencia = potencia * 10;
    }

    return binario;
}
