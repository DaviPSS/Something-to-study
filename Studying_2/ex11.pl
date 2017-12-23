/* ************************************************************************                               *
*    ex11.pl, v1.0                                                         *
*    cofre em prolog                                                       *
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
num([1,2,3,4,5,6,7,8,9]).

gerar(L) :-
    num(L1),
    select(7,L1,L2),
    select(N3,L2,L3),
    select(N4,L3,L4),
    select(N1,L4,_),
    L = [N1,N2,N3,N4].

testar([N1,N2,N3,N4]) :-
    N2 is 7,
    1 is N1 mod 2,
    N1 > N3,
    N1 is N3 + 1,
    N4 is N3 + N2.

cofre :-
    gerar(L1),
    testar(L1),
    %writef('%w\n',['Solucao: ', L1]),
    writeln(L1),

