#include <stdio.h>

int cuenta;//variable global
void func1(void);
void func2(void);

	int main()
	{
		cuenta=100;
		func1();

		return 0;


	}//fin del main

	void func1(void)
	{
		int temp;
		temp=cuenta;
		func2();
		printf("cuenta es %d\n", cuenta);

	}//fin de la func1

	void func2(void)
	{
		int cuenta;
			for(cuenta=1;cuenta<10;cuenta++){
				putchar('@');
				printf("\n");
			}
	}//fin func2


