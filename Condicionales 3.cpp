#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float l1,l2,l3,Suma;
int main(int argc, char** argv) {
	printf("Digite el lado 1:");
	scanf("%f",&l1);
	printf("Digite el lado 2:");
	scanf("%f",&l2);
	printf("Digite el lado 3:");
	scanf("%f",&l3);
	Suma=l1+l2;
	if (Suma<l3){
		printf("No es un triangulo\n");
	} else if (l1==l2 && l2==l3){
		printf("Es un triangulo equilatero\n");
	}else if (l1!=l2 && l1!=l2 && l2!=l3){
		printf("Es un triangulo escaleno\n");
	}else if (l1==l2||l1==l3||l2==l3){
		printf("Es un triangulo isoceles\n");
	}
	
	return 0;
}
