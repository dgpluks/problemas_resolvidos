int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    int **casa;
    *returnColumnSizes=malloc(numRows*sizeof(int));
    *returnSize = numRows;
    casa=malloc(numRows*sizeof(int*));
    for(int i=0; i<numRows; i++){ 
        (*returnColumnSizes)[i]=i+1;
        casa[i]=malloc((i+1)*sizeof(int));
        for(int j=0;j<=i;j++){
            if(j==0){
                casa[i][j]=1;
            }else if(j==i){
                casa[i][j]=1;
            }else{
                casa[i][j]=casa[i-1][j]+casa[i-1][j-1];
            }
        }
    }
    return casa;
}
