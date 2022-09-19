#include <stdio.h>
#include <math.h>


double a,b,c;
double R1,R2,x,xII;
double squareroot; // usada para poder determinar se a raiz é positiva!
int main() {
 
 scanf("%lf %lf %lf", &a,&b,&c);

    
    double squareroot = (b*b)-(4*a*c);

 if (a > 0 && squareroot > 0 ){  

    x = (-b + (sqrt(squareroot)))  / (2*a);
     printf("R1 = %.5lf\n", x);
    xII = (-b - (sqrt(squareroot))) / (2*a);
    printf("R2 = %.5lf", xII);
 
 }else{

    printf("Impossivel calcular");

 }

    return 0;
}

