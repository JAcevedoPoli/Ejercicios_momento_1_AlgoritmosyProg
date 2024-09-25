#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int Producto;
float M,P,T,Cacao,Unidades,Costo,Precio_venta;

int main(int argc, char** argv) {
	printf("Digite los kilos de Cacao utilizados: ");
	scanf("%f",&Cacao);
	printf("Digite Digite el producto (1[Jumbo], 2[Blanca], 3[Dulce]): ");
	scanf("%d",&Producto);
	switch(Producto){
		case 1: 
			M=Cacao*(0.015+0.025+0.1+1);
			P=10200*Cacao;
			T=300*Cacao;
			Unidades=75*Cacao;
			break;
		case 2:
			M=Cacao*(0.0035+1);
			P=8100*Cacao;
			T=270*Cacao;
			Unidades=(10*Cacao)/4;
			break;
		case 3: 
			M=Cacao*(0.035+0.05+1);
			P=8800*Cacao;
			T=280*Cacao;
			Unidades=(10*Cacao)/5;
			break;
		default:
			printf("Producto Inválido");
	}
	Costo=(M*P)/(T);
	printf("El costo unitario es: $ %f\n",Costo);
	printf("Las unidades son: %f\n",Unidades);
	if(Producto==1 && Costo<1300){
		Precio_venta=Costo+2000;
	}else if(Producto==1 && Costo>=1300){
		Precio_venta=Costo+1000;
	}else if(Producto==2 && Costo<2500){
		Precio_venta=Costo+1500;
	}else if(Producto==2 && Costo>=2500){
		Precio_venta=Costo+500;
	}else if(Producto==3 && Costo<3000){
		Precio_venta=Costo+3000;
	}else if(Producto==3 && Costo>=3000){
		Precio_venta=Costo+2000;
	}else{
		printf("ERROR");
	}
	printf("El precio de venta es de: $ %f\n",Precio_venta);
	return 0;
}
