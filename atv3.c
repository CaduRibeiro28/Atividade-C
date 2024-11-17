1. Leitura de Dados do Vetor

// Carlos Eduardo Ribeiro Lacerda
#include <stdio.h>

#define MAX 100

void lerPessoas(char pessoas[MAX][50], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i]);
    }
}

int main() {
    char pessoas[MAX][50];
    int n;

    printf("Quantas pessoas você deseja registrar? ");
    scanf("%d", &n);

    lerPessoas(pessoas, n);

    for (int i = 0; i < n; i++) {
        printf("Pessoa %d: %s\n", i + 1, pessoas[i]);
    }

    return 0;
}
2. Análise de Código

// Carlos Eduardo Ribeiro Lacerda
#include <stdio.h>

int main() {
    int a = 5; // Declara e inicializa a variável a
    int b = 10; // Declara e inicializa a variável b
    int soma = a + b; // Soma a e b e armazena em soma
    printf("A soma é: %d\n", soma); // Imprime a soma
    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}
3. Loop para Exibir Números

// Carlos Eduardo Ribeiro Lacerda
#include <stdio.h>

int main() {
    int i; // Declara a variável i
    for (i = 1; i <= 10; i++) { // Loop de 1 a 10
        printf("%d ", i); // Imprime o valor de i
    }
    printf("\n"); // Nova linha após o loop
    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}
4. Cálculo da Média de Quatro Notas

// Carlos Eduardo Ribeiro Lacerda
#include <stdio.h>

float calcularMedia(float n1, float n2, float n3, float n4) {
    return (n1 + n2 + n3 + n4) / 4; // Calcula a média
}

int main() {
    float notas[4];
    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float media = calcularMedia(notas[0], notas[1], notas[2], notas[3]);
    printf("Média: %.2f\n", media);
    printf(media >= 7 ? "Aprovado\n" : "Reprovado\n");

    return 0;
}
5. Números Ímpares

// Carlos Eduardo Ribeiro Lacerda
#include <stdio.h>

