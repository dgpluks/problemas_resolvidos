void quick(int ** vet, int esq, int dir){
    int pivo = (*vet)[(esq+dir)/2];
    int i = esq, j = dir;
    while(i <= j){
        while((*vet)[i] < pivo){
            i++;
        }
        while((*vet)[j] > pivo){
            j--;
        }
        if(i <= j){
            int aux = (*vet)[i];
            (*vet)[i] =  (*vet)[j];
            (*vet)[j] = aux;
            i++;
            j--;
        }
    }
    if(i < dir)
        quick(vet , i, dir);
    if(j > esq)
        quick(vet, esq, j );
}
int buscar(int *nums, int orig, int i , int j){
    while(i <= j){
        int meio = (i+j)/2;
        if(nums[meio] > orig){
            j = meio-1;
        }else if(nums[meio] < orig){
            i = meio+1;
        }else{
            return 1;
        }
    }
    return 0;
}
int findFinalValue(int* nums, int numsSize, int original) {
    quick(&nums, 0, numsSize-1);
    long long int or = original;
    int i = 0;
    while(buscar(nums, or, 0 , numsSize-1)){
        printf("%lld -", or);
        or *=2;
        i++;
    }
    return or;
}
