#include <stdlib.h>
#include<stdio.h>
int toStr(int i , char **linha){
	if(i < 10){
		(*linha)[1] = i;
		return 2;
	}else{
		int x = toStr(i/10, linha);
		(*linha)[x] = i % 10;
		return x + 1;
	}
}
int main(){
	int qn = 0;
	scanf("%d", &qn);
	for(int i = 0; i < qn; i++){
		char *linha = malloc(101*sizeof(char));
		scanf("%s", linha);
		int j = 0;
		while(linha[j] != '\0'){
			j++;
		}
		if(j > 10){   //quando for palavrão
			printf("%c%d%c\n", linha[0], j-2, linha[j-1]);
		}else{
			printf("%s\n", linha);
		}
	}
}
