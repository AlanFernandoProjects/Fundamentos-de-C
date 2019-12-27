#include <stdio.h>
#include <stdlib.h>

float n1, n2;
float suma(float num1, float num2);
float resta(float num1, float num2);
float mult(float num1, float num2);
float division(float num1, float num2);

int main(int argc, char *argv[]){
	char *opcion;
	if(argc !=4){
		printf("Uso: ./principal <numero1> <+|-|x|/>  <numero2>\n");
		return -1;
	}
	n1 = atof(argv[1]);
	n2 = atof(argv[3]);
	opcion = argv[2];

	switch(opcion[0]){
		case '+':
			printf("%.2f\n",suma(n1,n2));
			break;
		case '-':
			printf("%.2f\n",resta(n1,n2));
			break;

		case 'x':
			printf("%.2f\n",mult(n1,n2));
			break;
		case '/':
			if(n2 !=0)
				printf("%.2f\n",division(n1,n2));
			else
				printf("No se puede dividir entre 0\n");
			break;
		default:
			printf("Operador no valido\n");
	}
	return 0;
}

