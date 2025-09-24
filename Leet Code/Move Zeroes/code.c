void moveZeroes(int* nums, int numsSize) {
    int aux=0;
    for(int i=0, j=0; i<numsSize;i++){
        if(nums[i]!=0){
            nums[j]=nums[i];
            if(j!=i){
                nums[i]=0;
            }
            j++;
        }
    }
    return;
}
