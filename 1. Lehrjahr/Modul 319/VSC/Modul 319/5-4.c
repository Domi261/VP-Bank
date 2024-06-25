/* Aufgabe: Franken Rappen Vergleich
   Datum: 06.11.2023
   Autor: Dominick Schustereit de la Rosa*/

   #include <stdio.h>
   #include <stdbool.h> 

   int main()
   {
     int franken1, franken2, rappen1, rappen2;

     printf("Franken Rappen Vergleich\n------------------------\n");

     printf("Bitte geben Sie den Frankenbetrag 1 ein: \n");
     scanf("%d",&franken1);

     printf("Bitte geben sie den Rappenbetrag 1 ein: \n");
     scanf("%d", &rappen1);

     printf("Bitte geben Sie den Frankenbetrag 2 ein: \n");
     scanf("%d", &franken2);

     printf("Bitte geben Sie den Rappenbetrag 2 ein: \n");
     scanf("%d", &rappen2); 

     if (franken1 != franken2)
     { 
        if (franken1 < franken2)
       { 
          printf("%d Franken %d ist weniger als %d Franken %d \n", franken1,rappen1,franken2,rappen2);
       }
      else
      {   
        printf("%d Franken %d  ist mehr als %d Franken %d \n", franken1,rappen1,franken2,rappen2);
      }
     
     } 
     
     if (rappen1 < rappen2)
     {
      printf("%d Franken %d ist weniger als %d Franken %d \n", franken1,rappen1,franken2,rappen2);

     }
    
     if (rappen1 > rappen2)
     {
      printf("%d Franken %d ist mehr als %d Franken %d \n", franken1,rappen1,franken2,rappen2);

     }

     if (rappen1 == rappen2)
     {
      printf("%d Franken %d ist gleich viel wie %d Franken %d \n", franken1,rappen1,franken2,rappen2);

     } 

      printf("------------------------\n");

     return 0;

      
     
     
     
    }