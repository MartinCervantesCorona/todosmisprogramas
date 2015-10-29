#include <stdio.h>
int cal;
int main ()
{
	printf("ingresa tu calificacion\n");
	scanf("%d",&cal);
	if (cal>=7)
	{
		printf("Has aprobado la materia");	
	}
	else 
	{
		printf("Has reprobado la materia");	
	}
	return 0;
}
