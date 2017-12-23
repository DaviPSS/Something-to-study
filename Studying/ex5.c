/* ************************************************************************                               *
 *    ex5.c V 0.1                                                           *
 *    Maior entre tres numeros com conectivos logicos                       *
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
    int a, b, c;
    

    printf("Digite a primeira variavel: \n");
    scanf("%d", &a);
    printf("Digite a segunda variavel: \n");
    scanf("%d", &b);
    printf("Digite a terceira variavel: \n");
    scanf("%d", &c);

    if ( (a >= b) && (a >= c) )
        printf("o maior numero eh: %d \n" , a);

    else 
        if ( (b >= a) && (b >= c) )
            printf("o maior numero eh: %d \n", b);

        else
            printf("o maior numero eh %d \n", c);

    return 0;

}


    

