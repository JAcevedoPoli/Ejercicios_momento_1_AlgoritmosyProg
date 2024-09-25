#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float p1,p2,p3,ef,tf,notafinal;
int main(int argc, char** argv) {
	printf("Digite el parcial 1:");
	scanf("%f",&p1);
	printf("Digite el parcial 2:");
	scanf("%f",&p2);
	printf("Digite el parcial 3:");
	scanf("%f",&p3);
	printf("Digite el examen final:");
	scanf("%f",&ef);
	printf("Digite el trabajo final:");
	scanf("%f",&tf);
	notafinal=((p1+p2+p3)/3)*0.55+ef*0.3+tf*0.15;
	printf("La nota definitiva es: %f",notafinal);
	return 0;
}
