int minDeletionSize(char** strs, int strsSize) {
    int cont = 0;
    int size = 0;
    while(strs[0][size] != '\0'){
        size++;
    }
    for(int i = 0; i < size; i++){
        int j = 0;
        while(j < strsSize - 1 && strs[j][i] <= strs[j+1][i]){
            j++;
        }
        if(j != strsSize-1){
            cont++;
        }
    }
    
    return cont;
}
