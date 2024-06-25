/* Aufgabe: Zylinderberechnung
   Datum: 29.10.2023
   Autor: Dominick Schustereit de la Rosa */

   #include <stdio.h>
   int main ()
   {
    printf("Berechnung der Oberfläche und des Inhalts eines Zylinders\n----------------------------------------------------------\n");
    float radius;   //deklaration
    float höhe;    // deklaration

    printf("Bitte geben Sie den Radius eines Zylinders ein [cm]:\n");
    scanf("%f", &radius);  //eingabe

    printf("Bitte geben Sie die Höhe des Zylinders ein [cm]:\n");
    scanf("%f", &höhe);   //eingabe 

    const float pi = 3.14159265359;
    float oberfläche;
    oberfläche = 2*pi*radius*(radius+höhe);  //verarbeitung

    printf("Die Oberfläche Des Zylinders beträgt: %f\n",oberfläche); //ausgabe

    float volumen;
    volumen = pi*radius*radius*höhe;  //verarbeitung 
    printf("Das Volumen des Zylinders beträgt: %f\n", volumen);   //ausgabe

    return 0;







   }