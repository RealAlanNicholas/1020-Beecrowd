#include <stdio.h>
int A,B,C,D;
int main(){

    scanf("%d %d %d %d", &A,&B,&C,&D);
    
    int soma = C + D;
    int soma2 = A + B;
    int resto = A % 2;
    if (B>C && D>A && soma>soma2 && C>0 && D>0 && resto==0 )
    {   
        printf("Valores aceitos\n");
    }else{
        printf("Valores não aceitos\n");
    }
    return 0;
}