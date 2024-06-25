/* Aufgabe: Schiefer Wurf
   Datum: 02.11.2023
   Autor: Dominick S. de la Rosa */

   #include <stdio.h>
   #include <math.h>

   int main()
   {

   printf("Berchung der Flugweite einer Kugel aus Anfangsgeschwindigkeit und Abwrufswinkel\n");
   printf("--------------------------------------------------------------------------------\n");

   double anfangs_v, alpha, flugweite;    //deklaration 
   
   double const pi = 3.141593;       // deklaration mt wertzuweisung 
   
   double const g = 9.81;           // deklaration  mit wertzuweisung  

   printf("Bitte geben Sie die Anfangsgeschwidnigkeit ein [m/s]: ");    //ausgabe 
   scanf("%lf", &anfangs_v);      //eingabe 


   printf("Bitte geben Sie den Abwurfwinkel ein [Grad]: ");   //ausgabe 
   scanf("%lf", &alpha);    //eingabe 
   

   flugweite = (pow(anfangs_v,2)*sin(2*alpha*(pi/180)))/g; // verarbeitung 

   printf("Die Flugweite beträgt %.2f Meter " ,flugweite);      //ausgabe 

    return 0;


   }