/* ************************************************************************                               *
 *    ex17.c, v1.0                                                          *
 *    seu nome no valor de numero de chaldean                               *
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
 *    Davi Pedro Da  Silva Sitonio <davisitonio@gmail.com>                  *
 *    Webpage: https://github.com/DaviPSS                                   *
 *    Phone: +55 (81) 99738-2222                                            *
 * ************************************************************************ *
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50

void num_de_chaldean(void);

int main(void)
{ 
    num_de_chaldean();
    
    return 0;
}   

void num_de_chaldean(void)
{
    char nome[MAX] = {0};
    int a, b, c=0, soma=0, y, z=0, valor=0;
    
                                                    
    printf("digite seu nome:\n");                   
    fgets(nome, MAX, stdin);
                                                    
    for(a=0; a<MAX; a++)                            
    { 
        
        if(nome[a] == 'a' || nome[a]== 'i' || nome[a]== 'j' || nome[a]== 'q' || nome[a]=='y')
        {    
            y=1;
            soma+=y;
            continue;
        }
        if(nome[a]== 'b' || nome[a]== 'k' || nome[a]== 'r')
        {    
            y=2;
            soma+=y;
            continue;
        }
        if(nome[a]== 'c' || nome[a]== 'g' || nome[a] == 'l' || nome[a]== 's')    
        {
            y=3;
            soma+=y;
            continue;
        }
        if(nome[a] == 'd' || nome[a]== 'm'|| nome[a]== 't')
        {
            y=4;
            soma+=y;
            continue;
        }
        if(nome[a] == 'e' || nome[a]== 'n' || nome[a]== 'h' || nome[a]== 'x')
        {
            y=5;
            soma+=y;
            continue;
        }    
        if(nome[a] == 'u' || nome[a]== 'v' || nome[a]== 'w')
        {    
            y=6;    
            soma+=y;
            continue;
        }
        if(nome[a] == 'o' || nome[a]== 'z')
        {    
            y=7;
            soma+=y;
            continue;
        }
        if(nome[a] == 'f' || nome[a]== 'p')
        {
            y=8;
            soma+=y;
            continue;
        }
        if(nome[a] == '0')
        {
            y=0;
            soma+=y;
            continue;
        }
    }   

    if(soma>100) 
        for(a=0; a<2; a++)
         { 
            if(a==1)
             {
                b=soma/100;
                valor+=b;
                break;
            }
            b=soma%100;
            c=soma%10;
            c/=10;
            valor=b+c;
        } 
            
    else
        for(a=0; a<2; a++)
        {
            if(a==1)
            {
                b=soma/10;
                valor+=b;
                break;  
             }    
            b=soma%10;
            valor=b;
        } 

    
    for(y=0; y<2; y++)
    {
        if(y==1)
        {    
            z=valor/10;
            c+=z;
            break;
        }    
        z=valor%10;
        c=z;
    } 

    printf("Seu nome no valor de chaldean eh:%d", c);

    switch(c)
    {
        case 1:
            printf("\nAspectos positivos:Lideranca, Pioneirismo, Iniciativa, Coragem, Independencia.\nAspectos negativos:Agressividade, Egoismo, Egocentrismo, Inflexibilidade, Individualismo.\n");
            break;
        case 2: 
            printf("\nAspectos positivos:Tato, Diplomacia, Paciencia, Cooperacao, Companheirismo.\nAspectos negativos:Duvida, Dependencia, Submissao, Passividade, Inseguranca.\n");
            break;
        case 3:
            printf("\nAspectos positivos:Disciplina, Ordem, Estabilidade, Construcao, Confianca, Honestidade.\nAspectos negativos:Rigidez, Critica excessiva, Inflexibilidade, Inseguranca, Metodico.\n");
            break;
        case 4:
            printf("\nAspectos positivos:Criatividade, Comunicacao, Expressao, Entusiasmo, Sociabilidade.\nAspectos negativos:Superficialidade, Ostentacao, Exagero, Dispersao, Imaturidade.\n");
            break;
        case 5:
            printf("\nAspectos positivos:Liberdade, Curiosidade, Flexibilidade, Versatilidade, Inteligencia.\nAspectos negativos:Ansiedade, Indisciplina, Instabilidade, Impulsividade, Infidelidade.\n");
            break;
        case 6:
            printf("\nAspectos positivos:Amor, Beleza, Equilibrio, Familia, Saude, Justica.\nAspectos negativos:Utopia, Martir, Ciumes, Ressentimento, Dificuldade em aceitar a realidade.\n");
            break;
        case 7:
            printf("\nAspectos positivos:Espiritualidade, Introspeccao, Profundidade, Perfeccionismo, Controle da Mente.\nAspectos negativos:Solidao, Pobreza, Exigencia excessiva, Auto-Critica, Reclusao.\n");
            break;
        case 8:
            printf("\nAspectos positivos:Lideranca, Poder, Organizacao, Perseveranca, Auto-confianca.\nAspectos negativos:Ganancia, Autoritarismo, Teimosia, Impaciencia, Intolerancia.\n");
            break;
        default:
            printf("\nAspectos positivos:Amor Universal, Solidariedade, Serenidade, Compaixao, Sabedoria.\nAspectos negativos:Sacrificio, Martir, Instabilidade Emocional, Distanciamento da Realidade.\n");
    }        
    
    return;
}






