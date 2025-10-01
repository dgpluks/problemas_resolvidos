#include<stdio.h>
#include <stdlib.h>
char* intToRoman(int num) {
    int alg[5], i=0, a=0;
    while(num/10!=0 && num!=0){
        alg[i]= num%10;
        num=num/10;
        i++; 
    }
    alg[i]= num%10;
    i++; 
    char *resp;
    resp=malloc(17*sizeof(char));
    for(int j=i; j>0;j--){
        int c;
        c=alg[j-1];
        if(j==4){
            for(int k=0; k<c;k++){
                resp[a] = 'M';
                a++;
            }
        } else if(j==3){
            if(c==4){
                resp[a] = 'C';
                a++;
                resp[a] = 'D';
                a++;
            }else if(c<4){
                for(int k=0; k<c;k++){
                resp[a] = 'C';
                a++;
                }
            }else if(c==9){
                resp[a] = 'C';
                a++;
                resp[a] = 'M';
                a++;
            }else if(c<9){
                resp[a] = 'D';
                a++;
                for(int k=0; k<c-5;k++){
                resp[a] = 'C';
                a++;
                }
            }
        }else if(j==2){
            if(c==4){
                resp[a] = 'X';
                a++;
                resp[a] = 'L';
                a++;
            }else if(c<4){
                for(int k=0; k<c;k++){
                resp[a] = 'X';
                a++;
                }
            }else if(c==9){
                resp[a] = 'X';
                a++;
                resp[a] = 'C';
                a++;
            }else if(c<9){
                resp[a] = 'L';
                a++;
                for(int k=0; k<c-5;k++){
                resp[a] = 'X';
                a++;
                }
            }
            
        }else if(j==1){
            if(c==4){
                resp[a] = 'I';
                a++;
                resp[a] = 'V';
                a++;
            }else if(c<4){
                for(int k=0; k<c;k++){
                resp[a] = 'I';
                a++;
                }
            }else if(c==9){
                resp[a] = 'I';
                a++;
                resp[a] = 'X';
                a++;
            }else if(c<9){
                resp[a] = 'V';
                a++;
                for(int k=0; k<c-5;k++){
                resp[a] = 'I';
                a++;
                }
            }
        }
        
    }resp[a]='\0';
    
    return resp;
}
