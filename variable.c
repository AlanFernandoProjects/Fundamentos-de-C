#include <stdio.h>

	int main()
	{
		int x;

		x=10;

		if(x==10)
		{
			int x;//esta x oculta a la x externa
			x=99;
			printf("x interna: %d\n", x);
		}//fin del if

		printf("x externa: %d\n", x);

		return 0;

	}//fin del programa
