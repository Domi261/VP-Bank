/* Aufgabe: Dateneingabe
   Datum: 23.10.23
   Autor: Dominick Schustereit de la Rosa */

       #include <stdio.h>
      int main()
      { 

        printf("Aufgabenstellung 1\n--------------------------\n");
        int ersteZahl; 
        int zweiteZahl;

        printf("Bitte geben Sie den Wet der ersten Zahl ein:");
        scanf("%d",&ersteZahl);

        printf("Bitte geben Sie den Wert der zweiten Zahl ein:");
        scanf("%d", &zweiteZahl);

        printf("Die Summe der Zahlen %d und %d ist %d\n", ersteZahl, zweiteZahl, ersteZahl+zweiteZahl);

        printf("Aufgabenstellung 2\n--------------------------\n");

        printf("Die Differenz der Zahlen %d und %d ist %d\n", ersteZahl,zweiteZahl,ersteZahl-zweiteZahl);

        printf("Das Produkt der Zahlen %d und %d ist %d\n", ersteZahl,zweiteZahl, ersteZahl*zweiteZahl);

        printf("Die Division der Zahlen %d und %d ist 1 Rest%d\n", ersteZahl,zweiteZahl, ersteZahl%zweiteZahl);

        float f1;
        float f2; 
        f1 = ersteZahl;
        f2 = zweiteZahl;

        printf("Die Fliesskommadivison der Zahlen %f und %f ist %f\n", f1,f2,f1/f2);

        return 0;

     


      }