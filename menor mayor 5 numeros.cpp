#include <stdio.h>
int n1,n2,n3,n4,n5;
int main()
{
	printf("ingresa un numero\n");
	scanf("%d",&n1);
	printf("ingresa un numero\n");
	scanf("%d",&n2);
	printf("ingresa un numero\n");
	scanf("%d",&n3);
	printf("ingresa un numero\n");
	scanf("%d",&n4);
	printf("ingresa un numero\n");
	scanf("%d",&n5);
	if (n1>=n2 && n1>=n3 && n1>=n4 && n1>=n5)
	{
		printf("el numero mayor es%d\n",n1);	
	}
	else if (n2>=n1 && n2>=n3 && n2>=n4 && n2>=n5)
	{
		printf("el numero mayor es%d\n",n2);
	}
	else if (n3>=n1 && n3>=n2 && n3>=n4 && n3>=n5)
	{
		printf("el numero mayor es%d\n",n3);
	}
	else if (n4>=n1 && n4>=n3 && n4>=n2 && n4>=n5)
	{
		printf("el numero mayor es%d\n",n4);
	}
	else if (n5>=n1 && n5>=n3 && n5>=n4 && n5>=n2)
	{
		printf("el numero mayor es%d\n",n5);
	}
	else 
	{
		printf("no hay numero mayor\n");
	}
	if (n1<=n2 && n1<=n3 && n1<=n4 && n1<=n5)
	{
		printf("el numero menor es%d\n",n1);	
	}
	else if (n2<=n1 && n2<=n3 && n2<=n4 && n2<=n5)
	{
		printf("el numero menor es%d\n",n2);
	}
	else if (n3<=n1 && n3<=n2 && n3<=n4 && n3<=n5)
	{
		printf("el numero menor es%d\n",n3);
	}
	else if (n4<=n1 && n4<=n3 && n4<=n2 && n4<=n5)
	{
		printf("el numero menor es%d\n",n4);
	}
	else if (n5<=n1 && n5<=n3 && n5<=n4 && n5<=n2)
	{
		printf("el numero menor es%d\n",n5);
	}
	else 
	{
		printf("no hay numero menor\n");
	}
	return 0;
}
