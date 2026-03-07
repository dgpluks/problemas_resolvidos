bool kLengthApart(int* nums, int numsSize, int k) {
    int i = 0;
    while(i < numsSize && nums[i] != 1){
        i++;
    }
    i++;
    int rep = 0;
    bool resp = true;
    while(i < numsSize && resp){
        rep = 0;
        while(resp && i < numsSize && nums[i] != 1){
            i++;
            rep++;
        }
        if(rep < k && i < numsSize && nums[i] == 1){
            resp = false;
        }
        i++;
    }
    return resp;
}
