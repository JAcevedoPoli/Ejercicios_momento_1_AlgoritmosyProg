#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float consumoAgua,consumoEnergia,valorAgua,valorEnergia,DescuentoAgua,DescuentoEnergia,valorTotal;
int estrato;
int main(int argc, char** argv) {
	printf("Ingrese el consumo de agua (m³): ");
	scanf("%f",&consumoAgua);
	printf("Ingrese el consumo de energia (Kw): ");
	scanf("%f",&consumoEnergia);
	printf("Ingrese el estrato socioeconomico: ");
	scanf("%d",&estrato);
	if(consumoAgua<=2000){
		valorAgua=35000;
	}else{
		valorAgua=35000+(consumoAgua-2000)*400;
	}
	if(consumoEnergia<=3000){
		valorEnergia=30000;
	}else{
		valorEnergia=30000+(consumoEnergia-3000)*350;
	}
	switch(estrato){
		case 1:
		case 2:
			DescuentoAgua=valorAgua * 0.1;
			DescuentoEnergia=valorEnergia * 0.15;
			break;
		case 3:
		case 4:
			DescuentoAgua=valorAgua * 0.5;
			DescuentoEnergia=valorEnergia * 0.1;
			break;
		case 5:
		case 6:
			DescuentoAgua=0;
			DescuentoEnergia=valorEnergia*0.5;
			break;
		default: 
			printf("Estrato Inválido");
			break;
	}
	valorTotal=(valorAgua-DescuentoAgua)+(valorEnergia-DescuentoEnergia);
	printf("El valor total a pagar es:%f",valorTotal);

	return 0;
}
