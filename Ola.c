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
