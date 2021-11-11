#include <stdio.h>
#define N 3

int sumaContenido(int d[N]){

   int i=0,suma=0;
   for(i=0;i<N;i++){
      suma = suma+d[i];
   }
   return suma;
}

int main(){

   int datos[N];
   int suma=0;
   
printf("Ingrese datos 3\n");
scanf("%d",datos[N]);
printf("las variables de arreglo son:\n");
printf("%d",datos[N]);
   
   datos[0];
   datos[1];
   datos[2];
   
   suma=sumaContenido(datos);
   
   printf("Suma: %d\n",suma);
   return 0;
}

