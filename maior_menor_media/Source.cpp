#include <stdio.h>
#include "stdlib.h"
#include <iostream>
//4. Ler 3 valores, achar maior, menor e média utilizando números inteiros (int).
int main (){

    int v1=0,v2=0,v3=0,maior,menor,media;

    printf("Ler 3 valores diferentes, achar maior, menor e média utilizando números inteiros (int).\n\n");
	printf("Digite o Primeiro valor: ");
    scanf("%d",&v1);
    printf("Digite o Segundo valor: ");
    scanf("%d",&v2);
    printf("Digite o Terceiro valor: ");
    scanf("%d",&v3);
	printf("\n\n");
	if((v1>v2) && (v1>v3))
		printf("O maior valor digitado e: %d\n\n",v1);
	else if((v2>v1) && (v2>v3))
		printf("O maior valor digitado e: %d\n\n",v2);
	else if((v3>v1) && (v3>v2))
		printf("O maior valor digitado e: %d\n\n",v3);

    
	if((v1<v2) && (v1<v3))
		printf("O menor valor digitado e: %d\n\n",v1);
	else if((v2<v1) && (v2<v3))
		printf("O menor valor digitado e: %d\n\n",v2);
	else if((v3<v1) && (v3<v2))
		printf("O menor valor digitado e: %d\n\n",v3);

	printf("A media entre os valores digitados e: %d\n",(v1+v2+v3)/3);
    system("pause");

    return 0;
}   