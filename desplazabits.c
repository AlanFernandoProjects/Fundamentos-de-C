#include <stdio.h>

	int main()
	{
		unsigned int i;

		int j;

		i=1;

		//desplazamiento a la izquierda
		for(j=0;j<4;j++)
		{
			//desplazar i a la izquieda en 1, que es lo mismo que multiplicarlo por 2
			i=i<<1;

			printf("Desplazamiento a la izquierda %d: %d\n",j,i);
		}
	}
