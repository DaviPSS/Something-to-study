/* ************************************************************************                               *
 *    ex6.c, V 0.1                                                          *
 *    algoritmo usando conectivos logicos     
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
    int a, b;
    scanf("%d %d", &a, &b);
    a = (a!=0) ==1;
    b = (b!=0) ==1;

    if(a && b)
        printf(" a e b verdadeiro. \n ");

    else
        printf(" a e b falso. \n ");

    if ( a || b)
        printf(" a ou b verdadeiro. \n ");

    else 
        printf(" a ou b falso. \n ");

    if ( !a)
        printf(" Nao a verdadeiro. \n ");

    else
        printf(" Nao a falso. \n ");

    if ( (a || b) && !( a && b) )
        printf(" a ou-exclusivo b verdadeiro. \n ");

    else 
        printf(" a ou-exclusivo b falso. \n ");

    if ( !a || b)
        printf(" a implica b verdadeiro. \n ");

    else
        printf(" a implica b falso. \n ");

    if ( a == b)
        printf(" a se somente se b verdadeiro. \n ");

    else
        printf(" a se somente se b falso. \n ");

    return EXIT_SUCCESS;

    
}    
