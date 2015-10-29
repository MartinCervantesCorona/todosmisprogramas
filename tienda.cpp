#include <stdio.h>
int r,a,codigo,venta1,chetos,desicion,pepsi,doritos,lala,barritas,total;
//programa principal
int main ()
{
	printf("Ingresa el numero del producto que se va a vender\n1 chetos $7\n2 Pepsi $10\n3 Barritas $8\n4 Leche lala $12\n5 Doritos $8\n");
	scanf("%d",&codigo);
			if 	(codigo==1)
				{
					printf("Has escogido Chetos\n");
					printf("Ingresa la cantidad de productos");
					scanf("%d",&venta1);
					chetos=venta1*7;
					printf("el total por los chetos es de %d",chetos);
				}	printf("\nsi quieres hacer otra compra ingresa 1 \nDe lo contario ingresa cualquier otro valor\n");
			else if (codigo==2)
				{
					printf("has escogido Pepsi\n");
					printf("Ingresa la cantidad de productos");
					scanf("%d",&venta1);
					pepsi=venta1*10;
					printf("el total por los pepsi es de %d",pepsi);
				}	printf("\nsi quieres hacer otra compra ingresa 1 \nDe lo contario ingresa cualquier otro valor");	
			else if (codigo==3)
				{
					printf("has escogido Barritas\n");
					printf("Ingresa la cantidad de productos");
					scanf("%d",&venta1);
					barritas=venta1*8;
					printf("el total por las barritas es de %d",barritas);
				}	printf("\nsi quieres hacer otra compra ingresa 1 \nDe lo contario ingresa cualquier otro valor");
			else if (codigo==4)
				{
					printf("has escogido Leche Lala\na");
					printf("Ingresa la cantidad de productos");
					scanf("%d",&venta1);
					lala=venta1*12;
					printf("el total por la leche es de %d",lala);
				}	printf("\nsi quieres hacer otra compra ingresa 1 \nDe lo contario ingresa cualquier otro valor");			
			else if (codigo==5)
				{
					printf("has escogido Doritos\n");
					printf("Ingresa la cantidad de productos");
					scanf("%d",&venta1);
					doritos=venta1*8;
					printf("el total por los doritos es de %d",doritos);
		     	}
			else 
					{
						
					}
	
		return 0;			
      	}     


