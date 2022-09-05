#include <stdio.h>
 
int main() {
 
    int days[3]={365,30,1};
    char * comp[3]={"ano(s)","mes(es)","dia(s)"};
    int N;
    int qnt,resto;
    
    scanf("%d", &N);
    
    for(int i=0;i<3;i++){
        qnt=N/days[i]; 
        resto = N % days[i]; 
        printf("%d %s\n", qnt, comp[i]);
        N = resto;
    }

    return 0;
}