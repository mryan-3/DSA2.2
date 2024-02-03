#include <stdio.h>
#include <stdbool.h>

bool checkDuplicates(int arr[], int n){
        for (int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
               if(arr[i] == arr[j]){
                   return true;
               }
            }
        }
        return false;
}

int main(){
    int nums [] = {1, 2, 3 ,4, 5, 2, 2 , 5, 6, 7};
    int size = sizeof(nums) / sizeof(nums[0]);

    bool containsDuplicate =  checkDuplicates(nums, size);
    if (containsDuplicate == true){
        printf("Contains Duplicates");
    } else {
    printf("No duplicates");
    }
}
