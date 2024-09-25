#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Num;
int main(int argc, char** argv) {
	printf("Digite un numero del 1 al 7:");
	scanf("%d",&Num);
	switch (Num){
		case 1:printf("El numero equivale a Lunes");
				break;
		case 2:printf("El numero equivale a Martes");
				break;
		case 3:printf("El numero equivale a Miercoles");
				break;
		case 4:printf("El numero equivale a Jueves");
				break;
		case 5:printf("El numero equivale a Viernes");
				break;
		case 6:printf("El numero equivale a Sabado");
				break;
		case 7:printf("El numero equivale a Domingo");
				break;
		default: printf("Numero fuera del rango");
				break;
	}
	return 0;
}
