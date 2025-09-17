# Search Insert Position (LeetCode #35)

**Problem Statement:**  
Given a **sorted array of distinct integers** and a **target value**, return the **index** if the target is found.  
If not, return the **index where it would be inserted** in order.  

- You must write an algorithm with **O(log n)** runtime complexity.

**LeetCode Link:** [Search Insert Position](https://leetcode.com/problems/search-insert-position/)

---

## Approach / Logic

We can solve this efficiently using **Binary Search**:  

1. Initialize `left = 0` and `right = nums.size() - 1`.  
2. While `left <= right`:  
   - Compute `mid = left + (right - left) / 2`.  
   - If `nums[mid] == target`, return `mid`.  
   - If `nums[mid] < target`, search in the right half (`left = mid + 1`).  
   - If `nums[mid] > target`, search in the left half (`right = mid - 1`).  
3. If the target is not found, `left` will be the **insert position**.  

**Time Complexity:** O(log n)  
**Space Complexity:** O(1)

---

## Code

The solution code is available in the file: [`search_insert.cpp`](./insertsearch.cpp)

```cpp
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target){
                return mid;
            } else if(nums[mid] < target){
                left = mid + 1;
            } else{
                right = mid - 1;
            }
        }
        return left;
    } 
};
