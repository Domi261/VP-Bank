/*Aufgabe: Datentyp wählen, Wertebereich, Speicherbedarf
  Datum: 14.09.2023
  Autor: Dominick Schustereit de la Rosa
*/
#include <stdio.h>
int main()
{
  int zahl_1 = 105344;
  short zahl_2 = -155;
  float zahl_3 = 2.71;
  short zahl_4 = 31072;
  char zahl_5 = 8;
  double zahl_6 = 134997.1234;
  float zahl_7 = 34.667;

  printf("Passendenden Datentyp finden\n-------------------------------------------\n");
  printf("Zahl_1 = 105344    \tDatentyp:\t int\t %d Bytes\t\n", sizeof (int));
  printf("Zahl_2 = -155      \tDatentyp:\t short\t %d Bytes\t\n", sizeof (short));
  printf("Zahl_3 = 2.71      \tDatentyp:\t float\t %d Bytes\t\n", sizeof (float));
  printf("Zahl_5 = 8         \tDatentyp:\t short\t %d Bytes\t\n", sizeof(short));
  printf("Zahl_6 = 134997.24 \tDatentyp:\t char\t %d Bytes\t\n", sizeof(char));
  printf("Zahl_7 = 34.667    \tDatentyp:\t float\t %d Bytes\t\n", sizeof(float));
  printf("----------------------------------------------------------\n");

return 0;

}