#include <stdio.h>
#include <math.h>

int main()

{

  printf("Celsius zu Fahrenheit\n");

  int celsius, fahrenheit, antwort;
 
  printf("Bitte geben Sie die Temperatur in Celsius ein:\n");
  scanf("%d", &celsius); 

  fahrenheit = celsius * 9/5 + 32;

  printf("%d in Celsius = %d in Fahrenheit\n", celsius, fahrenheit);


do
{
  

  printf("Noch eine Umrechnung? 0=nein, 1= ja \n");
  scanf("%d", &antwort); 

  
  




} while (antwort > 0); 










    return 0;
}