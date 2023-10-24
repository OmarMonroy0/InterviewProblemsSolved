class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *start,*moving;

        if(!list1 && !list2) return list1;
        if (!list1 || !list2){
            return list1 ? list1 : list2;
        }
        
        if (list1->val <= list2->val){
                moving = start = list1;
                list1 = list1->next;
        }else{
                moving = start = list2;
                list2 = list2->next;
        }
        while (list1 && list2){
            if (list1->val <= list2->val){
                moving->next = list1;
                moving = list1;
                list1 = list1->next;
            }
            else {
                moving->next = list2;
                moving = list2;
                list2 = list2->next;
            }
        }
        if (list1) moving->next = list1;
        else if (list2) moving->next = list2;
        return start;
    }
};