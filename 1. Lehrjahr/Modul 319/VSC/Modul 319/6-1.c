/* Aufgabe: while-schleife
   Datum: 27.11.2023
   Autor: Dominick Schustereit de la Rosa */



#include <stdio.h>
#include <math.h>
int main ()
{  
  printf("Wurzelberechnung\n----------------\n");  

    double zahl, wurzel;

   printf("Bitte geben Sie eine Zahl ein:\n");
   scanf("%lf", & zahl); 
  

   
  while (zahl < 0)
  {
    printf("%f ist negativ. Wurzel berechnen geht nicht \n", zahl); 
    printf("Bitte geben Sie die Zahl nochmals ein: \n");
    scanf("%lf", & zahl);
    printf("%f ist negativ. Wurzel berechnen geht nicht.\n" , zahl);

    printf("Bitte geben sie die Zahl nochmals ein: \n");
    scanf("%lf", &zahl);
  }  


    wurzel = sqrt(zahl);
  
    printf("Die Wurzel aus %f ist %f", zahl, wurzel);
  
    return 0;
  } 


    


   









