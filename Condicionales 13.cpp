#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float Tiempo,Salario_Bruto,Deducciones,Aux_Transporte,Salario_Neto; 
int Rango;

int main(int argc, char** argv) {
	printf("Digite el rango de empleado (1-3):");
	scanf("%d",&Rango); 
	printf("Digite el tiempo del empleado en la empresa:");
	scanf("%f",&Tiempo);
	switch(Rango){
		case 1:
			if(Tiempo<=10){
				Salario_Bruto=1200000;
				Deducciones=0;
				Aux_Transporte=162000;
			}else{
					Salario_Bruto=1500000;
					Deducciones=Salario_Bruto*0.01;
					Aux_Transporte=145000;
				}
			break;
		case 2:
			if(Tiempo<=7){
				Salario_Bruto=1670000;
				Deducciones=Salario_Bruto*0.03;
				Aux_Transporte=134000;
			}else{
					Salario_Bruto=1700000;
					Deducciones=Salario_Bruto*0.05;
					Aux_Transporte=110000;
				}
			break;
		case 3:
			if(Tiempo<=9){
				Salario_Bruto=1850000;
				Deducciones=Salario_Bruto*0.07;
				Aux_Transporte=98000;
			}else{
					Salario_Bruto=2150000;
					Deducciones=Salario_Bruto*0.08;
					Aux_Transporte=0;
				}
			break;
		default:
			printf("Rango inválido");
			break;
	}
	Salario_Neto=Salario_Bruto-Deducciones+Aux_Transporte;
	printf("El salario neto de los empleados es de:%f", Salario_Neto);
	return 0;
}
