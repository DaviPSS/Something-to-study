
objetivo(explorar).

run_agent(P, A) :-
    seleciona(p, A).

selecona(P, A) :-
    objetivo(O),
    condicoes(O, P, Cond),
    Cond==sim,
    calcularacao(O, P, A).

seleciona(P, A) :- 
    objetivo(ouro),
    condicoes(ouro, P, A),
    mudarobj(Ob, P).

calcularacao(explorar, P, A) :- .


condicoes(ouro, [no, no, yes, no], sim).

calcularacao(explorar, P, A) :- 
    P=[yes, no, no, yes],
    A=grab.


inseguras(LCS, POS, LCS1) :-
    adjacentes(POS, LADJ),
    append(LADJ, LCS, LCS1),
    assert...


