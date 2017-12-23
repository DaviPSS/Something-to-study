/* ************************************************************************                               *
 *    ex18.c, v1.0                                                          *
 *    Trocados com determinadas cedulas em c                                *
 *                                                                          *
 *    Copyright (C) 2017 by Davi Pedro Da Silva Sitonio                     *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *    To contact the author, please write to:                               *
 *    Davi Pedro Da  Silva Sitonio<davisitonio@gmail.com>                   *
 *    Webpage: https://github.com/DaviPSS                                   *
 *    Phone: +55 (81) 99738-2222                                            *
 * ************************************************************************ *
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#define MAX 12
float func(float recebo, float valor);

int main(void)
{ 
    float tenho, deve, troco;
    float x[MAX]={100,50,20,10,5,2,1,0.5,0.25,0.10,0.05,0.01};
    int i;
    
    printf("Digite quanto tem: ");
    scanf("%f", &tenho);
    
    printf("Quanto deve: ");
    scanf("%f", &deve);
    
    printf("\n");
    
    troco=tenho-deve;
    
    if(troco==0)
        printf("Voce nao deve nada\n\n");
    
    else
        for(i=0; i<MAX; i++)    
        {     
            troco=func(troco,x[i]);
        }
    
    return 0;
} 

float func(float recebo, float valor)
{ 
    int j=0;
    
    while(recebo>=valor)
     {
        recebo-=valor;
        j++;
    }
    if(j==0)
        return recebo;
    
    else
        if(valor>1)
            printf("%d cedulas de %0.2f\n", j, valor);
    
        else
            printf("%d moedas de %0.2f\n", j, valor);

    return recebo;
}



    
