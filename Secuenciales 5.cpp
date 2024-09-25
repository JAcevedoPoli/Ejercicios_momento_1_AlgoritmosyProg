#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float total_capital,gine,trauma,pedia;
int main(int argc, char** argv) {
	printf("Digite el total del capital ingresado: ");
	scanf("%f",&total_capital);
	gine=total_capital*0.4;
	trauma=total_capital*0.3;
	pedia=total_capital*0.3;
	printf("El dinero para Ginecologia es: %f\n",gine);
	printf("El dinero para Traumatologia es: %f\n",trauma);
	printf("El dinero para Pediatria es: %f\n",pedia);
	return 0;
}
