/* Aufgabe 3-1, Deklaration, Initialisierung und Wertzuweisung 
Datum: 11.09.2023
Autor: Dominick Schustereit de la Rosa
*/

#include <stdio.h>

int main()
{

int ersteZahl = 10;
int zweiteZahl = 20; 

printf("Der Wert der ersten Zahl ist %d\t\nDer Wert der Zeiten Zahl ist %d\t\n" , ersteZahl,zweiteZahl);

  ersteZahl = 30;
  zweiteZahl = 40;

printf("Der Wert der neuen ersten Zahl ist %d\t\nDer Wert der neuen zweiten Zahl ist %d\t\n", ersteZahl,zweiteZahl);

 float ersteKommazahl = 1.2;
 float zweiteKommazahl = 2.4;


printf("Der Wert der ersten Fliesskommazahl ist %f\t\nDer Wert der zweiten Fliesskommazahl ist %f\t\n", ersteKommazahl, zweiteKommazahl);

  ersteKommazahl = 4.8;
  zweiteKommazahl = 9.6;

printf("Der Wert der neuen ersten Fliesskommazahl ist %f\t\nDer Wert der zweiten neuen Fliesskommazhal ist %f\t\n", ersteKommazahl, zweiteKommazahl);

return 0;

}