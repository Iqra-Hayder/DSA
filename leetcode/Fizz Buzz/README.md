# Fizz Buzz (LeetCode #412)

**Problem Statement:**  
Given an integer `n`, return a string array `answer` (1-indexed) where:  

- `answer[i] == "FizzBuzz"` if `i` is divisible by 3 and 5.  
- `answer[i] == "Fizz"` if `i` is divisible by 3.  
- `answer[i] == "Buzz"` if `i` is divisible by 5.  
- `answer[i] == i` (as a string) if none of the above conditions are true.  

**LeetCode Link:** [Fizz Buzz](https://leetcode.com/problems/fizz-buzz/)

---

## Approach / Logic

We solve this by iterating from **1 to n** and applying divisibility rules:

1. If the number is divisible by **3 and 5**, add `"FizzBuzz"`.  
2. Else if divisible by **5**, add `"Buzz"`.  
3. Else if divisible by **3**, add `"Fizz"`.  
4. Otherwise, convert the number to a string and add it to the result.  

**Time Complexity:** O(n) — loop runs once per number.  
**Space Complexity:** O(n) — result vector stores `n` strings.  

---

## Code

The solution code is available in the file: [`fizzBuzz.cpp`](./fizzBuzz.cpp)

```cpp
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> fizzbuzz(n);
        for(int i = 1; i <= n; i++){
            if(i % 3 == 0 && i % 5 == 0){
                fizzbuzz[i-1] = "FizzBuzz";
            } else if(i % 5 == 0){
                fizzbuzz[i-1] = "Buzz";
            } else if(i % 3 == 0){
                fizzbuzz[i-1] = "Fizz";
            } else {
                fizzbuzz[i-1] = to_string(i);
            }
        }
        return fizzbuzz;
    }
};
