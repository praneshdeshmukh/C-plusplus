// Input: head = [1,2,3,3,4,4,5]
// Output: [1,2,5]

// Example 2:
// Input: head = [1,1,1,2,3]
// Output: [2,3]


class Solution {
 public:
  ListNode* deleteDuplicates(ListNode* head) {
    ListNode dummy(0, head);
    ListNode* prev = &dummy;

    while (head) {
      while (head->next && head->val == head->next->val)
        head = head->next;
      if (prev->next == head)
        prev = prev->next;
      else
        prev->next = head->next;
      head = head->next;
    }

    return dummy.next;
  }
};
