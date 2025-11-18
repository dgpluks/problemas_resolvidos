#include<stdio.h>
int main(){
	int n = 0, k = 0;
	scanf("%d %d", &n, &k);
	int cont = 0,  vals[n];
	for(int j = 0; j < n; j++){
		scanf("%d", &vals[j]);
	}
	for(int i = 0; i < n; i++){
		if(vals[i] >= vals[k-1] && vals[i] > 0){
			cont++;
		}
	}
	printf("%d", cont);
}
