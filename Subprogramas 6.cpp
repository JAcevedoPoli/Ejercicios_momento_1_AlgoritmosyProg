#include <iostream>
float m,n,c,fac1,fac2,fac3;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float factorial(float x){
	float fac=1;
	int i=2;
	while(i<=x){
		fac=fac*i;
		i=i+1;
	}
	return fac;
}

int main(int argc, char** argv) {
	printf("Digite el numero m: ");
	scanf("%f",&m);
	printf("Digite el numero n: ");
	scanf("%f",&n);
	fac1=factorial(m);
	fac2=factorial(n);
	fac3=factorial(m-n);
	c=fac1/(fac2*fac3);
	printf("La combinatoria es:%f",c);
	return 0;
}
