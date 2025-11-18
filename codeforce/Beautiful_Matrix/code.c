#include<stdio.h>
int main(){
	int mat[5][5];
	int x, y;
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			scanf("%d", &mat[i][j]);
			if(mat[i][j] == 1){
				x = i;
				y = j;
			}
		}
	}
	x = 2 - x;
	if(x < 0){
		x *= -1;
	}
	y = 2 - y;
        if(y < 0){
                y *= -1;
        }
	printf("%d",  x + y);

}
