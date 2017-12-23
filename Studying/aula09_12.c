#include<stdio.h>
main()
{
    int Num, i, Divisor;

    printf("Digite um numero:");
    scanf("%d", &Num);
    Divisor = 0;

    for (i=2; i<Num;i= i + 1)
        if( Num %i == 0)
        {
            Divisor =i;
            i = Num;
        }
    if (Divisor !=0)
        printf("%d e divisor proprio de %d \n", Divisor, Num);
    
    else
        printf("%d nao tem divisores proprios \n", Num);
}    
