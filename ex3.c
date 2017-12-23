/* ************************************************************************                               *
 *    ex3.c, V 0.1                                                          *
 *    Algoritmo para relação de maior numero                                *
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
 *    Davi Pedro Da Silva Sitonio <davisitonio@gmail.com>                   *
 *    Webpage: https://github.com/DaviPSS                                   *
 *    Phone: +55 (81) 99738-2222                                            *
 * ************************************************************************ *
 * 
 */
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    
    float a, b, c;

    printf("Digite tres numeros: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if( a > b )
        if ( a > c)
            printf("o maior sera: %f ", a);
        else
            printf("o maior sera: %f ", c);
    else
        if ( b > c)
            printf("o maior sera: %f ", b);
        else
            printf("o maior sera: %f ", c);
    return 0;
}    
       


    
        
