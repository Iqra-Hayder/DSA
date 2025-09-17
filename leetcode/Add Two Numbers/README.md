# Add Two Numbers (LeetCode #2)

**Problem Statement:**  
You are given **two non-empty linked lists** representing two non-negative integers.  
The digits are stored in **reverse order**, and each of their nodes contains a **single digit**.  
Add the two numbers and return the sum as a linked list.  

- You may assume the two numbers do not contain any leading zero, except the number 0 itself.

**LeetCode Link:** [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)

---

## Approach / Logic

We can solve this using **iteration with carry**:

1. Initialize a dummy node and a `head` pointer.  
2. Traverse both linked lists simultaneously:  
   - Sum the corresponding nodes’ values along with a `carry`.  
   - Create a new node with `sum % 10`.  
   - Update `carry = sum / 10`.  
3. If a carry remains after the traversal, create a new node with the carry value.  
4. Return the list starting from `dummy.next`.

**Time Complexity:** O(max(m, n))  
**Space Complexity:** O(max(m, n))  

---

## Code

The solution code is available in the file: [`addTwoNumbers.cpp`](./addTwoNumbers.cpp)

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = new ListNode();
        ListNode* head = l3;
        int carry = 0;

        while(l1 != nullptr || l2 != nullptr){
            int x = 0;
            int y = 0;

            if (l1 != nullptr)
                x = l1->val;
            
            if (l2 != nullptr)
                y = l2->val;

            int sum = x + y + carry;

            if(sum <= 9){
                carry = 0;
            } else {
                carry = 1;
                sum = sum % 10;
            }

            head->next = new ListNode(sum);
            head = head->next;

            if(l1 != nullptr)
                l1 = l1->next;

            if(l2 != nullptr)
                l2 = l2->next;
        }

        if (carry == 1){
            head->next = new ListNode(1);
        }

        return l3->next; 
    }
};
