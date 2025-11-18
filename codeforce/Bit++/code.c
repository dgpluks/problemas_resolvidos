#include <stdlib.h>
#include<stdio.h>
int main(){
	int qn = 0, resp = 0;
	scanf("%d", &qn);
	for(int i = 0; i < qn; i++){
		char *linha = malloc(4 * sizeof(char));
		scanf("%s",linha);
		if(linha[1] == '+'){
			resp++;
		}else{
			resp--;
		}
	}
	printf("%d", resp);
}
