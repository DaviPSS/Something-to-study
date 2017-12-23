/* *************************************************************************
*                                                                          *
*    ex2.pl, V 0.1                                                         *
*    Algoritmo para arvore genealógica                                     *
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
%fatos

homem(ernando).
homem(jorge).
homem(davi).
homem(tiago).
homem(moises).
homem(isaac).
homem(miguel).
mulher(dilma).
mulher(solange).
mulher(aldenice).
mulher(eliude).
mulher(isabele).
pais(ernando,jorge).
pais(dilma,jorge).
pais(jorge,davi).
pais(solange,davi).
pais(jorge,tiago).
pais(solange,tiago).
pais(moises,solange).
pais(aldenice,solange).
pais(moises,isaac).
pais(aldenice,isaac).
pais(isaac,isabele).
pais(eliude,isabele).
pais(isaac,miguel).
pais(eliude,miguel).

%regras

pai(P,F) :-
    homem(P),
    pais(P,F).

mae(M,F) :-
    mulher(M),
    pais(M,F).

filho(F,P) :-
    homem(F),
    pais(P,F).

filha(F,P) :-
    mulher(F),
    pais(P,F).

irmao(A,B) :-
    homem(A),
    pai(P,A),
    pai(P,B),
    not(A=B).

irmaa(A,B) :-
    mulher(A),
    pai(P,A),
    pai(P,B),
    not(A=B).

avoo(V,N) :-
    homem(V),
    pais(V,P),
    pais(P,N).
    

avoa(V,N) :-
    mulher(V),
    pais(V,P),
    pais(P,N).

tio(T,S) :-
    homem(T),
    pai(V,T),
    pai(V,P),
    pais(P,S),
    not(T=P).

tia(T,S) :-
    mulher(T),
    pai(V,T),
    pai(V,P),
    pais(P,S),
    not(T=P).
    

primo(X,Y) :-
    homem(X),
    pai(V,T),
    pai(V,P),
    pais(T,Y),
    pais(P,X),
    not(T=P).
    

prima(X,Y) :-
    mulher(X),
    pai(V,T),
    pai(V,P),
    pais(T,Y),
    pais(P,X),
    not(T=P).

neto(N,V) :-
    homem(N),
    pais(V,P),
    pais(P,N).
    
neta(N,V) :-
    mulher(N),
    pais(V,P),
    pais(P,N).
    
sobrinho(S,T) :-
    homem(S),
    pai(V,T),
    pais(V,M),
    pais(M,S),
    not(M=T).

sobrinha(S,T) :-
    mulher(S),
    pai(V,T),
    pais(V,M),
    pais(M,S),
    not(M=T).

    







