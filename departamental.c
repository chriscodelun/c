#include <stdio.h>
#include <string.h>
typedef struct 
{
    char nombre[100];
    char isbn[100];
    char editorial[100];
    char autores[100];
    int numLibros;
}libro;
typedef struct 
{
    char user[100];
    char calle[100];
    char numero[100];
    char colonia[100];
    int idUser[100];
}usuario;

int main()
{
    int opc=0;
    libro vec[100];
    usuario vec2[100];
    int n,_contus=0,contlib=0;
    int *contus=&_contus;
    
    do
    {
        printf("---MENU---\n[1]Alta de libro\n[2]Alta de usuario\n[3]Prestamo\n[4]Buscar libro por ID o nombre\n[5]Mostrar usuario y libros prestados en caso de que tenga\n[6]Salir\n");
        scanf("%i",&opc);
        switch (opc)
        {
        case 1:
            printf("--ALTA DE LIBROS--\n");
            printf("Ingrese el numero de libros a dar de alta \n");
            scanf("%i",&n);
            getchar();
            for(int i=contlib;i<n+contlib;i++)
            {
                printf("Ingrese el titulo del libro : \n");
                fgets(vec[i].nombre,100,stdin);
                printf("Ingrese el autor o autores del libro: \n");
                fgets(vec[i].autores,100,stdin);
                printf("Ingrese el ISBN del libro: \n");
                fgets(vec[i].isbn,100,stdin);
                printf("Ingrese la editorial del libro: \n");
                fgets(vec[i].editorial,100,stdin);

            }
            contlib=contlib+n;
            break;
        case 2:
            printf("--Alta de usuario--\n");
            printf("Ingrese el numero de usuarios a dar de alta: ");
            scanf("%i",&n);
            getchar();
            for(int i=*contus;i<n+*contus;i++)
            {
                printf("Ingrese el nombre del usuario ");
                fgets(vec2[i].user,100,stdin);
                printf("Ingrese la direccion del usuario:\nCalle:");
                fgets(vec2[i].calle,100,stdin);
                printf("\nNumero:");
                fgets(vec2[i].numero,100,stdin);
                printf("\nIngrese la colonia: ");
                fgets(vec2[i].colonia,100,stdin);
                printf("Ingrese el id del usuario(numerico)");
                scanf("%i",&vec2[i].idUser);
                getchar();

            }
            *contus+=n;
            break;
        case 3:
            printf("Debug");
            if(*contus==0)
            {
                printf("No hay usuarios registrados ");
            }
            for(int i=0;i<*contus;i++)
            {
                printf("Los datos de usuario son: %s-%s-%s-%s-%d\n",vec2[i].user,vec2[i].calle,vec2[i].colonia,vec2[i].numero,vec2[i].idUser);
            }
            break;
        default:
            break;
        }
    } while (opc!=6);
    
    return 0;
}