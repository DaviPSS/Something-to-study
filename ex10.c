/* ***********************************************************************  *
 *    ex10.c, V 0.1                                                         *
 *    Capturar vetores aleatorios e ordenalos                               *
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
#define MAX 100
#define NMAX 10

int main(void)
{ 
    int x, z, y, vetor[NMAX];
    srand((unsigned)time(NULL));
    for(x=0;x<NMAX;x++)
    {    
        vetor[x] = rand() % MAX + 1;
    } 
    printf("Nao ordenado\n\n");
    for(x=0;x<NMAX; x++)
    {    
        printf("%d\n", vetor[x]);
    }
    for(x=0; x<NMAX; x++)
    { 
        for(z=x+1; z<NMAX; z++)
        {   
            if(vetor[x]>vetor[z])
            {    
                y = vetor[z];
                vetor[z] = vetor[x];
                vetor[x] = y;
            }
        }
    }    
    printf("\nOrdenando vetores\n\n");
    for(x=0;x<=9;x++)
    {      
        printf("%d\n", vetor[x]);
    }
    return 0;
}    

