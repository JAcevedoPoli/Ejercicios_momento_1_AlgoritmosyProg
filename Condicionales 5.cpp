#include <iostream>
int barrio1,barrio2,barrio3;
float dscto30,dscto15,Vcarga,Vtotal;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	printf("Digite el numero del barrio 1 (1,6):");
	scanf("%d",&barrio1);
	printf("Digite el numero del barrio 2 (1,6):");
	scanf("%d",&barrio2);
	printf("Digite el numero del barrio 3 (1,6):");
	scanf("%d",&barrio3);
	Vcarga=30000;
	dscto15=0.15;
	dscto30=0.30;
	if (barrio1==barrio2 && barrio2==barrio3){
		Vtotal=3*(Vcarga*(1-dscto30));
	}else if (barrio1==barrio2||barrio2==barrio3||barrio1==barrio3){
		if(barrio1==barrio2&&barrio2!=barrio3){
		Vtotal=2*(Vcarga*(1-dscto15))+Vcarga;
		}else if(barrio1==barrio3&&barrio3!=barrio2){
			Vtotal=2*(Vcarga*(1-dscto15))+Vcarga;
		}else if(barrio2==barrio3&&barrio3!=barrio1){
			Vtotal=2*(Vcarga*(1-dscto15))+Vcarga;
		}
}else{
	Vtotal=3*Vcarga;
}
		
	
	printf("El valor a pagar por el viaje es:%f",Vtotal);
	return 0;
}
