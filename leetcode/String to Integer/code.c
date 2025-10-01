#include<stdio.h>
#include <stdlib.h>
long long int myAtoi(char* s) {
    int i=0, sinal=0;
    while(s[i]==' '){
        i++;
    }
    if(s[i]=='-' || s[i]=='+'){
        if(s[i]=='-'){
            sinal=1;
        }
        i++;
    }
    int qn=0;
    long long int num=0, p=1;
    while(s[i]=='0'){
        i++;
    }
    while(s[i]>='0' && s[i]<='9'){
        qn++;
        i++;
    }
    for(int j=i-1; j>=i-qn; j--){
        num+=p*(s[j]-'0');
        p=p*10;
        if(p>10000000000 || num>2147483647){
            j=0;
        }
    }
    if(p>10000000000 || num>2147483647){
        if(sinal==1){
            return 2147483648*-1;
        }else{
            return 2147483647;
        }
    }else{
        if(sinal==1){
            return num*-1;
        }else{
            return num;
        }
    }
}
