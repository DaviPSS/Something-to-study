/* ************************************************************************                               *
 *    ex20.c, v1.0                                                          *
 *    Jogo da Velha                                                         *
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
 *    Davi Pedro da Silva Sitonio <davisitonio@gmail.com>                   *
 *    Webpage: https://github.com/DaviPSS                                   *
 *    Phone: +55 (81) 99738-2222                                            *
 * ************************************************************************ *
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>
#include <unistd.h>
#define LABL 5
#define LABC 6

void printmap(char map[LABL][LABC]);
int main(void)
{  
 
     char  map[LABL][LABC]={" | | ",
                           "_ _ _",
                           " | | ",
                           "_ _ _",
                           " | | "};

    int tecla;
    int x=0, y=0, s, t;
    char caracter='@';
    int o;
    int r=0;
    int g=0;
    initscr();
    cbreak();
    keypad(stdscr, TRUE);
    timeout(0);
    start_color();
    
    init_pair(1, COLOR_BLUE, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);
    init_pair(3, COLOR_YELLOW, COLOR_BLACK);
    
    while(1)
    {  
        
        clear();
        printmap(map);
        tecla=getch();
        o=r%2;
        if(o==0)
        {    
            attron(COLOR_PAIR(1)); 
            printw("\nJogador(X)-aperte espaço para adicionar");
            attroff(COLOR_PAIR(1));
            switch(tecla)
            {
                case KEY_RIGHT:
                    x+=2;
                    caracter='@';
                    break;
                case KEY_DOWN:
                    y+=2;
                    caracter='@';
                    break;
                case KEY_LEFT:
                    x-=2;
                    caracter='@';
                    break;
                case KEY_UP:
                    y-=2;
                    caracter='@';
                    break;
                case ' ':
                    caracter='X';
                    break;
            } 
            if(x>5 || x<0)
                x=0;
            if(y>5 || y<0)
                y=0;
            
            if(caracter=='X' &&  map[y][x]!='O')
            {     
                map[y][x]='X';
                r++;   
            }
            mvprintw(y,x,"@");
            for(s=0; s<5; s++)
                for(t=0; t<6; t++)
                    if( map[s][t]=='X')
                        mvchgat(s,t,1,A_BOLD,1,NULL);
            
            for(s=0; s<5; s++)
                for(t=0; t<6; t++)
                    if( map[s][t]=='O')
                        mvchgat(s,t,1,A_BOLD,2,NULL);
            refresh();
            usleep(100000);
            
            if(map[0][0]=='X' && map[0][2]=='X' && map[0][4]=='X') 
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(X)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(60000);
                }

            if(map[2][0]=='X' && map[2][2]=='X' && map[2][4]=='X')
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(X)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(600000);
                }

            if(map[4][0]=='X' && map[4][2]=='X' && map[4][4]=='X')
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(X)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(60000);
                }

            if(map[0][0]=='X' && map[2][0]=='X' && map[4][0]=='X')
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(X)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(60000);
                }

            if(map[0][2]=='X' && map[2][2]=='X' && map[4][2]=='X')
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(X)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(60000);
                }

            if(map[0][4]=='X' && map[2][4]=='X' && map[4][4]=='X')
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(X)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(60000);
                }

            if(map[0][0]=='X' && map[2][2]=='X' && map[4][4]=='X')
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(X)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(60000);
                }

            if(map[0][4]=='X' && map[2][2]=='X' && map[4][0]=='X')
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(X)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(60000);
                }
        }
        else
        {    
            attron(COLOR_PAIR(2));
            printw("\nJogador(O)-aperte espaço para adicionar");
            attroff(COLOR_PAIR(2));
            switch(tecla)
            {
                case KEY_RIGHT:
                    x+=2;
                    caracter='@';
                    break;
                case KEY_DOWN:
                    y+=2;
                    caracter='@';
                    break;
                case KEY_LEFT:
                    x-=2;
                    caracter='@';
                    break;
                case KEY_UP:
                    y-=2;
                    caracter='@';
                    break;
                case ' ':
                    caracter='O';
                    break;
            } 
            if(x>5 || x<0)
                x=0;
            if(y>5 || y<0)
                y=0;
            if(caracter=='O' &&  map[y][x]!='X')
            {     
                map[y][x]='O';
                r++;   
            }
            mvprintw(y,x,"@");
            
            for(s=0; s<5; s++)
                for(t=0; t<6; t++)
                    if( map[s][t]=='X')
                        mvchgat(s,t,1,A_BOLD,1,NULL);
            
            for(s=0; s<5; s++)
                for(t=0; t<6; t++)
                    if( map[s][t]=='O')
                        mvchgat(s,t,1,A_BOLD,2,NULL);
                        
            refresh();
            usleep(60000);
            
            if(map[0][0]=='O' && map[0][2]=='O' && map[0][4]=='O')
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(O)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(60000);
                }
            
            if(map[2][0]=='O' && map[2][2]=='O' && map[2][4]=='O')
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(O)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(60000);
                }

            if(map[4][0]=='O' && map[4][2]=='O' && map[4][4]=='O')
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(O)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(60000);
                }

            if(map[0][0]=='O' && map[2][0]=='O' && map[4][0]=='O')
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(O)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(60000);
                }

            if(map[0][2]=='O' && map[2][2]=='O' && map[4][2]=='O')
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(O)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(60000);
                }

            if(map[0][4]=='O' && map[2][4]=='O' && map[4][4]=='O')
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(O)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(60000);
                }

            if(map[0][0]=='O' && map[2][2]=='O' && map[4][4]=='O')
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(O)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(60000);
                }
            
            if(map[0][4]=='O' && map[2][2]=='O' && map[4][0]=='O')
                while(1)
                {    
                    clear();
                    printmap(map);
                    printw("\nJogador(O)-Ganhou!(Para sair precione ^C)");
                    refresh();
                    usleep(60000);
                }
        }    
        for(s=0; s<5; s++)
            for(t=0; t<6; t++)    
                if( map[s][t]=='X' || map[s][t]=='O')
                    g++;
            
        if(g==9)
            while(1)
            {
                clear(); 
                printmap(map);
                attron(COLOR_PAIR(3));
                printw("\nDEU VELHA(Para sair precione ^C)");
                attroff(COLOR_PAIR(3));   
                
                for(s=0; s<5; s++)
                    for(t=0; t<6; t++)
                        if( map[s][t]=='X')
                        {    
                            attron(COLOR_PAIR(1));
                            mvchgat(s,t,1,A_BOLD,1,NULL);
                            attroff(COLOR_PAIR(1));
                        }

                for(s=0; s<5; s++)
                    for(t=0; t<6; t++)
                        if( map[s][t]=='O')
                        {    
                            attron(COLOR_PAIR(2));
                            mvchgat(s,t,1,A_BOLD,2,NULL);
                            attroff(COLOR_PAIR(2));
                        }
                refresh();
                usleep(60000);          
            }    
        g=0;
    }    
    refresh();
    usleep(60000);
    endwin();
    return 0;
}              

void printmap(char map[LABL][LABC])
{ 
    int i;
    for(i=0; i<LABL; i++)
        printw("%s\n",map[i]);

    return;
}       