void exibirImpares(int numero) {
    for (int i = 1; i <= numero; i++) {
        if (i % 2 != 0 && i % 7 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    exibirImpares(numero);
    return 0;
}
6. Soma e Média dos Valores

// Carlos Eduardo Ribeiro Lacerda
#include <stdio.h>

void somarValores(int *vetor, int n, int *soma) {
    *soma = 0;
    for (int i = 0; i < n; i++) {
        *soma += vetor[i];
    }
}

int main() {
    int n;
    printf("Quantos números deseja inserir? ");
    scanf("%d", &n);
    
    int vetor[n], soma;
    for (int i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    somarValores(vetor, n, &soma);
    float media = (float)soma / n;

    printf("Soma: %d, Média: %.2f\n", soma, media);
    return 0;
}
7. Maior Valor no Vetor

// Carlos Eduardo Ribeiro Lacerda
#include <stdio.h>

int maiorValor(int *vetor, int n, int *posicao) {
    int maior = vetor[0];
    *posicao = 0;
    for (int i = 1; i < n; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            *posicao = i;
        }
    }
    return maior;
}

int main() {
    int n;
    printf("Quantos números deseja inserir? ");
    scanf("%d", &n);

    int vetor[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int posicao;
    int maior = maiorValor(vetor, n, &posicao);
    printf("Maior valor: %d na posição %d\n", maior, posicao);
    return 0;
}
8. Números Pares

// Carlos Eduardo Ribeiro Lacerda
#include <stdio.h>

void exibirPares(int numero) {
    for (int i = 2; i <= numero; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    exibirPares(numero);
    return 0;
}
9. Multiplicação dos Valores do Vetor

// Carlos Eduardo Ribeiro Lacerda
#include <stdio.h>

void multiplicarValores(int *vetor, int n, int *resultado) {
    *resultado = 1; // Inicializa resultado como 1
    for (int i = 0; i < n; i++) {
        *resultado *= vetor[i]; // Multiplica cada elemento
    }
}

int main() {
    int n;
    printf("Quantos números deseja inserir? ");
    scanf("%d", &n);

    int vetor[n], resultado;
    for (int i = 0; i < n; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    multiplicarValores(vetor, n, &resultado);
    printf("Resultado da multiplicação: %d\n", resultado);
    return 0;
}
10. Maior Número

// Carlos Eduardo Ribeiro Lacerda
#include <stdio.h>

void maiorNumero(int num1, int num2) {
    if (num1 > num2) {
        printf("O maior número é: %d\n", num1);
    } else if (num2 > num1) {
        printf("O maior número é: %d\n", num2);
    } else {
        printf("Os números são iguais.\n");
    }
}

int main() {
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    maiorNumero(num1, num2);
    return 0;
}
11. Menor Número

// Carlos Eduardo Ribeiro Lacerda
#include <stdio.h>

int menorNumero(int num1, int num2, int num3) {
    if (num1 <= num2 && num1 <= num3) return num1;
    if (num2 <= num1 && num2 <= num3) return num2;
    return num3;
}

int main() {
    int num1, num2, num3;
    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("O menor número é: %d\n", menorNumero(num1, num2, num3));
    return 0;
}
12. Números em Ordem Inversa

// Carlos Eduardo Ribeiro Lacerda
#include <stdio.h>

void exibirInverso(int *vetor, int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[10];
    printf("Preencha um vetor de 10 posições:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Números em ordem inversa: ");
    exibirInverso(vetor, 10);
    return 0;
}
13. Cálculo da Média de Três Números Inteiros

// Carlos Eduardo Ribeiro Lacerda
#include <stdio.h>

float calcularMedia(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3.0; // Calcula a média
}

int main() {
    int num1, num2, num3;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("A média é: %.2f\n", calcularMedia(num1, num2, num3));
    return 0;
}
14. Cálculo do Resultado

// Carlos Eduardo Ribeiro Lacerda
#include <stdio.h>

int calcularResultado(int soma, int primeiroValor, int ultimoValor) {
    return soma + (primeiroValor * 5) + (ultimoValor * 2);
}

int main() {
    int vetor[10], soma = 0;
    
    // Preenchendo o vetor
    for (int i = 0; i < 10; i++) {
        vetor[i] = i + 1; // Preenche com valores de 1 a 10
        soma += vetor[i]; // Soma os valores
    }

    int resultado = calcularResultado(soma, vetor[0], vetor[9]);
    printf("Resultado: %d\n", resultado);
    return 0;
}


/*  RELATORIO DA ATIVIDADE:

    a adaptação do vetor pessoas[] para permitir entrada de dados direta pelo usuário exigiu uma função específica, que facilitou a interação do programa. Nos exercícios dois e três, a análise linha a linha do código foi fundamental para compreender a lógica e o fluxo de controle. No cálculo de médias e mensagens de aprovação, foi preciso implementar uma estrutura condicional eficiente para exibir o resultado correto.

    Para exibir números ímpares (excluindo múltiplos de 7) e pares em exercícios subsequentes, criamos funções com laços e condições específicas, aprimorando a seleção dos números exibidos. A soma e média de valores em um vetor e a identificação do maior valor e sua posição foram implementadas com funções, simplificando a manipulação de dados e garantindo precisão.

    A função void exibirPares(int numero) permitiu exibir números pares até o valor especificado, enquanto uma função para multiplicar valores no vetor acumulou o produto dos elementos. A comparação entre dois e três números, para exibir o maior ou o menor, trouxe o desafio de estruturar funções que tratam múltiplos casos.

    A exibição de um vetor em ordem inversa e o cálculo de média com duas casas decimais exigiram o uso de laços e formatação específica. No último exercício, calculamos uma expressão com valores específicos do vetor, criando uma função que simplificou o cálculo final.*/