#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int C_pinos, C_cedros;
float N_metros,A_pinos,A_cedros;
int main(int argc, char** argv) {
	printf("Digite la cantidad de terreno: ");
	scanf("%f",&N_metros);
	A_pinos=N_metros*0.35;
	A_cedros=N_metros*0.65;
	C_pinos=(A_pinos*4)/10;
	C_cedros=(A_cedros*5)/15;
	printf("La cantidad de pinos que se pueden sembrar es: %d\n",C_pinos);
	printf("La cantidad de cedros que se pueden sembrar es: %d\n",C_cedros);
	return 0;
}


