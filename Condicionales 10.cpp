#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Num;
int main(int argc, char** argv) {
	printf("Digite el n�mero:");
	scanf("%d",&Num);
	switch(Num){
		case 1: printf("El n�mero equivale a I"); 
				break;
		case 2: printf("El n�mero equivale a II"); 
				break;
		case 3: printf("El n�mero equivale a III"); 
				break;
		case 4: printf("El n�mero equivale a IV"); 
				break;
		case 5: printf("El n�mero equivale a V"); 
				break;
		default: printf("N�mero fuera del rango");
	}
	return 0;
}
