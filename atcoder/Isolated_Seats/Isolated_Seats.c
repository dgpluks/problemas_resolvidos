#include<stdio.h>
int main (){
  int n = 0, cont = 0, resp = 0;
  scanf("%d\n", &n);
  char x = 'o';
  scanf("%c", &x);
  	if(x == 'x'){
  		cont = 2;
  	}
  	for(int i = 1; i < n; i++){
    		scanf("%c", &x);
    		if(x == 'o'){
        		cont = 0;
    		}else{
      			if(cont == 0 || cont == 1){
        			cont++;
 			}else{
				cont = 2;
				resp++;
			}
    		}   
  	}
  	if(cont == 2){
    		resp++;
  	}
  	printf("%d\n",resp);
	}
