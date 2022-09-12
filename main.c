#include <stdio.h>
#include <stdlib.h>

int main()
{
    int personas =0;
    int numeroCliente=0;
    char estadoCivil;
    int edad=0;
    float temperatura=0;
    char genero;
    int precio=600;
    char cortarWhile;
    int viudosMas60=0;
    int banderaDelMenor=0;
    int minimoNumero=0;
    int menorNumClient=0;
    int costoPasaje=0;
    int pasajeConDescuento=0;
    int mas60=0;
    int descuentoValico=0;
    int precioFinalConDescuento=0;


    while(cortarWhile!='s')
        {

        numeroCliente++;

        printf("Cual es su estado civil?s para soltero, c para casado o v para viudo:");
        fflush(stdin);
        scanf("%c", &estadoCivil);

         printf("la edad ingresada deve se mayor de 17:");
                scanf("%d",&edad);


        if(edad<18)
            {
                while(edad<17)
                {
                    printf("la edad ingresada deve se mayor de 17:");
                    scanf("%d",&edad);
                }
            }

        printf("la temperatura ingresada deve ser mayor de 35 y menor de 40:");
        scanf("%d",&temperatura);

        if(temperatura<35 && temperatura>39)
        {
            while(temperatura<35 && temperatura>39)
            {
                printf("la temperatura ingresada deve ser mayor de 35 y menor de 40:");
                scanf("%d",&temperatura);
            }

        }

        printf("Cual es su genero?f para femenino, m para masculino o b para nobinario:");
        fflush(stdin);
        scanf("%c", &genero);

        if(edad>60 && estadoCivil=='v')
        {
            viudosMas60++;
        }

        if(genero=='f' && estadoCivil=='s')
        {
            if(edad<minimoNumero || banderaDelMenor==0)
            {
                minimoNumero=edad;
                banderaDelMenor++;
                menorNumClient=numeroCliente;
            }
        }

        mas60++;

        printf("Ya termino de ingresar pasageros?s para si y n para no:");
        fflush(stdin);
        scanf("%c",&cortarWhile);

    }
        costoPasaje= precio*numeroCliente;

        descuentoValico=numeroCliente/mas60;

   if(descuentoValico<2)
   {
        pasajeConDescuento=costoPasaje*0.25;
        precioFinalConDescuento= costoPasaje-pasajeConDescuento;
        printf("El costo del viaje con descuento es de:%d\n",precioFinalConDescuento);
   }

    printf("El numero de viudos con mas de 60 años es:%d\n",viudosMas60);
    printf("La edad de la mujer soltera mas joves es de %d y su numero de cliente es %d\n",minimoNumero, menorNumClient );
    printf("El costo total sin descuento es de %d\n",&costoPasaje);

    return 0;
}
