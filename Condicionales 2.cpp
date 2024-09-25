#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float montoTotal,descuento,totalPagar;
char formaPago;

int main(int argc, char** argv) {
	printf("Digite el monto de la venta: ");
	scanf("%f",&montoTotal);
	printf("Digite el metodo de pago: ");
	scanf("%s",&formaPago);
	 switch (formaPago) {
        case 'E':
            if (montoTotal <= 100000) {
                descuento = 0.2 * montoTotal;
            } else if (montoTotal <= 200000) {
                descuento = 0.3 * montoTotal;
            } else {
                descuento = 0.4 * montoTotal;
            }
            break;
        case 'T':
            if (montoTotal <= 100000) {
                descuento = 0.1 * montoTotal;
            } else if (montoTotal <= 200000) {
                descuento = 0.15 * montoTotal;
            } else {
                descuento = 0.2 * montoTotal;
            }
            break;
        default:
            printf("Forma de pago inválida.");
            return 1;
    }
    totalPagar = montoTotal - descuento;
    printf("El total a pagar es:%f",totalPagar);
	return 0;
}
