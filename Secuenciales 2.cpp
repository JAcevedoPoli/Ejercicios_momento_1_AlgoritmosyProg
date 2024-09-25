#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int m10,m20,m50,m100,totalvm;
int main(int argc, char** argv) {
	system("Color 0A");
	printf("Digite la cantidad de monedas de 10: ");
	scanf("%d",&m10);
	system("Color 0D");
	printf("Digite la cantidad de monedas de 20: ");
	scanf("%d",&m20);
	system("Color 0F");
	printf("Digite la cantidad de monedas de 50: ");
	scanf("%d",&m50);
	system("Color 0C");
	printf("Digite la cantidad de monedas de 100: ");
	scanf("%d",&m100);
	totalvm=m10*10+m20*20+m50*50+m100*100;
	printf("El valor total de las monedas es:%d",totalvm);
	return 0;
}
