#include<stdio.h>

void valnuev(int&, int&);

int main(){	

int num1,num2;
printf("Digite el primer numero:\n");
scanf("%d",&num1);
printf("Digite el segundo numero:\n");
scanf("%d",&num2);

valnuev(num1,num2);
	
printf("El nuevo valor del primer numero es:%d\n",&num1);
printf("El nuevo valor del segundo numero es:%d\n\n",&num2);

return 0;
}
void valnuev(int& xnum, int& ynum){
	
printf("El valor del primer numero es:%d\n",xnum);
printf("El valor del segundo numero:%d\n",ynum);
xnum = 89;
ynum = 45;

}


