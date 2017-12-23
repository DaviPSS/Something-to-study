/* ************************************************************************                               *
 *    ex16_phs.c, v1.0                                                      *
 *    Correção do labirinto de phsq em c                                    *
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
 *    Davi Pedro Da Silva Sitonio<davisitonio@gmail.com                     *
 *    Webpage: https://github.com/DaviPSS                                   *
 *    Phone: +55 (81) 99738-2222                                            *
 * ************************************************************************ *
 * 
 */
/* Correcao de: Davi Pedro Da Silva Sitonio
 * Aluno: Pedro Henrique Santos Queiroz
 * Nota: 0,0 */

#define IY 1
#define IX 1
#define GY 5
#define GX 7
#define MAX 10
#include <stdio.h>
#include <stdlib.h>

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

int tenta(int y, int x)
{
    int x1, y1;
    lab[IX][IY]=x;

    for(x1=1;x1<9;x1++)
    {
        if lab[x][y+1]!==(#||f)   /*falta os parenteses do if para ler a condicao */
            lab[x][y+1]=x;
        else if [x][y-1]!==(#||f) /*falta os parenteses do if para ler a condicao */
            lab[x][y-1]=x;
        else if /*o que essa condicao faz?*/

        /*falta o complemento da funcao para que funcione e tambem o fechamento do for*/
        /*falta a funcao imprime para a funcionalidade do programa */    









