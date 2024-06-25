/* Aufgabe: Potenzberechnung
   Datum: 02.11.2023
   Autor: Dominick Schustereit de la Rosa*/

#include <stdio.h>
#include <math.h>

int main()

{

   printf("Potenzberechnung\n-----------------------------------------\n");

   int basis; // deklaration
   int exponent;
   int resultat; // deklaration

   printf("Bitte geben Sie die Basis ein: "); // ausgabe
   scanf("%d", &basis);                       // eingabe

   printf("Bitte geben Sie den Exponent ein: ");           // ausgabe
   scanf("%d", &exponent);                                 // eingabe
   printf("------------------------------------------\n"); // ausgabe

   resultat = pow(basis, exponent);

   printf("%d hoch %d ist %d", basis, exponent, resultat); // ausgabe

   return 0;
}