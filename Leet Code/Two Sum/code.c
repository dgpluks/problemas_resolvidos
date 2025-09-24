int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int *resultado = malloc(2*sizeof(int));
    int i = 0, j = 1, k = 0;
    while(nums[i]+nums[j]!=target && k == 0){
        if(j==numsSize-1){
            i++;
            j=i+1;
        }else{
            j++;
        }
        if(nums[i]+nums[j]==target){
            k = 1;
        }
    }
    resultado[0] = i;
    resultado[1] = j;
    return resultado;
}
