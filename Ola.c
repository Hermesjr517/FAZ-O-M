#include <stdio.h>
#include <stdlib.h>

void main() {
    int x = 0; //criando uma variavel inteira
    printf("valor de x: %d\n",x);
    x++; //incrementando x em 1 unidade
    printf("valor de x: %d\n",x);
    float y = 12.3; //criando uma variavel Real
    printf("valor de y: %f\n",y);
     //imprimindo o valor de y com apenas 2 casas
    printf("valor de y: %.2f\n",y);
    //1caracter deve estar entre apóstofo
    char sexo = 'M';
    //variavel que aceita 1 caracter
    printf("sexo: %c\n", sexo);
    //criando uma variel String(texto
    char nome[30] = "calabreso";
    printf("nome: %s\n", nome);
    //imprimindo a pramiera letra do nome
    printf("primeira letra: %c\n", nome[0]);
    printf("Olá mundo!");
}
#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q1() {
    printf("Hermes Junior\n");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2() {
    printf("30*27 = %d\n", 30*27);
}

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q3() {
    float media = (5+8+12)/3.0;
    printf("Média de 5,8,12 é igual a %.1f\n", media);
}

//4. Faça um programa que leia e imprima um número inteiro.
void q4() {
    int num = 0;
    printf("Digite um valor numérico inteiro: ");
    scanf("%d", &num);
    printf("O valor digitado foi %d\n", num);
}
//5. Faça um programa que leia dois números reais e os imprima.
void q5() {
    float x = 0;
    printf("valor de x: %f\n",x);
    x++;
    printf("valor de x: %f\n",x);
    float y = 1;
    printf("valor de y: %f\n",y);
    y++;

}

//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q6() {
    int num = 0;
    printf("digite o valor de um numero inteiro:");
    scranf("%d", &num);
    printf("o valor digitado foi %d\n",num);


}

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados. 
void q7() {
    char nome[50], endereco[50], telefone[14];
    print("Nome: ");
    scanf(" %50[^\n]", nome);
    printf("endereço: ");
    scanf(" %50[^\n]", endereço);
    print("telefone: ");
    scanf(" %14[^\n]", telefone);
    printf("%s\n%s\n",nome, endereço, telefone);
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q8() {
    float subtração = (75-23);
    printf("resultado da subtração: 8,10 é igual = ");
    
}

//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.
void main()
{
    int n, n2, subtração;
    printf("digite o numero 1:");
    scanf("%f", &n);
    Resultado = n / 4;
    printf("Resultado: %f", resultado);
}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void main()
float n1, n2, n3, media;
printf("digite o numero 1:");
scanf("%f", &n1);
printf("digite o numero 2:");
scanf("%f", &n2);
printf("digite o numero 3:");
scanf("%f", &n3);
madia = (n1+n2+n3) / 3;
printf("media: %f", media);

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void main(
    {
        float n1, n2, resultado;
        printf("digite o numero 1:");
        scanf("%f", &n1);
        printf("digite o numero 2:");
        scanf("%f", &n2);
        resultado = n1 + n2;
        printf("\nsoma: %f", resultado);
        resultado = n1 - n2;
        printf("\subtração: %f", resultado);
        resultado = n1 * n2;
        printf("\nmultiplicação: %f", resultado);
        resultado = n1 / n2;
        printf("\ndivisão: %f", resultado);
    }
)

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void main()
{
    float num, resultado;
    printf("digite o numero:");
    scanf("%f", num);
    resultado = num * num;
    printf("quadrado do numero: %f", resultado);

}

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void main()
{
    float saldo, novosaldo;
    printf("digite o salto:");
    scanf("%f", &saldo);
    novosaldo = saldo + saldo * 0.02;
    printf("saldo com reajuste: %f", novosaldo);
}

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).
void main()
{
    float base, altura, perimetro, area;
    printf("digite a base:");
    scanf("%f", &base);
    printf("digite a altura:");
    scanf("%f", &altura);
    perimetro = base + altura;
    area = base * altura;
    printf("perimetro: %f\n", perimetro);
    printf("area: %f\n", area);
}

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
    q1();
    return EXIT_SUCCESS;
}