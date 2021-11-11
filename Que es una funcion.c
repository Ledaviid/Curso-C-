#include <stdio.h>

int suma(int num1, int num2){
	int resultado;
	resultado= num1+num2;
	return resultado;
}


int main() {
	int a,b,c;
	printf("ingresa valores a y b");
	scanf("%d",&a);
	scanf("%d",&b);
 
	c=suma(a,b);
 
printf("%d",c);	
	return 0;
}

