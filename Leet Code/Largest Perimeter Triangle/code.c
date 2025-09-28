void ord(int min, int max, int *nums){
    int pivo = nums[(max+min)/2];
    int i = min, j = max;
    while(i<j){
        while(nums[i] > pivo){
            i++;
        }
        while(nums[j] < pivo){
            j--;
        }
        if(i<=j){
            int aux = nums[i];
            nums[i] = nums[j];
            nums[j] = aux;
            i++; j--;
        }
    }
    if(i<max){
        ord(i, max, nums);
    }
    if(j>min){
        ord(min, j, nums);
    }
}
int largestPerimeter(int* nums, int numsSize) {
    ord(0, numsSize-1, nums);
    for(int i = 0; i<numsSize;i++){
        printf("%d", nums[i]);
    }
    int i = 0;
    while(i<numsSize-2 && nums[i] >= nums[i+1] + nums[i+2]){
        i++;
    }
    if(i == numsSize-2){
        return 0;
    }else{
        return nums[i] + nums[i+1] + nums[i+2];
    }
    return 1;
}
