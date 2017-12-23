/* ************************************************************************                               *
 *    ex14.c, v1.0                                                          *
 *    Sorteio da prova e suas probabilidades                                *
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
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ITERA 1000000

int diadaprova();

int main(void)

{ 
    int d = diadaprova();
    void modeorg(void);
    
    switch(d)
    {
        case 0:
            printf("o dia da prova seria 03/10\n\n");
            break;
        case 1:
            printf("o dia da prova seria 05/10\n\n");
            break;
        case 2:
            printf("o dia da prova seria 09/10\n\n");
            break;
        case 4:
            printf(" o dia da prova seria 12/10\n\n");
            break;
        default:
            printf("o dia da prova seria 17/10\n\n");
    }
    printf("As probabilidades de cada dia de prova\n\n");
    
    modeorg();
    
    return 0;
}
int diadaprova()
{ 
    int d, r=0;
    srand((unsigned)time(NULL));
    for(d=0; d<5; d++)
     {
        r=rand()%6;
        if(r<=d)
            return d;
    }
    return d;
}

void modeorg(void)
{ 

    int i, ac=0, d, r;
    int v[6]={0};
    float fac=0.0;
    srand((unsigned)time(NULL));

    for(i=0; i<ITERA; i++)
    {   
        for(d=0; d<5; d++)
        { 
            r=rand()%6;
            if(r<=d)
              {    
                v[d]++;
                break;
            }
        }
        if(d==5)
            v[5]++;
    }    
    
    for(d=0; d<6; d++)
    {
       ac+= v[d];
       fac+= (v[d]/(float)ITERA*100.0);
       printf("v[%d] = %10d (%6.2f %%)\n", d + 1, v[d], (v[d]/(float)ITERA)*100.0);
    } 
    printf("Total=%10d (%6.2f %%)\n", ac, fac);
} 










