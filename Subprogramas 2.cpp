#include <iostream>
float num1,num2,num3,numma;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float Mayor (float num1, float num2,float num3){
	float valma;
	if(num1>num2 && num1>num3){
		valma=num1;
	}else if(num2>num1 && num2>num3){
		valma=num2;
	}else{
		valma=num3;
	}
	return valma;
}
int main(int argc, char** argv) {
	printf("Digite el numero 1: ");
	scanf("%f",&num1);
	printf("Digite el numero 2: ");
	scanf("%f",&num2);
	printf("Digite el numero 3: ");
	scanf("%f",&num3);
	if(num1!=num2 && num2!=num3 && num1!=num3){
		numma=Mayor(num1,num2,num3);
		printf("El numero mayor es: %f",numma);
	}else{
		printf("Hay numeros iguales");
	}
	return 0;
}
