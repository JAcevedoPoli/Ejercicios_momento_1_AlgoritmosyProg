#include <iostream>
int num;
float resultado,peso;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	printf("Introduzca peso en kilogramos:");
	scanf("%f",&peso);
	printf("Seleccione un numero:\n");
	printf("1-Hectogramos:\n");
	printf("2-Decagramos:\n");
	printf("3-Gramos:\n");
	printf("4-Decigramos:\n");
	printf("5-Centigramos:\n");
	printf("6-Miligramos:\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:resultado=peso*10;
			printf("El peso es:%f hg\n",resultado);
			break;
		case 2:
			resultado=peso*100;
			printf("El peso es:%f Dg\n",resultado);
			break;
		case 3:
			resultado=peso*1000;
			printf("El peso es:%f g\n",resultado);
			break;
		case 4:
			resultado=peso*10000;
			printf("El peso es:%f dg\n",resultado);
			break;
		case 5:
			resultado=peso*100000;
			printf("El peso es:%f cg\n",resultado);
			break;
		case 6:
			resultado=peso*1000000;
			printf("El peso es:%f mg\n",resultado);
			break;
		default:
			printf("Opcion no valida");
			break;
	}
	return 0;
}
