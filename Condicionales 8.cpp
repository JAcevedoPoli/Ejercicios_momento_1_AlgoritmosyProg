#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int N1,N2,N3,N_Mayor;
int main(int argc, char** argv) {
	printf("Digite el n�mero 1:");
	scanf("%d",&N1);
	printf("Digite el n�mero 2:");
	scanf("%d",&N2);
	printf("Digite el n�mero 3:");
	scanf("%d",&N3);
	if(N1>N2 && N1>N3){
		N_Mayor=N1;
	}else if(N2>N1 && N2>N3){
		N_Mayor=N2;
	}else{
		N_Mayor=N3;
	}
	printf("El n�mero mayor es: %d",N_Mayor);
	return 0;
}
