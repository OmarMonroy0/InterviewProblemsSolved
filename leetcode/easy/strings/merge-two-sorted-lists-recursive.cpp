class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1 && !list2) return nullptr;
        if (!list1 || !list2) return list1 ? list1 : list2;
        if (list1->val <= list2->val) {
            list1->next= mergeTwoLists(list1->next,list2);
            return list1;  // a pointer to list1
        }
        else {
            list2->next= mergeTwoLists(list1, list2->next);
            return list2; // return  a pointer to list2 
        }
    }
};