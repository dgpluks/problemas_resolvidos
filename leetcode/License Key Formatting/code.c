#include<stdio.h>
#include <stdlib.h>
char* licenseKeyFormatting(char* s, int k) {
    int car=0, i=0;
    char *res;
    while(s[i]!='\0'){
        if(s[i]!='-'){
            car++;
        }
            i++;
    }
        res=malloc((car+(car/k-1)+(car%k)+1)*sizeof(char));
        i=0;
    
        for(int j=k-car%k;i<(car+(car/k-1)+(car%k))+1;j++,i++){
            while(s[i]=='-' && s[i]!='\0'){
                i++;
            }
            if(j==(car+(car/k-1)+(car%k))){
                res[j-k-car%k]='\0';
            }else if((j+1)%(k+1)==0 && j!=0){
                res[j-k-car%k]='-';
            }else{
                res[j-k-car%k]=s[i];
            }
    }
    return res;
}
