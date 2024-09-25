#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int num;
int main(int argc, char** argv) {
	printf("Digite el numero a comparar: ");
	scanf("%d",&num);
	if (num=0){
		printf("El numero es cero");
	}else if(num<0){
		printf("El numero es negativo");
	}else{
		printf("El numero es positivo");
	}
	return 0;
}
