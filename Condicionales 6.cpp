#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float V_compra, V_pagar, dcto;
int balota;
int main(int argc, char** argv) {
	printf("Digite el valor de su compra: ");
	scanf("%f",&V_compra);
	printf("Digite el numero de su balota: ");
	scanf("%d",&balota);
	if(balota==1){
		dcto=0;
	}else if(balota==2){
		dcto=V_compra*0.09;
	}else if(balota==3){
		dcto=V_compra*0.3;
	}else if(balota==4){
		dcto=V_compra;
	}else{
		printf("ERROR número fuera del campo");
	}
	V_pagar=V_compra-dcto;
	printf("El valor a pagar es: %f\n",V_pagar);
	printf("El descuento es de: %f",dcto);
	return 0;
}
