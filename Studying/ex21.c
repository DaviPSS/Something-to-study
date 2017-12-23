/* ************************************************************************                               *
 *    ex21.c, v0.1                                                          *
 *    Calculadora de fracoes                                                *
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
#include <string.h>
#include <ctype.h>
#define MAX 64/*numero de armazenamento*/
/*#define STR 4*/

int validastr(char *s);

int main(void)
{    
    char s[MAX]={0}, *p, *t, *array[MAX], *a11, *a12, *a21, *a22;
    int i;

    printf("Digite uma operacao com max(%d): ", MAX-1);    
    fgets(s, MAX, stdin);

    if((p=strchr(s, '\n')) !=NULL)
        *p='\0';

    if(!validastr(s))
        printf("\nnao");
    printf("valido\n");

    printf("Imprimindo os tokens:\n");

    t=strtok(s, " ");

    while(t!=NULL)
    { 
        array[i++]=t;
        t=strtok(NULL, " ");
    }   
    if(array[0])
        a11=array[0];
    if(array[1])
        a12=array[1];
    if(array[3])
        a21=array[3];
    if(array[4])
        a22=array[4];
    printf("\n %s\n %s\n %s\n %s\n", a11, a12, a21, a22);

    return 0;
}

int validastr(char *s)
{ 
    unsigned i;

    for(i=0; i<strlen(s); i++)
    {
        if((!isdigit(s[i])) && (s[i]!= '+' && s[i]!='-' && s[i]!='*' && s[i]!='/' && s[i]!=' '))
            return 0;

    }
    return 1;
}  
/*for(i=0; i<STR; i++)
  {    
  if(i==2)
  {     
  k=array[i];
  printf("\n%s\n", k);
  }
  a[i]=array[i];
  printf("\n %s\n", a[i]);
  }
  */
