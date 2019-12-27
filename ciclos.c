#include <stdio.h>

	void f(void);

	int main()
	{
		int i;

		for(i=0;i<10;i++) f();

		return 0;
	} //fin del main

	void f(void)
	{
		int j =10;
		printf("%d\n",j);
		j++;
	}
