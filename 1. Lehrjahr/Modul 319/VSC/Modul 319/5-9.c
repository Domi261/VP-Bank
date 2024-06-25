#include <stdio.h>
int main ()

{
    printf("+----------Menu------------+\n");
    printf("¦ -1- Boot up PC 1         ¦\n");
    printf("¦ -2- Boot up PC 2         ¦\n");
    printf("¦ -3- Activate the printer ¦\n");         
    printf("¦ -4- Make coffee          ¦\n");
    printf("¦ -5- After-work hour      ¦\n");
    printf("+--------------------------+\n"); 

    int entscheidung;


   printf("Please make a choice\n");
   scanf("%d", &entscheidung); 

   switch (entscheidung)
   { 
   case 1:
      printf("Booting up PC 1...\n");
      break;

   case 2:
      printf("Booting up PC 2...");
      break;

   case 3: 
      printf("Activating the printer...");
      break;

   case 4: 
      printf("Making Coffee...");
      break;

   case 5:
      printf("Making after work-hour...");
      break; 

   default:
      printf("?"); 
      break; 


   }


      return 0;



}