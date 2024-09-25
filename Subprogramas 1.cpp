#include <iostream>
float n1,n2,n3,sum,prom;
//variables globales
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Procedimiento Igual cantidad de argumentos
void calculo_notas(){
	sum=n1+n2+n3;
	prom=sum/3;
}
int main(int argc, char** argv) {
	printf("Digite la nota 1: ");
	scanf("%f",&n1);
	printf("Digite la nota 2: ");
	scanf("%f",&n2);
	printf("Digite la nota 3: ");
	scanf("%f",&n3);
	//llamado del procedimiento
	calculo_notas();//Sin argumentos
	printf("Suma:%f\nPromedio:%f",sum,prom);
	return 0;
}
