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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy;
        ListNode* res = &dummy;  // المؤشر اللي هنستخدمه للبناء

        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                res->next = list1;    // اربط العقدة من list1
                list1 = list1->next;  // انتقل للعقدة التالية في list1
            } else {
                res->next = list2;    // اربط العقدة من list2
                list2 = list2->next;
            }
            res = res->next;          // انتقل للمكان الجديد في القائمة الناتجة
        }

        // لو باقي عناصر
        res->next = (list1 != nullptr) ? list1 : list2;

        return dummy.next;  // أول عقدة حقيقية في الناتج
    }
};
