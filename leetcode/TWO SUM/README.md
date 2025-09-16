# Two Sum (LeetCode #1)

**Problem Statement:**  
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.  

- Each input has exactly **one solution**.  
- You may **not use the same element twice**.  
- You can return the answer in **any order**.  

**LeetCode Link:** [Two Sum](https://leetcode.com/problems/two-sum/description/)

---

## Approach / Logic

A simple brute-force approach:  

1. Iterate through each element `nums[i]`.  
2. For each `i`, iterate through the rest of the elements `nums[j]` (`j > i`).  
3. Check if `nums[i] + nums[j] == target`.  
4. If yes, return the indices `[i, j]`.  

**Time Complexity:** O(n²)  
**Space Complexity:** O(1)

---

