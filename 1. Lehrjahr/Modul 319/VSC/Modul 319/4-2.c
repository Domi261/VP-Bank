/* Aufgabe: Mathematische Rechenoperatoren  und Klammern
   Datum: 18.09.23
   Autor: Dominick Schstereit de la Rosa*/
   #include <stdio.h>
   int main()
   {  

     printf("Mathematische Rechenoperatoren\n----------------------------------\n"); 

     
   int a = 3;
   int b = 5; 
   int x;

    x= 3*b/8*((-1)*2*a*b/(a+b)-((4*a*a*b*b)/(a-b)));

    printf("Formel 1 mit Ganzzahlentypen\t = %d\n", x,a,b);

     float c = 3;
     float d = 5;
     float z;  

    z = 3*d/8*((-1)*2*c*d/(c+d)-((4*c*c*d*d)/(c-d)));
    printf("Formel 1 mit Fliesskommatypen\t = %f\n",z,c,d);



    int g = 9;
    int h = 11;
    int j = 13;

    int k;

    k= ((-1)*5*g/(h*j)-(10*h)/(g*j)-(15*j/(g*h)));
    printf("Formel 2 Ganzzahlentypen\t = %d\n", k,g,h,j);

    float i = 9;
    float o = 11;
    float p = 13; 

    float q;

    q = ((-1)*5*i/(o*p)-(10*o)/(i*p)-(15*p/(i*o)));
    printf("Formel 2 Fliesskommatypen\t = %f\n", q,i,o,p);






    return 0; 









    
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  }

