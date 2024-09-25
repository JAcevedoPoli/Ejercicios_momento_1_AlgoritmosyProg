#include <iostream>
int tipo;
float area;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//void triangulo()
float triangulo(){
	//variables locales
	float base,altura;
	printf("Digite la base:");
	scanf("%f",&base);
	printf("Digite la altura:");
	scanf("%f",&altura);
	return base*altura/2;
	//area = base*altura/2;
}
//void cuadrado()
float cuadrado(){
	//variable local
	float lado;
	printf("Digite el lado:");
	scanf("%f",&lado);
	return lado*lado;
	//area=lado*lado;
}
//void trapecio()
float trapecio(){
	//variables locales
	float base_M, base_m, altura;
	printf("Digite la base mayor:");
	scanf("%f",&base_M);
	printf("Digite la base menor:");
	scanf("%f",&base_m);
	printf("Digite la altura:");
	scanf("%f",&altura);
	return (base_M+base_m)*altura/2;
	//area=(base_M+base_m)*altura/2;
}

int main(int argc, char** argv) {
	printf("Menu Areas:\n");
	printf("1. Triangulo\n");
	printf("2. Cuadrado\n");
	printf("3. Trapecio\n");
	printf("4. Salir\n");
	scanf("%d",&tipo);
	switch(tipo){
		case 1: area=triangulo(); break; //triangulo()
		case 2: area=cuadrado(); break; //cuadrado()
		case 3: area=trapecio(); break; //trapecio()
		case 4: break;
		default: printf("Fuera del rango"); break;
	}
	printf("El area de la figura es:%f", area);
	return 0;
}
