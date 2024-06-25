/* Aufgabe: Mathematische Rechenoperatoren
   Datum: 18.09.2023
   Autor: Dominick Shustereit de la Rosa  */
   #include <stdio.h>
   int main()


   { 
    
     int a = 1567; 
     int b = 367; 
     int summe;
     summe = a+b;

     printf("Die Summe der Zahlen %d und %d    ist\t = %d\n", a,b,summe);

     int differenz;
     differenz = a-b;

     printf("Die Differenz der Zahlen %d und %d ist\t = %d\n", a,b, differenz);  

     int produkt;
     produkt = a*b;
     printf("Das Produkt der Zahlen %d und %d   ist\t = %d\n", a,b, produkt); 
     
     int quotient;
     quotient = a/b;
     printf("Der Quotient der Zahlen %d und %d  ist\t = %d            (Ganzzahldivison)\n", a,b, quotient); 

     int modulo;
     modulo = a%b; 
     printf("Die Divison der Zahlen %d und %d   ist\t = 4 Rest %d    (Division mit Rest)\n", a,b, modulo);  



     return 0;

                }