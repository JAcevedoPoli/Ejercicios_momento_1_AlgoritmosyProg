#include <iostream>
int ndias, kms;
float vpagar;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float valor_viaje(int ndias, int kms){
	vpagar=kms*89;
	if(kms>1000 && ndias>5){
		return vpagar*0.7;	
	}else{
		return vpagar;
	}
}


int main(int argc, char** argv) {
	printf("Digite la distancia en KM: ");
	scanf("%d",&kms);
	printf("Digite la cantidad de dias de hospedaje: ");
	scanf("%d",&ndias);
	vpagar=valor_viaje(ndias,kms);
	printf("El valor a pagar por el pasaje de ida y vuelta es de: %f", vpagar);
	return 0;
}
