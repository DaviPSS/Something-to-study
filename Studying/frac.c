#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct _frac
{
    int numerador, denominador;

} FRACAO;

FRACAO frac1;
FRACAO frac2;
FRACAO resultado;
int aux;

void limpar();

 
FRACAO simp(FRACAO fracao);

int MDC (int a, int b);
int MMC (int a, int b);

FRACAO fracao_soma_sub (FRACAO fracao[2],char tipo);
FRACAO fracao_mult_div (FRACAO fracao[2],char tipo);


int main ()
{
    FRACAO fracao[2];
    int i;

    for(i=0; i<2; i++)
    {    
        printf("Digite um numerador e um denominador para a fracao. \n Utilize espaco para separa-los [%d]: ",i+1);
        scanf("%d %d",&fracao[i].numerador, &fracao[i].denominador);
    }
    printf("\n:::--------------------:::\n");
    printf ("\n\t%d   %d\n\t- + -\n\t%d   %d ",fracao[0].numerador,fracao[1].numerador,fracao[0].denominador,fracao[1].denominador);
    fracao_soma_sub(fracao,'+');
    printf("\nResultado:\n\t%d\n\t-\n\t%d",resultado.numerador,resultado.denominador);
    printf("\n:::--------------------:::\n");

    printf("\n:::--------------------:::\n");
    printf ("\n\t%d   %d\n\t- - -\n\t%d   %d ",fracao[0].numerador,fracao[1].numerador,fracao[0].denominador,fracao[1].denominador);
    fracao_soma_sub(fracao,'-');
    printf("\nResultado:\n\t%d\n\t-\n\t%d",resultado.numerador,resultado.denominador);
    printf("\n:::--------------------:::\n");

    printf("\n:::--------------------:::\n");
    printf ("\n\t%d   %d\n\t- * -\n\t%d   %d ",fracao[0].numerador,fracao[1].numerador,fracao[0].denominador,fracao[1].denominador);
    fracao_mult_div(fracao,'*');
    printf("\nResultado:\n\t%d\n\t-\n\t%d",resultado.numerador,resultado.denominador);
    printf("\n:::--------------------:::\n");

    printf("\n:::--------------------:::\n");
    printf ("\n\t%d   %d\n\t- / -\n\t%d   %d ",fracao[0].numerador,fracao[1].numerador,fracao[0].denominador,fracao[1].denominador);
    fracao_mult_div(fracao,'/');
    printf("\nResultado:\n\t%d\n\t-\n\t%d",resultado.numerador,resultado.denominador);
    printf("\n:::--------------------:::\n");

    getchar ();
    
    return (0);
}

void limpar()
{
    resultado.denominador = 0;
    resultado.numerador = 0;

    frac1.denominador = 0;
    frac1.numerador = 0;

    frac2.denominador = 0;
    frac2.numerador = 0;

    aux = 0;
}

FRACAO simp(FRACAO fracao)
{

    for(aux=2; aux<=10; aux++)
        if(fmod(fracao.numerador,aux) == 0 && fmod(fracao.denominador,aux) == 0)
        {
            resultado.numerador =  fracao.numerador / aux;
            resultado.denominador = fracao.denominador/ aux;
        }
    
    return resultado;
}

int MDC(int a, int b)
{
    if (b == 0)
        return a;
    else
        return MDC(b,fmod(a,b));
}

int MMC(int a, int b)
{
    if (a != 0 && b != 0)
        return a*b/MDC(a,b);
    else
        return 0;
}

FRACAO fracao_soma_sub(FRACAO fracao[2],char tipo)
{
    limpar();

    if (fracao[0].denominador == fracao[1].denominador)
    {
        if(tipo == '+')
            resultado.numerador = fracao[0].numerador + fracao[1].numerador;
        
        else
            resultado.numerador = fracao[0].numerador - fracao[1].numerador;
            
        resultado.denominador = fracao[0].denominador;
        
    }     

    else
    {
        aux = MMC(fracao[0].denominador,fracao[1].denominador);
        frac1.numerador = (aux/fracao[0].denominador)*fracao[0].numerador;
        frac2.numerador = (aux/fracao[1].denominador)*fracao[1].numerador;
  
        if (tipo == '+')
            resultado.numerador = frac1.numerador + frac2.numerador;

        else
            resultado.numerador = frac1.numerador - frac2.numerador;
            
        resultado.denominador = aux;
        
    }    

    return simp(resultado);
}

FRACAO fracao_mult_div(FRACAO fracao[2],char tipo)
{
    limpar();
    
    if (tipo == '*')
    {
        resultado.numerador = fracao[0].numerador*fracao[1].numerador;
        resultado.denominador = fracao[0].denominador*fracao[1].denominador;
    }
    
    else
    {
        resultado.numerador = fracao[0].numerador*fracao[1].denominador;
        resultado.denominador = fracao[0].denominador*fracao[1].numerador;
    }

    return simp(resultado);
}


