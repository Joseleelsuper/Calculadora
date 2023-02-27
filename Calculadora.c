/*
    Nombre del programa: Calculadora.
    Descripción: Calculadora que realiza las operaciones básicas de números enteros.
    Organización: Universidad de Burgos.
    Autor: José Gallardo Caballero.
    Fecha de creación: 27/10/2023.
    Enlace al repositorio: https://github.com/Joseleelsuper/Calculadora
    Versiones:
        - 27/10/2023: 1.0 | Creación del programa.
*/

//Bibliotecas.
#include <stdio.h>

//Llamada a las funciones.
int menu();
int otra_operacion();
int suma();
int resta();
int multiplicacion();
int division();

//Función principal.
int main()
{
    unsigned short int opcion_menu=0;
    signed long long int resultado_suma, resultado_resta, resultado_multiplicacion, resultado_division=0;

    printf("\n");
    opcion_menu = menu();

    printf("\n");
    switch (opcion_menu)
    {
        case 1:
            resultado_suma = suma();
            printf("El resultado de la suma es: %d\n", resultado_suma);
            break;
        case 2:
            resultado_resta = resta();
            printf("El resultado de la resta es: %d\n", resultado_resta);
            break;
        case 3:
            resultado_multiplicacion = multiplicacion();
            printf("El resultado de la multiplicación es: %d\n", resultado_multiplicacion);
            break;
        case 4:
            resultado_division = division();
            printf("El resultado de la división es: %d\n", resultado_division);
            break;
        case 5:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Si este mensaje se muestra, puedes bajarme 1 punto en la evaluación del programa :).\n");
            break;
    }
    printf("\n");

    if (opcion_menu != 5)
    {
        opcion_menu = otra_operacion();
        if (opcion_menu == 1)
        {
            main();
        }
    }

    return 0;
}

//Función que muestra el menú pidiéndole al usuario qué operación quiere realizar.
int menu()
{
    int opcion_menu=0;

    do
    {
        printf("--------------------CALCULADORA--------------------\n");
        printf("|                   1. Suma.                      |\n");
        printf("|                   2. Resta.                     |\n");
        printf("|                   3. Multiplicación.            |\n");
        printf("|                   4. División.                  |\n");
        printf("|                   5. Salir.                     |\n");
        printf("---------------------------------------------------\n");
        printf("Introduzca una opción por su número: ");
        scanf("%d", &opcion_menu);

        if ( opcion_menu<1 || opcion_menu>5 )
        {
            printf("Por favor, escriba una opción del 1 al 5.\n");
        }

    }while (opcion_menu<1 || opcion_menu>5);
    
    return opcion_menu;
}

//Función que pregunta al usuario si quiere realizar otra operación.
int otra_operacion()
{
    int opcion_menu=0;

    do
    {
        printf("----------------------------CALCULADORA------------------------------\n");
        printf("|                   1. Volver a realizar otra operación.            |\n");
        printf("|                   2. Salir del programa.                          |\n");
        printf("---------------------------------------------------------------------\n");
        printf("Introduzca una opción por su número: ");
        scanf("%d", &opcion_menu);

        if ( opcion_menu<1 || opcion_menu>2 )
        {
            printf("Por favor, escriba una opción del 1 al 2.\n");
        }

    }while (opcion_menu<1 || opcion_menu>2);
    
    return opcion_menu;
}

//Función que realiza la suma.
int suma()
{
    int numero1, numero2, resultado_suma=0;

    printf("Introduzca el primer número: ");
    scanf("%d", &numero1);
    printf("Introduzca el segundo número: ");
    scanf("%d", &numero2);

    resultado_suma = numero1 + numero2;

    return resultado_suma;
}

//Función que realiza la resta.
int resta()
{
    int numero1, numero2, resultado_resta=0;

    printf("Introduzca el primer número: ");
    scanf("%d", &numero1);
    printf("Introduzca el segundo número: ");
    scanf("%d", &numero2);

    resultado_resta = numero1 - numero2;

    return resultado_resta;
}

//Función que realiza la multiplicación.
int multiplicacion()
{
    int numero1, numero2, resultado_multiplicacion=0;

    printf("Introduzca el primer número: ");
    scanf("%d", &numero1);
    printf("Introduzca el segundo número: ");
    scanf("%d", &numero2);

    resultado_multiplicacion = numero1 * numero2;

    return resultado_multiplicacion;
}

//Función que realiza la división.
int division()
{
    int numero1, numero2, resultado_division, resultado_resto=0;

    printf("Introduzca el primer número: ");
    scanf("%d", &numero1);
    printf("Introduzca el segundo número: ");
    scanf("%d", &numero2);

    resultado_division = numero1 / numero2;

    return resultado_division;
}