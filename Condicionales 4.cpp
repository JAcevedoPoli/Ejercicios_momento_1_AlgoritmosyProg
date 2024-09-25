#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float Horas, Salario_Diario;
char Turno;
int Domingo;

int main(int argc, char** argv) {
	printf("Digite la cantidad de horas trabajadas: ");
	scanf("%f",&Horas);
	printf("Digite si trabajo el domingo (1[Si], 2[No]): ");
	scanf("%d",&Domingo);
	printf("Digite su horario (D[Diurno], N[Nocturno]): ");
	scanf("%s",&Turno);
	switch(Turno){
		case 'D':
			if(Domingo==1){
				Salario_Diario=(20000+5000)*Horas;
			}else if(Domingo==2){
				Salario_Diario=20000*Horas;
			}else{
				printf("Respuesta invalida");
			}
			break;
		case 'N':
			if(Domingo==1){
				Salario_Diario=(30000+10000)*Horas;
			}else if(Domingo==2){
				Salario_Diario=30000*Horas;
			}
			else{
				printf("Respuesta invalida");
			}
			break;
		default: 
			printf("Turno Invalido");
			break;
	}
	printf("El salario diario del trabajador es:%f",Salario_Diario);
	return 0;
}
