int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes) {
    if(matSize*(*matColSize)==r*c){
        
        int **matriz=malloc(r*sizeof(int*));
        *returnSize=r;
        *returnColumnSizes=malloc(r*sizeof(int));
        for(int i=0, n=0;i<matSize;i++){
            matriz[n]=malloc(c*sizeof(int));
            (*returnColumnSizes)[n]=c;
            for(int j=0, m=0; j<(*matColSize);j++, m++){
                matriz[n][m]=mat[i][j];
                if(i*(*matColSize)+j+1==c){
                    m=0;
                    n++;
                }printf("%d x %d + %d + 1   ->%d\n", i,(*matColSize), j,i*(*matColSize)+j+1);
                
            }
    
        }
        
        return matriz;
    }
    return mat;
}
