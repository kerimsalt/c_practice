#include <stdio.h>

int removeElement(int* nums, int numsSize, int val){
    int i = 0;
    int k = 0;
    while (i < numsSize){
        if (nums[i] != val){
            nums[k] = nums[i];
            k++;
        }
        i++;
    }
    return k;
}

int main(){
    int a1[9] = {1, 2, 2, 2, 2, 3, 4, 5, 6};
    int x = removeElement(a1, 9, 2);
    printf("%d", x);
    return 0;
}