#include <iostream>
#include <math.h>
using namespace std;
#define euler 2.7187
#define pdscto 0.15//Sistema ingles
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int cod;
char pwd[20];//Sin espacios
//string pwd1;
float v_compra, v_pagar;
float base, altura, area;
int main(int argc, char** argv) {
	printf("Digite el codigo:"); 
	scanf("%d",&cod);
	system("Color 0A");
	printf("Password:");
	scanf("%s",&pwd);
	printf("Bienvenido %d con clave %s al Poli\n",cod,pwd);
	system("Color 0C");
	printf("Valor de la compra:");
	scanf("%f",&v_compra);
	v_pagar=v_compra-v_compra*pdscto;
	printf("El valor a pagar:%f\n",v_pagar);
	system("Color 04");
	printf("Base:");//Escriba
	scanf("%f",&base);//Lea
	printf("Altura:");
	scanf("%f",&altura);
	area=base*altura/2;//Operación
	system("Color 0D");
	printf("Area:%f",area);
	printf("\nTan(cod):%f",tan(cod));
	system("Color 0F");
	return 0;
}
