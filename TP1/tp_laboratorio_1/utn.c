#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

float calcularSuma(float* operandoUno,float* operandoDos)
{
    float resultado;
    resultado = *operandoUno + *operandoDos;
    return resultado;
}

float calcularResta(float* operandoUno,float* operandoDos)
{
    float resultado;
    resultado = *operandoUno - *operandoDos;
    return resultado;
}

float calcularDivision(float* operandoUno,float* operandoDos)
{
    float resultado;
    resultado = *operandoUno / *operandoDos;
    return resultado;
}

float calcularMultiplicacion(float* operandoUno,float* operandoDos)
{
    float resultado;
    resultado = *operandoUno * *operandoDos;
    return resultado;
}

int calcularFactorial(float* operandoUno)
{
    float valorRecibido = *operandoUno;
    int valorRecibidoEntero = valorRecibido;
    int i;
    int resultado = 1;

    for(i=1;i<=valorRecibidoEntero;i++)
    {
        resultado= resultado* (i);
    }


    return resultado;
}
