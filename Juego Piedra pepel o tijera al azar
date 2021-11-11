#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main() {
short opcion,player,PC,victoria=0,derrota=0,empate=0;

srand (time(NULL));
do{

switch(opcion){
	
	case 1: 
	
	PC=(int) (1+rand() %3);
		printf("1-Piedra\n2-papel\n3-tijera\n");
		printf("ingrese su opcion: ");
		scanf("%hd",&player);
		if((player==1 && PC==3)||(player==2 && PC==1)||(player==3 && PC==2)){
		printf("\n Has ganado papito!!\n");	
		victoria++;	
		}
		
		else {
		if((player==1 && PC==3)||(player==2 && PC==1)||(player==3 && PC==2)){
		printf("\n Has perdido tonto!!\n");	
	    derrota++;
		}
		else {
			printf("\n Tu y mi hermosa maquina han empatado");
			empate++;
		}
		}
		system("pause");
break;

case 2:
	fflush(stdin);
	printf("---- Marcador Parcial---\n");
	printf("Victorias: %hd\nDerrotas: %hd\nEmpates: %hd\n",victoria,derrota,empate);
	system("pause");
break;
case 3:
break;
default:
while(opcion<0 ||opcion>3){
printf("Asignacion invalida, ingrese nuevamente: ");
scanf("%hd",opcion);
}
}

fflush(stdin);
printf("ingresa una opcion:\n1-Seguir jugando\n2-Ver marcador final\n3-Salir\n\n");
printf("Ingrese una opcion");
scanf("%d",&opcion);

} while(opcion !=3);
fflush(stdin);
printf("---MARCADOR FINAL---\n");
printf("Victorias: %hd\nDerrotas: %hd\nEmpates: %hd\n",victoria,derrota,empate);

getchar();

}
