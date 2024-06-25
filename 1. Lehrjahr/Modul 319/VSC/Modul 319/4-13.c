/* Aufgabe: Satz des Pythagoras
   Datum: 03.11.2003 
   Autor: Dominick Schustereit de la Rosa */

#include <stdio.h>
#include <math.h>

int main()
{

printf("Der Satz des Pytahagoras\n----------------------------------------\n");   //ausgabe 

float kathete_1, kathete_2, hypotenuse;    //deklaration 

printf("Bitte geben Sie die Kathete a ein: ");   //ausgabe 
scanf("%f", &kathete_1);    //eingabe 

printf("Bitte geben Sie die Kathete b ein: ");  //eingabe 
scanf("%f", &kathete_2);
printf("----------------------------------------\n");  // ausgabe 

hypotenuse = sqrt((pow(kathete_1,2)+pow(kathete_2,2)));     //verarbeitung 

printf("Die Hypotenuse c hat die Länge %.2f\n", hypotenuse);   //ausgabe 
printf("----------------------------------------\n"); 


return 0;







}

