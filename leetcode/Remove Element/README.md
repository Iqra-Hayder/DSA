# Remove Element (LeetCode #27)

**Problem Statement:**  
Given an integer array `nums` and an integer `val`, remove all occurrences of `val` in `nums` **in-place**.  
The relative order of the elements may be changed.  

Since it is impossible to change the length of the array in some languages, you must instead place the result in the first part of the array.  
More formally, if there are `k` elements after removing the duplicates, then the first `k` elements of `nums` should hold the final result.  
It does not matter what you leave beyond the first `k` elements.  

Return `k` after placing the final result in the first `k` slots of `nums`.  

**LeetCode Link:** [Remove Element](https://leetcode.com/problems/remove-element/)

---

## Approach / Logic

We can solve this problem using the **two-pointer technique**:

1. Use a pointer `k` to keep track of the index where the next valid element should be placed.  
2. Traverse the array:  
   - If the current element is **not equal** to `val`, copy it to `nums[k]` and increment `k`.  
   - If it equals `val`, skip it.  
3. After the traversal, `k` will represent the number of valid elements.  

**Time Complexity:** O(n) — single pass through the array.  
**Space Complexity:** O(1) — no extra space used.  

---

## Code

The solution code is available in the file: [`removeElement.java`](./removeElement.java)

```java
class Solution {
    public int removeElement(int[] nums, int val) {
         int k = 0;
         for(int i = 0 ; i < nums.length ; i++){
            if (nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
         }
         return k;
    }
}
