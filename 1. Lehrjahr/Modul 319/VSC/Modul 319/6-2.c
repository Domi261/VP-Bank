/* Aufgabe: while-Schleife und Schleifenvariable
   Datum:   29.11.2023
   Autor: Dominick Schustereit de la Rosa */
   
#include <stdio.h>
#include <math.h>
int main(){
//Deklaration
    int zahl;
    int i;
    int result;
    i = 0;
//Eingabe
    printf("Gebe eine Zahl ein: \n");
    scanf("%d",&zahl);
    printf("Die %d-er Reihe lautet\n", zahl);
    printf("_______________________\n");
//Verarbeitung
    while (i<=10)
    {
//Ausgabe
        result = i * zahl;
        printf("%d x %d = %d\n", i,zahl, result);
        i = i+1;
       
    }
   
}
    
   
   








   

