#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float C1,C2,C3,Total_inv,Pc1,Pc2,Pc3;
int main(int argc, char** argv) {
	printf("Digite la inversión de la persona 1:");
	scanf("%f",&C1);
	printf("Digite la inversión de la persona 2:");
	scanf("%f",&C2);
	printf("Digite la inversión de la persona 3:");
	scanf("%f",&C3);
	Total_inv=C1+C2+C3;
	Pc1=(C1*100)/Total_inv;
	Pc2=(C2*100)/Total_inv;
	Pc3=(C3*100)/Total_inv;
	printf("El total invertido es: %f\n",Total_inv);
	printf("El porcentaje de la persona 1 es: %f\n",Pc1);
	printf("El porcentaje de la persona 2 es: %f\n",Pc2);
	printf("El porcentaje de la persona 3 es: %f\n",Pc3);
	return 0;
}
