/* ************************************************************************                               *
*    ex6.pl, v 1.0                                                         *
*    Labirinto ate chegar no objetivo                                      *
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

imprime(Lab) :-
    write().

Lab("[###########],
     [#         #],
     [# # #  ## #],
     [# # #   # #],
     [#   #  ## #],
     [# ###  ####],
     [#   #   # #],
     [# ####  # #],
     [#   #     #],
     [###########]").
         

 tenta(Li, Ci, Lf, Cf, Lab) :-
     tentaR(Li, Ci, Lf, Cf, Lab).
 
 tenta(Li, Ci, Lf, Cf, Lab) :-
     tentaD(Li, Ci, Lf, Cf, Lab).
 
tenta(Li, Ci, Lf, Cf, Lab) :-
     tentaL(Li, Ci, Lf, Cf, Lab).
 
tenta(Li, Ci, Lf, Cf, Lab) :-
     tentaU(Li, Ci, Cf, Lab).


resolve(Li, Ci, Lf, Cf, Lab) :-
     tenta(Li, Ci, Lf, Cf, Lab),
     resolve(Li, Ci, Lf, Cf, Lab).



