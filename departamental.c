#include <stdio.h>
#include <string.h>
typedef struct{
    char nombre[100];
    char isbn[100];
    char editorial[100];
    char autores[100];
    int numLibros;

}libros;

int main(void)
{
    int opc;
    libros vec[100];
    printf("---MENU---\n[1]Alta de libro\n[2]Alta de usuario\n[3]Prestamo\n[4]Buscar libro por ID o nombre\n[5]Mostrar usuario y libros prestados en caso de que tenga\n[6]Salir\n");
    scanf("%i",&opc);
    do
    {
        switch (opc)
        {
        case 1:
            printf("Ingrese el numero de libros a dar de alta: \n");
            int n;scanf("%i",&n);
            fflush(stdin);
            for(int i=0;i<n;i++)
            {
                printf("Ingrese el titulo del libro:\n");
                fgets(vec[i].nombre,100,stdin);
                printf("Ingrese el autor o autores del libro:\n");
                fgets(vec[i].autores,100,stdin);
                fflush(stdin);
                printf("Ingrese el ISBN del libro \n");
                fgets(vec[i].isbn,100,stdin);
                fflush(stdin);
                printf("Ingrese la editorial del libro \n");
                fgets(vec[i].editorial,100,stdin);
                fflush(stdin);
            }


            break;
        
        default:
            break;
        }

    }while (opc!=6);
    return 0;
}