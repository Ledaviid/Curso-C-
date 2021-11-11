/*Programa paso por referencia y cabiar el valor despues a las mismas variables
 utilizando la misma referencia de variable*/
#include<stdio.h>
#include<stdlib.h>
void suma(int*,int*);
int main (void)
{

int x;
int y;
printf("Programa que utiiza parametros por referencia\n\n");
printf("Dar el primer valor\n");
scanf("%d",&x);

printf("Dar el segundo valor\n");
scanf("%d",&y);
printf("El valor de las variables antes de la funcion es: %d,%d\n",x,y);
suma(&x,&y);

system ("Pause");
return 0;
}
void suma(int *a,int*b){
	*a=4;
	*b=4;
printf("El valor de las variables despues es:%d,%d\n\n",*a,*b); /*parametros con untero*/
int z;
z=*a+*b;
printf("La suma es: %d\n\n",z);
}
