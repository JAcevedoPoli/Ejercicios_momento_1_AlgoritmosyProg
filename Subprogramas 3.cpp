#include <iostream>
char Nombre[20];
int nviajes,npsj,tpasaj,Cedula;
float vcmb,vrps,salario,aporte,uneta;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void salario_aporte(){
	float com;
	if(nviajes>=120 && npsj>1000){
		com=tpasaj*0.05;
	}else if(nviajes>=120 && npsj<=1000 && npsj>500){
		com=tpasaj*0.03;
	}else{
		com=0;
	}
	salario=1300000+com;
	if(tpasaj>10*1300000){
		aporte=tpasaj*0.03;
	}else{
		aporte=tpasaj*0.02;
	}
}

float utilidad(int tpasaj,float salario, float vcmb, float aporte, float vrps){
	return tpasaj-salario-aporte-vcmb-vrps;
}

int main(int argc, char** argv) {
	printf("Digite el nombre del conductor: ");
	scanf("%s",&Nombre);
	printf("Digite la cedula del conductor: ");
	scanf("%d",&Cedula);
	printf("Digite la cantidad de pasajeros: ");
	scanf("%d",&npsj);
	printf("Digite la cantidad de viajes: ");
	scanf("%d",&nviajes);
	printf("Digite el valor del combustible: ");
	scanf("%f",&vcmb);
	printf("Digite el valor en mano de obra y repuestos: ");
	scanf("%f",&vrps);
	tpasaj=8000*npsj;
	salario_aporte();
	printf("El nombre del conductor es: %s\n",Nombre);
	printf("La cedula del conductor es: %d\n",Cedula);
	printf("El salario del empleado es: %f\n",salario);
	printf("El valor de los aportes es %f\n", aporte);
	uneta = utilidad(tpasaj,salario,vcmb,aporte,vrps);
	printf("El valor de la utilidad neta en el mes es de: %f\n", uneta);
	return 0;
}
