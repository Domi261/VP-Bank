/*Aufgabe: Zuweisungsoperatoren
  Autor: Dominick Schustereit de la Rosa
  Datum: 25.09.23 */
     
#include <stdio.h>
int main() { 

  int a = 0;
  int b = 3;
  printf("---------------------------------------------\n");
  printf("--------Start mit a = %d  und  b = %d--------\n", a,b);
  printf("---------------------------------------------\n");
  


  printf("Zuweisungsoperator: =\n");
  printf("---------------------\n");
  a = a+b;
  printf(" a = a + b: a hat jetzt den Wert %d\n",a);
  a = a+b;
  printf(" a = a + b: a hat jetzt den Wert %d\n", a);
  printf("Zuweisungsoperator: +=\n");
  printf("---------------------\n");
  a += b;
  printf(" a += b: a hat jetzt den Wert %d\n", a);
  a += b;
  printf(" a += b: a hat jetzt den Wert %d\n", a);

  int r = 1;
  int s = 2;

  printf("---------------------------------------------\n");
  printf("--------Start mit r = %d  und  s= %d--------\n", r,s);
  printf("---------------------------------------------\n");

  printf("Zuweisungsoperator: *\n");
  printf("---------------------\n");
  r = r*s;
  printf(" r = r * s: r hat jetzt den Wert %d\n", r);
  r = r*s;
  printf(" r = r * s: r hat jetzt den Wert %d\n", r);
  printf("Zuweisungsoperator: *=\n");
  printf("---------------------\n");
  r *=s;
  printf(" r *= s: r hat jetzt den Wert %d\n", r);
  r *=s;
  printf(" r *= s: r hat jetzt den Wert %d\n", r);
 
  return 0;







 

















}
