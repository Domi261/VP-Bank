/*Danie Kaganov
Aufgabe 5-6
13.11.2023*/
#include <stdio.h>
 
int main()
{
//Deklarieren
int jahr;
//Einlesen
printf("Welches jahr: ");
scanf("%d", &jahr);
//Verarbeitung
 
if (jahr%4==0)
{
    if (jahr%100==0)
    {
        if (jahr%400==0)
        {
            printf("Ist ein Schaltjahr");
        }
        else
        {
            printf("Es ist kein Schaltjahr");
        }

        
       
    }
    else
    {
        printf("Es ist ein Schaltjahr");  
    }
}
else
{
    printf("Es ist kein Schaltjahr");
}
}