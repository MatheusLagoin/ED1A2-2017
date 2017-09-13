#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int m, n;

    printf("Informe a quantidade de vezes que o n�mero ser� multiplicado: ");
    scanf("%d", &m);
    printf("Informe o n�mero que ser� multiplicado: ");
    scanf("%d", &n);

    printf("A multiplica��o dos n�meros �: %d", multiplicacao(m, n));

    return (EXIT_SUCCESS);
}

int multiplicacao(int m1, int n1) {
    int i, ant, prox, res = 0;
    ant = 0;
    prox = n1;

    for (i = 1; i <= (m1 + 1); i++) {
        res = res + ant;
        ant = prox;
        prox = n1;
    }

    return res;
}
