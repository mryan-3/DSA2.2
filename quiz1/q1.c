#include <stdio.h>


int removeDuplicates (int arr[], int arrSize){
    int index = 1;
    int i;

    for (i = 0;i < arrSize - 1;i++){
        if(arr[i] != arr[i+1]){
            arr[index] = arr[i+1];
            index++;
        }
    }
    return index;

}
int main(){
    int nums [] = {1,1, 13, 34,5, 56, 56,  3, 2, 23 , 4, 324};
    int length = sizeof(nums) / sizeof(nums[0]);

    int newLength = removeDuplicates(nums, length);

    printf("%d", newLength);

    return 0;
}
