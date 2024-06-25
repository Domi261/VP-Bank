/* Aufgabe: Schaltjahrtest mit mehrfacher Seletkion
   Datum: 20.11.2023
   Autor: Dominick Schustereit de la Rosa */

  #include <stdio.h>
 
   int main(){
 
int jahr;
 
printf("Bitte geben Sie das Jahr ein:  ");
scanf("%d",&jahr);
 
if(jahr % 4 != 0){
    printf("Ist Schaltjahr = 0");
}
else if (jahr % 100 != 0){
    printf("IstSchaltjahr = 1");
}
else if(jahr % 400 != 0){
    printf("IstSchaltjahr = 0");
} else {
    printf("IstSchaltjahr = 1");
}
}








   