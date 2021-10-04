#include <stdio.h>



int main(){
    int flow = 1;
    char expressao[20];
    int pos = 0;
    char input;
    char buf[4];
    int resultado = 0;

    scanf("%c",&input);
    expressao[pos] = input;
    while(flow){
        if(input == '=')break;
        else{
            pos++;
            scanf("%c",&input);
            expressao[pos] = input;
        } 
    }

    for(int i =1; i<pos; i++){
        if(expressao[i]=='*'){
            int a = expressao[i-1] - '0'; //gambiarra em C para converter char em int ¯\_(ツ)_/¯
            int b = expressao[i+1] - '0';
            resultado = a * b;
            sprintf(buf, "%i", resultado);//gambiarra em C para converter int em char ¯\_(ツ)_/¯
            expressao[i-1] = buf;
            expressao[i] = '+';
            expressao[i+1] = '0';
        } else if(expressao[i]=='/'){
            int a = expressao[i-1] - '0';
            int b = expressao[i+1] - '0';
            resultado = a / b;
            sprintf(buf, "%i", resultado);
            expressao[i-1] = buf;
            expressao[i] = '+';
            expressao[i+1] = '0';
        }else if(expressao[i]=='-'){
            int a = expressao[i-1] - '0'; //gambiarra em C para converter 1 char em int ¯\_(ツ)_/¯
            int b = expressao[i+1] - '0';
            resultado = a - b;
            sprintf(buf, "%i", resultado);
            expressao[i-1] = buf;
            expressao[i] = '+';
            expressao[i+1] = '0';
        }else{
            //nesse ponto o vetor deve ser uma soma dos resultados das operaçoes '*' '/' e '-' e '0'
            printf("sla\n");
        }
    }
    //int a = expressao[pos] - '0';
    printf("%s\n", expressao);
    printf("%d", resultado);

}
