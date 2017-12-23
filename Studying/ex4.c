/* ************************************************************************                               *
 *    ex4.c, V 0.1                                                          *
 *    algoritmo para sua nota em siga                                       *
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
    float f, /* numero de faltas */          
          a, /* nota da primeira avaliacao */
          b, /* nota da segunda avaliacao */
          x, /* media anual */     
          c, /* resultado da prova final */
          y; /* media da final */  
    
    printf("Digite o numero de faltas:");
    scanf("%f", &f);

    if ( f <= 18 ) {
        printf("Digite sua nota da primeira avaliacao:");
        scanf("%f", &a);
        printf("Digite sua nota da segunda avaliacao:");
        scanf("%f", &b); 
        
        x = (a + b)/2.0;

        if (x >= 7.0) {
            printf("Voce foi aprovado direto com %f!\n", x);
        
        } else {
            printf(" Digite seu resultado da final: \n");
            scanf("%f", &c);

            y = (x + c)/2.0;

            if (y >= 5.0) {
                printf("Voce foi aprovado com %f!\n", y);

            } else {
                printf(" Voce foi reprovado na final com %f!\n", y);
            }
        }
    } else {
        printf(" Voce foi reprovado por faltas! \n");
    }

    return 0;
}



