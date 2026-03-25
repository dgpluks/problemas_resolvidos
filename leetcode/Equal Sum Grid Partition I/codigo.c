bool canPartitionGrid(int** grid, int gridSize, int* gridColSize) {
    long int sumL[*gridColSize], sumC[gridSize];
    for(int i = 0; i < *gridColSize; i++){
        sumL[i] = 0;    
    }
    for(int i = 0; i < gridSize; i++){
        sumC[i] = 0;
    }
    long int tot = 0;
    for(int i = 0; i < gridSize; i++){
        
        for(int j = 0; j < *gridColSize; j++){
            sumL[j] += grid[i][j]; 
            sumC[i] += grid[i][j];
            tot += grid[i][j];
        }
    }
    long int aux = 0, i = 0;
    while(tot-aux > aux){
        aux += sumL[i++]; 
    }    
    if(aux == tot-aux){
        return 1;
    }
    aux = i = 0;
    while(tot-aux > aux){
        aux += sumC[i++]; 
    }    
    if(aux == tot-aux){
        return 1;
    }
    return 0;
}
