#include <stdio.h>
#include <math.h>

double N; // variavel global estatica

int main() {
    
    float notas[6]={100,50,20,10,5,2};
    double moedas[6]={1.00,0.50,0.25,0.10,0.05,0.01};
    float resto,resto2;
    

    scanf("%lf", &N);

    printf("NOTAS:\n");

    for(int i=0;i<6;i++){
        int qnt=N/notas[i]; // 576.73 // 76.73 // 26.73 // 6.73 // 1.73
        resto= fmod(N,notas[i]);
        printf("%d nota(s) de R$ %.2f\n", qnt,notas[i]);
        N=resto;
    }
    
    printf("MOEDAS:\n");

    N=resto;
    for(int c=0;c<6;c++){
        
        int qnt2=N/moedas[c]; // 1.73 | 0.73 | 0.23 | 0.03 | 
        resto2= fmod(N,moedas[c]);
        printf("%d moeda(s) de R$ %.2f\n", qnt2,moedas[c]);
        N=resto2;
    }


    return 0;
}