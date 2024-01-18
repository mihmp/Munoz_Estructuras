#include <stdio.h>
/*Anado la estructura solicitada por el profe*/
struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
};
/*La función ingresar datos tiene un arreglo 
de estructuras de alumnos y la cantidad
Utiliza un bucle for*/
void ingresarDatos(struct alumno* alumnos, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese los datos del alumno %d:\n", i + 1);
        
        printf("Matricula: ");
        scanf("%d", &alumnos[i].matricula);
        
        printf("Nombre: ");
        fflush(stdin);
        gets(alumnos[i].nombre);
        
        printf("Direccion: ");
        fflush(stdin);
        gets(alumnos[i].direccion);
        
        printf("Carrera: ");
        fflush(stdin);
        gets(alumnos[i].carrera);
        
        printf("Promedio: ");
        scanf("%f", &alumnos[i].promedio);
        
        printf("\n");
    }
}
/*Llamo a mostar los datos en pantalla*/

void mostrarDatos(struct alumno* alumnos, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Datos del alumno %d:\n", i + 1);
        printf("Matricula: %d\n", alumnos[i].matricula);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Direccion: %s\n", alumnos[i].direccion);
        printf("Carrera: %s\n", alumnos[i].carrera);
        printf("Promedio: %.2f\n", alumnos[i].promedio);
        printf("\n");
    }
}