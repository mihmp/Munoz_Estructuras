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

/*Se utiliza malloc para reservar memoria
Se muestra un menú con 3 opciones utilizando printf 
Se agrega el bucle dowhile
Dependiendo de la opción seleccionada por el usuario, 
se llama a la función correspondiente.*/

int main()
{
    int opcion;
    int n;
    
    printf("Ingrese el numero de alumnos: ");
    scanf("%d", &n);
    
    struct alumno* alumnos = (struct alumno*)malloc(n * sizeof(struct alumno));
    
    do
    {
        printf("Menu:\n");
        printf("1. Ingresar datos de los alumnos\n");
        printf("2. Mostrar datos de los alumnos\n");
        printf("3. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        
        switch (opcion)
        {
            case 1:
                ingresarDatos(alumnos, n);
                break;
            case 2:
                mostrarDatos(alumnos, n);
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida\n");
                break;
        }
        
        printf("\n");
    } while (opcion != 3);
    
    free(alumnos);
    
    return 0;
}
/*Fin del programa*/