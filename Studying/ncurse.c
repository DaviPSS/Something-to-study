#include <stdio.h>
#include <curses.h>

void sair(void);

int main(void)
{
    initscr();

     start_color(); //Esta função torna possível o uso das cores

     //Abaixo estamos definindo os pares de cores que serão utilizados no programa
     init_pair(1,COLOR_WHITE,COLOR_BLUE); //Texto(Branco) | Fundo(Azul)
     init_pair(2,COLOR_BLUE,COLOR_WHITE); //Texto(Azul) | Fundo(Branco)
     init_pair(3,COLOR_RED,COLOR_WHITE);  //Texto(Vermelho) | Fundo(Branco)

     bkgd(COLOR_PAIR(1));  /*Aqui nós definiremos que a cor de fundo do nosso 
                                                                   programa será azul e a cor dos textos será branca.*/

     attron(COLOR_PAIR(3)); /*Estamos alterando o par de cores para 3 em vez 
                            de utilizar o par de cor por omissão(1).*/
     bkgd(COLOR_PAIR(1));  /*Aqui nós definiremos que a cor de fundo do nosso 
                            programa será azul e a cor dos textos será branca.*/
     attron(COLOR_PAIR(3)); /*Estamos alterando o par de cores para 3 em vez 
                             de utilizar o par de cor por omissão(1).*/

