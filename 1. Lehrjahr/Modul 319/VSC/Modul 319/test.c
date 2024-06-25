#include <stdio.h>
#include <math.h>
int main()
{

 printf("While Schleife\n");

 int i;
 i = -20;

 while ( i <= 50)
 {
  
  int fahrenheit;
  fahrenheit = i * 9/5 + 32;
  printf("%d Celsius =\t %d Fahrenheit\n", i, fahrenheit);

  i = i + 5;


 }

}


