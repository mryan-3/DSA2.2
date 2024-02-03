
def rotate_array(nums, k):
    n = len(nums)
    # Take modulo to handle cases where k is greater than the length of the array
    k = k % n
# Reverse the entire array reverse(nums, 0, n - 1) Reverse the first k elements reverse(nums, 0, k - 1) Reverse the remaining elements
    reverse(nums, k, n - 1)

def reverse(nums, start, end):
    while start < end:
        nums[start], nums[end] = nums[end], nums[start]
        start += 1
        end -= 1

# Example usage:
nums = [1, 2, 3, 4, 5, 6, 7]
k = 3
rotate_array(nums, k)
print(nums)
