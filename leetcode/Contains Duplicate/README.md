# Contains Duplicate (LeetCode #217)

**Problem Statement:**  
Given an integer array `nums`, return `true` if any value appears **at least twice** in the array, and return `false` if every element is distinct.  

**LeetCode Link:** [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)

---

## Approach / Logic

We can solve this problem by using **insertion sort with duplicate detection**:

1. Iterate through the array, treating it like an insertion sort process.  
2. For each element (`key`), shift larger elements to the right.  
3. During the shifting process, if we encounter an element equal to `key`, return `true` immediately since a duplicate is found.  
4. If no duplicates are found throughout the process, return `false`.  

**Time Complexity:** O(n²) in the worst case (due to insertion sort).  
**Space Complexity:** O(1) — in-place, no extra data structures used.  

---

## Code

The solution code is available in the file: [`containsDuplicate.java`](./containsDuplicate.java)

```java
class Solution {
    public boolean containsDuplicate(int[] nums) {
        for (int i = 1; i < nums.length; i++) {
            int key = nums[i];
            int j = i - 1;
            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }
            if (j >= 0 && nums[j] == key)
                return true;
            nums[j + 1] = key;
        }
        return false;
    }
}
