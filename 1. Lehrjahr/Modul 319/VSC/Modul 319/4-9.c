/* Aufgabe: Kreisberechnung 
   Datum: 30.10.2023
   Autor: Dominick Schustereit de la Rosa*/

   #include <stdio.h>
   int main()
   {

   float radius;  //deklaration
   float pi;     //deklaration 
   pi = 3.1415; 
   float kreisumfang; 
   float kreisfläche;

   printf("Berechnung des Umfangs\n---------------------\n");  //eingabe 
   printf("Bitte geben sie den Radius ein [Meter:]\n");       // eignabe 
   scanf("%f", &radius);
     
   kreisumfang = 2*radius*pi;    //verarbeitung

   printf("Der Kreisumfang beträgt %f Meter\n", kreisumfang);  //ausgabe

   kreisfläche = pi*radius*radius;   //verarbeitung 

   printf("Die Kreisfläche beträgt %f Quadratmeter\n", kreisfläche);    //ausgabe 
 
   return 0;




   }