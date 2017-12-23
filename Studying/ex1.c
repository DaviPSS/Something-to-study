/* ************************************************************************ *
 *    ex1.c, V1.0                                                           *
 *    Algorítmo de Sistema Linear em c                                      *
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

#include <stdlib.h>
#include <stdio.h>

int main(void)
{ 
    float n1, n2, n3, n4, n5, n6, x, y;

    printf("Digite a primeira variável: ");
    scanf("%f", &n1);   
   
    printf("Digite a segunda variável: ");
    scanf("%f", &n2);
   
    printf("Digite a terceira variável: ");
    scanf("%f", &n3);
   
    printf("Digite a quarta variável: ");
    scanf("%f", &n4);
   
    printf("Digite a quinta variável: ");
    scanf("%f", &n5);
   
    printf("Digite a sexta variável: ");
    scanf("%f", &n6);

    y = ((n6 - n4 * n3)/n1)/((- n4 * n2)/n1 + n5);

    x = (n3 - n2 * y)/n1;

    printf("O resultado de x: %f\n\n", x);

    printf("O resultado de y: %f\n\n", y);

    return EXIT_SUCCESS;
}    

