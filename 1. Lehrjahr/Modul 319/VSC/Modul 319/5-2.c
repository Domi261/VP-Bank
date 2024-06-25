/* Aufgabe: Bedingte Anweisungen mit if: Fahrprüfung
   Datum: 06.11.2023
   Autor: Dominick Schustereit de la Rosa*/

   #include <stdio.h>
   #include <stdbool.h>

   int main()
   {
     printf("Fahrpruefung\n-------------\n"); 

     int alter; 

     printf("Bitte geben Sie ihr Alter ein:\n");
     scanf("%d", &alter); 

     int differenz = 18-alter;

     if (alter<18)
     {
        printf("Sie müssen noch %d Jahre zur Fahrprüfung warten.\n", differenz);
     } 

     if (alter>18)
     {
        printf("Sie sind seit %d Jahr/en volljährig und dürfen Autofahren.\n", alter-18);
     }

     if (alter==18)
     { 
        printf("Sie sind gerade %d geworden und können die Fahrprüfung ablegen.\n", alter);

     }

     if (alter!=18)
     {
        printf("Dieses Jahr sind sie nicht 18 geworden.\n");
     } 

      printf("-------------\n");


      return 0; 










   }