#include <stdio.h>
#include <iostream>
using namespace std;
int *p; //contiene l'indirizzo di memoria di una cella intera
int n=1; // é una variabile normale intera
p=&n; // contiene l'indirizzo della variabile n , & vuol dire indirizzo di, p non conterrá nulla prima dell'&
 //*  ha il significato di valore puntato da. Serve a dichiarare un puntatore, ad accedere a un valore puntato
cout<<*p; // prende il valore puntato da p (dev'essere un puntatore) e lui va sulla cella di memoria puntata da quell'indirizzo. 

/* passaggio parametri per indirizzo */

