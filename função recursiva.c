#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);
    }
}

int main() {
    int escolha, num1, num2;
    
    printf("Escolha uma operação:\n");
    printf("1. Calcular o fatorial de um número\n");
    printf("2. Calcular o N-ésimo termo da sequência de Fibonacci\n");
    printf("3. Calcular o MDC de dois números\n");
    scanf("%d", &escolha);
    
    switch (escolha) {
        case 1:
            
            printf("Digite um número: ");
            scanf("%d", &num1);
            printf("Fatorial de %d é: %d\n", num1, fatorial(num1));
            break;
        
        case 2:
           
            printf("Digite o termo N da sequência de Fibonacci: ");
            scanf("%d", &num1);
            printf("O termo %d da sequência de Fibonacci é: %d\n", num1, fibonacci(num1));
            break;
        
        case 3:
            
            printf("Digite dois números: ");
            scanf("%d %d", &num1, &num2);
            printf("O MDC de %d e %d é: %d\n", num1, num2, mdc(num1, num2));
            break;
        
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}