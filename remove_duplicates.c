#include <stdio.h>

int removeDuplicates(int* nums, int numsSize){
    int  i = 1;
    int k = 1;
    int curr = 0;
    int prev = nums[0];
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

int main(){
    int a1[9] = {1, 2, 2, 2, 2, 3, 4, 5, 6};
    printf("%d", removeDuplicates(a1, 9));
    return 0;
}