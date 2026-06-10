#include<stdio.h>
int main(){
	int A = 0;
	scanf("%d", &A);
	if(400%A == 0)
		printf("%d", 400/A);
	else
		printf("-1");
}
