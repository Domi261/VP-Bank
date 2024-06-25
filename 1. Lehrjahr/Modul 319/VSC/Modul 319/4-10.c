/* Aufgabe: Wurzelberechnung
   Datum: 30.10.2023
   Autor: Dominick Schusterit de la Rosa */

   #include <stdio.h> 
   #include <math.h>
   int main () 

   { 


    printf("Wurzel aus einer Zahl\n-------------------------\n");

    double variable; 
    double wurzel;            //deklaration 
 


    printf("Bitte geben sie eine Zahl ein: ");    //ausgabe 
    scanf("%lf", &variable);        //eingabe 
 
    wurzel = sqrt(variable);   //deklaraiton 

    printf("Die Wurzel aus %f beträgt %f\n", variable, wurzel);  //ausgabe 
    


    return 0;









   }