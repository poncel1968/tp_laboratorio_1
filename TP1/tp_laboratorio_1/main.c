#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{

    float operandoUno;
    float operandoDos;
    int opcionMenuSeleccionada;
    int validacion;
    float resultadoOperacion;
    int resultadoFactorial;


    printf("Ingrese 1er Operando = ");

    validacion=scanf("%f",&operandoUno);

    while(validacion==0)
    {
        printf("Error. Vuevla a ingresar 1er Operando = ");
        fflush(stdin);
        validacion=scanf("%f",&operandoUno);
    }

    printf("Ingrese 2do Operando = ");
    validacion=scanf("%f",&operandoDos);

    while(validacion==0)
    {
        printf("Error. Vuelva a ingresar 2er Operando = ");
        fflush(stdin);
        validacion=scanf("%f",&operandoUno);
    }


    printf("1) Calcular la suma (%f,%f)\n",operandoUno,operandoDos);
    printf("2) Calcular la resta  (%f,%f)\n",operandoUno,operandoDos);
    printf("3) Calcular la division  (%f/%f)\n",operandoUno,operandoDos);
    printf("4) Calcular la multiplicacion  (%f*%f)\n",operandoUno,operandoDos);
    printf("5) Calcular el factorial  (%f !)\n",operandoUno);
    printf("6) Salir\n");
    printf(" Ingrese opcion -> :");

    scanf("%d",&opcionMenuSeleccionada);


    while (opcionMenuSeleccionada != 6)
    {
        switch(opcionMenuSeleccionada)
        {
            case 1 :
                resultadoOperacion=calcularSuma(&operandoUno,&operandoDos);
                printf("1) El Resultado de la suma (%f,%f) es : %f \n" ,operandoUno,operandoDos,resultadoOperacion);
                break;

            case 2 :
                resultadoOperacion=calcularResta(&operandoUno,&operandoDos);
                printf("2) El Resultado de la resta (%f,%f) es : %f \n" ,operandoUno,operandoDos,resultadoOperacion);
                break;

           case 3 :
                resultadoOperacion=calcularDivision(&operandoUno,&operandoDos);
                if (operandoDos != 0)
                {
                    printf("3) El Resultado de la division (%f / %f) es : %f \n" ,operandoUno,operandoDos,resultadoOperacion);
                }
                else
                {
                    printf("El division no puede ser cero .");
                }
                break;

           case 4 :
                resultadoOperacion=calcularMultiplicacion(&operandoUno,&operandoDos);
                printf("4) El Resultado de la division (%f / %f) es : %f \n" ,operandoUno,operandoDos,resultadoOperacion);
                break;

           case 5 :
                resultadoFactorial=calcularFactorial(&operandoUno);
                printf("5) El Factorial de %f es : %d \n" ,operandoUno,resultadoFactorial);
                break;



            default :
                printf("Opcion incorrecta");

        }

        printf(" Ingrese opcion -> :");
        scanf("%d",&opcionMenuSeleccionada);

    }

    return 0;
}
