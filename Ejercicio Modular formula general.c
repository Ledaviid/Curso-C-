#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
/*prototipos*/
float discriminante( int a, int b,int c);
int generarCoeficiente(int a, int b);
void resolverEcuacion(int a, int b, float d,float *x1,float *x2);
int main(){
	int n,i,a,b,c;
	float discri,x1,x2;
	
	srand(time(NULL));
	
	printf("Ingrese la cantidad de ecuaciones:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	a = generarCoeficiente(-30,30);
	b = generarCoeficiente(-30,30);
	c = generarCoeficiente(-30,30);
	 
	discri=discriminante(a,b,c);
	 
	 if(discri>0){
		 printf("Las raices son reales y distintas\n");
		 resolverEcuacion(a,b,discri,&x1,&x2);
		 printf("x1:%f, x2:%f\n",x1,x2);
	 } else if(discri==0){
		 printf("Las raices son reales e iguales\n");
		 resolverEcuacion(a,b,discri,&x1,&x2);
		 printf("x1:%f, x2:%f\n",x1,x2);
	 }
	 else{ printf("Las raices son complejas\n");
	}
	}
	return 0;
}
float discriminante(int a, int b,int c){

return pow(b, 2)-4*a*c; /*podemos retornar expresiones compltas y no solo una variable*/
}
 int generarCoeficiente(int a, int b){
	return a + rand() %(b-a+1);
}
void resolverEcuacion(int a, int b, float d,float*x1,float*x2){
	*x1=(-b+sqrt(d))/2*a;
	*x2=(-b-sqrt(d))/2*a;
}

