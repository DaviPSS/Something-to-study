/* ************************************************************************                               *
 *    ex16b.c, v1.0                                                         *
 *    Labirinto em c com prioridade para direita                            *
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
#define IY 1
#define IX 1
#define GY 5
#define GX 7
#define MAX 10

char lab[MAX][MAX+1] =
        {"##########",
         "#        #",
         "# # # ## #",
         "# # # #  #",
         "#   # ####",
         "# ### #  #",
         "#  #  ## #",
         "# ### ## #",
         "#   #    #",
         "##########",
        };

int tenta(int y, int x);
void imprime(void);

int main(void)
{
    tenta(IY,IX);
    imprime();
    return 0;
} 

int tenta(int l, int c)
{ 
    int dx, dy;

    if(lab[l][c]==' ')
    { 
        lab[l][c]='X';
        printf("Testando em %d, %d\n",l,c);
        imprime();
        if(l==GY && c==GX)
        {
            printf("consegui!\n");
            return 1;
        }
        else
            for(dx=1;dx>=-1;dx--)
                for(dy=1;dy>=-1;dy--)
                    if(abs(dy)==abs(dx))
                        continue;
                    else
                        if(tenta(l+dy,c+dx)==1)
                            return 1;
        lab[l][c]=' ';
    }
    return 0;
}

void imprime(void)
{
    int l;
    
    for(l=0;l<MAX;l++)
        printf("%s\n", lab[l]);
        
    printf("\n");
    
    return;
}    
