#include <stdio.h>
int main() 
{
 
//Deklarieren
int Zahl1;
int Zahl2;
int Zahl3;
 
//Eingabe
printf("Gebe eine Zahl ein: ");
scanf("%d", &Zahl1);
printf("Gebe eine Zahl ein: ");
scanf("%d", &Zahl2);
printf("Gebe eine Zahl ein: ");
scanf("%d", &Zahl3);
 
//Verarbeitung
//Ausgabe
if (Zahl1 > Zahl2 && Zahl1 > Zahl3)
{
    printf("%d ist die grösste",Zahl1);    
}
else if(Zahl2>Zahl1 && Zahl2>Zahl3)
{
    printf("%d ist die grösste",Zahl2);
}
 
else
{
    printf("%d ist die grösste",Zahl3);
}
 
}
 
 


