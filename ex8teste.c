/* ************************************************************************                               *
 *    ex8teste.c, V 0.1                                                     *
 *    Algoritmo para o teste entre o numero menor e o menos repetido        *
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
#include<string.h>

int func13(int venc, int nj, int max, int mod, float med, char *nome); 

int main(void)
{  
    int v, /* vencedor da rodada */
        n, /* numero de jogadores */
        ma, /* numero maximo da rodada */
        m; /* numero da moda */
    float me;
    char c[15];
    int x; /* atribuindo os valores para a funcao 13 */
    
    printf("Qual foi o vencedor:\n");
    scanf("%d", &v);
    
    printf("Qual o numero de jogadores:\n");
    scanf("%d", &n);
    
    printf("Qual o valor max:\n");
    scanf("%d", &ma);
    
    printf("Qual a moda:\n");
    scanf("%d", &m);
    
    printf("Qual a media:\n");
    scanf("%f", &me);
    

    x = func13(v, n, ma, m, me, c);
    printf("%d\n", x);

    return 0;
}
int func13(int venc, int nj, int max, int mod, float med, char *nome) 
{   
    int k;

    if(venc == -1)
        strcpy(nome, "Davi Pedro");
    
    if(nj > 1)
        k = 5;
    if(max <= 10)
        k = 1;
    if((mod == 1) || (mod == 5))
        k = mod + 1;
    else
    {   
        if(mod == 6)
            k = 7;
        else
        {    
            if(venc == 2 || venc == 5)
                k = venc + 3;
            else
            {    
                if(med >= 5 && med <= 10)
                    k = med + 1;
                else
                { 
                    if(med >= 2 && med <= 4)
                        k = med + 1;
                    else 
                        k = 2;
                }
            }
        }
    }    
    return k;
}



