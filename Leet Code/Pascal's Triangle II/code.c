int* getRow(int rowIndex, int* returnSize) {
    int *seq, *anterior;
    (*returnSize)=rowIndex+1;
    for(int i=0;i<=rowIndex;i++){
        seq=malloc((i+1)*sizeof(int));
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                seq[j]=1;
            }else{
                seq[j]=anterior[j-1]+anterior[j];
            }
        }
        if(i>1){
            free(anterior);
        }
        anterior=malloc((i+1)*sizeof(int));
        for(int j=0; j<i+1;j++){
            anterior[j]=seq[j];
        }
        if(i!=rowIndex){
            free(seq);
        }else{
            free(anterior);
        }
        
    }
    return seq;
}
