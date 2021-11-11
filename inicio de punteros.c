#include <stdio.h>

int main() {

int num;
num = 10;
int *puntero=NULL; /*No confundir esto declara que es un tipo puntero*/
puntero=&num;

*puntero=*puntero+1; /*esto es igual hacer num=num+1*/

printf("%d",num);
/*Ya sea con *puntero o num es la misma celda de memoria y obtiene el mismo valor*/

	
	return 0;
}

