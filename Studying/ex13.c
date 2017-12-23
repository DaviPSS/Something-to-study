/* ************************************************************************                               *
 *    ex13.c, v1.0                                                          *
 *    validacao e invalidacao para o cpf                                    *
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
#define VMAX 11

int main(void)
{
    long int cpf, qcpf;
    int v[VMAX], aux=0, x, b, a, c, d, s=0;

        
    printf("CPF (apenas numeros):\n");
    scanf("%ld", &cpf);
    
    qcpf=cpf;
    
    for(x=0; x<11; x++)
    {     
        v[10 - x] = qcpf%10;
        qcpf=qcpf/10;
    }   
    for(x=0; x<9; x++)
        aux = (v[x]*(10 - x)) + aux;
    
    a=aux%11;
    b=11-a;
    
    if(b>9)
        b = 0;
    else
        b = b;
    for(x=0; x<10; x++)
        s = (v[x]*(11 - x)) + s;
    
    c=s%11;
    d=11-c;
    
    if(d>9)
        d = 0;
    else
        d = d;
    if(b==v[9] && d==v[10])
        printf("CPF CORRETO\n");
    else
        if(v[9]==v[10])
            printf("CPF INCORRETO\n");
        else
            printf("CPF INCORRETO\n");



    
    return 0;

}
        











