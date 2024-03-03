//Programa de DNA
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char cadenaDNA1[10];
	char cadenaDNA2[10];
	char palo = '|';
	int i, j, contador, subindiceIzquierda;
	contador = 0;
	j = 0;
	
//	printf("Indique la cantidad de bases que va a ingresar. \n");
//	scanf("%d", &bases);
	printf("Ingrese la hebra de DNA que desea completar en mayusculas: ");
	scanf("%s", cadenaDNA1);
	printf("\nLa cadena que ingreso es: %s", cadenaDNA1);
	
	//modulo para contar la extención de la cadena
	while(cadenaDNA1[j] != '\0'){
		contador = contador + 1;
		j = j + 1;
	}

	printf("\nSu cadena es de %d bases.", contador);
	
	for(i=0; i<contador; i++){
		 switch(cadenaDNA1[i]){
		 	case 'A': case 'a':
		 		cadenaDNA2[i]= 'T';
		 		break;
		 	case 'T': case 't':
		 		cadenaDNA2[i]= 'A';
		 		break;
		 	case 'G': case 'g':
		 		cadenaDNA2[i]= 'C';
		 		break;
		 	case 'C': case 'c':
		 		cadenaDNA2[i]= 'G';
		 		break;
			default:
				printf("Elija otra.");
		 }
	}
	
 	printf("\nLa cadena par es: %s", cadenaDNA2);
	printf("\nLa doble helice es la siguiente: ");
	printf("\n%s\n",cadenaDNA1);
	for(i=0;i<contador;i++){
		printf("%c",palo);
	}
	
	printf("\n%s",cadenaDNA2);
	printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------");
	
//	printf("Indique el subindice de la izquierda: ");
//	scanf("%d", &subindiceIzquierda);
	
	return 0;
}
