/* Augabe: Seletkion mit if else Wurzel berechnen
   Datum: 06.11.2023
   Autor: Dominick Schustereit de la Rosa*/

   #include <stdio.h>
   #include <math.h>
   #include <stdbool.h>

   int main ()

   {  
     
     float  ersteZahl;

    printf("Bitte geben sie eine Zahl ein:\n");
    scanf("%f", &ersteZahl); 

    if (ersteZahl >= 0)

    { 
       printf("Die Wurzel aus %f ist %f", ersteZahl, sqrt(ersteZahl));


    } 
    else
    { 
        printf("%f ist negativ. Wurzeln berechenen geht nicht", ersteZahl);



    }




   return 0; 




} 