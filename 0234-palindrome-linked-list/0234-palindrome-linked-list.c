/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if (head == NULL || head->next == NULL) // Empty list or single node is considered a palindrome
        return true;
    
    // Find the middle of the list using the slow and fast pointer technique
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // Reverse the second half of the list
    struct ListNode *prev = NULL;
    struct ListNode *curr = slow->next;
    struct ListNode *next;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    slow->next = prev;
    
    // Compare the first half with the reversed second half
    struct ListNode *p1 = head;
    struct ListNode *p2 = slow->next;
    while (p2 != NULL) {
        if (p1->val != p2->val)
            return false;
        p1 = p1->next;
        p2 = p2->next;
    }
    
    // Restore the original list by reversing the reversed second half back
    prev = NULL;
    curr = slow->next;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    slow->next = prev;
    
    return true;
}
