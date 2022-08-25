#include<stdio.h>
main()
{
	char cedula   [30];
	char nombre   [20];
	char apellido [20];
	
	
	
	printf("Este programa guarda los datos personales \n \nCual es tu numero de cedula\n");
	scanf("%s",&cedula);
	printf("Cual es tu nombre\n");
	scanf("%s",&nombre);
	printf("Cual es su apellido\n");
	scanf("%s",&apellido);
	
    printf("\nresultados de los datos\n\nCedula:\t%s \nNombre: %s \nApellido: %s",cedula,nombre,apellido);
	
	

return 0;	
} 
