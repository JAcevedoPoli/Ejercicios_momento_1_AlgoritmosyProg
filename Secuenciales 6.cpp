#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float Pedro,Alberto,Ana,Mama;
int main(int argc, char** argv) {
	printf("Digite la edad de Pedro:");
	scanf("%f",&Pedro);
	Alberto=(2*Pedro)/3;
	Ana=(4*Pedro)/3;
	Mama=Pedro+Alberto+Ana;
	printf("La edad de Pedro es: %f\n",Pedro);
	printf("La edad de Alberto es: %f\n",Alberto);
	printf("La edad de Ana es: %f\n",Ana);
	printf("La edad de la Mamá es: %f\n",Mama);
	return 0;
}
