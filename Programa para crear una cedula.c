//Programa para crear una cedula









#include <stdio.h>
#include <time.h>



struct cedula
{
    char nombre[20];
    char matricula[15];



    char nacionalidad[20];
    char provincia[20];

    char genero[10];
    char tipoSangre[10];
    char estadoCivil[10];

    char ocupacion[20];

    char codigoPostal[5];

    char calle[20];
    int casa;
    char sector[15];

} cedula1;



void main(void)
{
    printf("Cedula de Identidad");
    printf("\nIngrese su nombre: ");
    gets(cedula1.nombre);
    printf("Ingrese la numero de la cedula: ");
    gets(cedula1.matricula);

    printf("Ingrese su nacionalidad: ");
    gets(cedula1.nacionalidad);
    fflush(stdin);
    printf("\nIngrese su provincia: ");
    gets(cedula1.provincia);

    printf("Ingrese su genero: ");
    gets(cedula1.genero);
    printf("Ingrese el tipo de sangre: ");
    gets(cedula1.tipoSangre);
    printf("Ingrese su estado civil: ");
    gets(cedula1.estadoCivil);

    printf("Ingrese su ocupacion: ");
    gets(cedula1.ocupacion);

    printf("Ingrese el codigo postal: ");
    gets(cedula1.codigoPostal);
    printf("Ingrese el nombre de la calle donde vive: ");
    gets(cedula1.calle);
    printf("\nIngrese el numero de su casa: ");
    scanf("%d", &cedula1.casa);
    printf("Ingrese el sector donde vive: ");
    gets(cedula1.sector);

    //Impresion de datos

    printf("\n\nCEDULA DE IDENTIDAD Y ELECTORAL");
    printf("\n%s \n%i", cedula1.nombre, cedula1.matricula);
    printf("\nLUGAR DE NACIMIENTO: \n%s, %s", cedula1.nacionalidad, cedula1.provincia);

    //La fecha

    printf("\nSEXO: %s \t SANGRE: %s \t ESTADO CIVIL: %s", cedula1.genero, cedula1.tipoSangre, cedula1.estadoCivil);

    printf("\n\nCODIGO POSTAL \n%i", cedula1.codigoPostal);
    printf("\nDIRECCION DE RESIDENCIA \n%s Casa %i \nSECTOR \n%s", cedula1.calle, cedula1.casa, cedula1.sector);
}
