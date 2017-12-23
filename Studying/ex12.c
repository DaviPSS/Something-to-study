/* ************************************************************************                               *
 *    ex12.c, V1.0                                                          *
 *    Linhas e colunas para vetores e tem que ser tridimensionais           *
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
#define XMAX 2
#define YMAX 3
#define ZMAX 4

int main(void)
{
    int x, y, z;
    char vc[XMAX][YMAX][ZMAX];
    for(x=0; x<XMAX; x++)
        for(y=0; y<YMAX; y++)
            for(z=0; z<ZMAX; z++) 
                {    
                    vc[x][y][z] = 'A' +  YMAX*ZMAX*x + ZMAX*y + z;
                    printf("v[%d][%d][%d]=%c %p\n", x, y, z, vc[x][y][z], &vc[x][y][z]);
                 }
    return 0;
}




