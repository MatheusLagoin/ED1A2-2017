#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num;
    
    printf("Insira um número: ");
    scanf("%d", &num);
    
    printf("A função Fibonacci do número %d é:\n", num);
    printf("%d", fibonacci(num));

    return (EXIT_SUCCESS);
}

int fibonacci(int n) {
    int i, ant, atu, prox, res;
    ant = 1;
    atu = 1;
    
    for (i = 1; i < n; i++) {
        prox = atu + ant;
        ant = atu;
        atu = prox;
        res = ant;
    }
    
    return res;
}
