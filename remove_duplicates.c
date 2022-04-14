int removeDuplicates(int* nums, int numsSize){
    int  i, k, prev, curr = 1;
    prev = nums[0];
    while (i < numsSize){
        curr = nums[i];
        if (prev != curr){ // curr is unique
            nums[k] = curr; // place unique items in first k slots
            k++;  // increase the number of unique elements
        }
        i++;
        prev = curr;
    }
    return k;
}