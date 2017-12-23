/* ************************************************************************                               *
 *    ex15.c, v1.0                                                          *
 *    Probabilidades de cada dia de prova                                   *
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

void modeorg(void);
int func(int lim);

int main(void)
{   
    void modeorg(void);
    
    printf("Probabilidades de cada dia de prova\n\n");
    
    modeorg();
    
    return 0;
}  

void modeorg(void)
{    
    int i, ac=0, d, r, a, soma;
    int v[4]={0};
    float fac=0.0;
    srand((unsigned)time(NULL));

    for(i=0; i<ITERA; i++)
    {      
        for(d=0; d<3; d++)
        {      
            if(d==0)
            {    
                soma=func(3);
                v[0]=v[0]+soma;
                if(1==soma)
                    break;
            }
            
            if(d==1)
            {    
                soma=func(4);     
                v[1]=v[1]+soma;
                if(1==soma)        
                    break;              
                               
            }

            if(d==2)
            {    
                for(a=0; a<2; a++)
                {
                    r=rand()%6 + 1;
                    if(r!=6)
                        soma=0;
                    else
                        soma=1;
                }
                v[2]=v[2]+soma;
                if(1==soma)
                    break;
            }            
        }
        if(d==3)
            v[3]++;
    }    
    
    for(d=0; d<4; d++)
    {
       ac+= v[d];
       fac+= (v[d]/(float)ITERA*100.0);
       printf("Dia %d = %10d(%6.2f %%)\n", d + 1, v[d], (v[d]/(float)ITERA)*100.0);
    }    
    printf("Total = %10d(%6.2f %%)\n", ac, fac);
} 
int func(int lim)
{
    int r, a;
    
    for(a=0; a<lim; a++)
    {
        r=rand()%6 + 1;
        if(r>lim)
            return 0;
    } 
    return 1;
}    









