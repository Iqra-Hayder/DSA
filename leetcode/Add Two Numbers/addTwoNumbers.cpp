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

            if(sum<= 9){
                carry = 0;
            }else{
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
            head-> next = new ListNode(1);
        }

        return l3->next;
    }

};
