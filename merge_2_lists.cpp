#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            if (!list1){
                return list2;
            } else if (!list2){
                return list1;
            }
            
            ListNode* head;
            if (list1->val < list2->val){
                head = list1;
                list1 = list1->next;
            } else { 
                head = list2;
                list2 = list2->next;
            }
            
            ListNode* tmp = head;
            while (list1 && list2){
                
                if (list1->val <= list2->val){
                    tmp->next = list1;
                    list1 = list1->next;
                    tmp = tmp->next;
                } else { 
                    tmp->next = list2;
                    list2 = list2->next;
                    tmp = tmp->next;
                }

            }

            if (list1) {
                tmp->next = list1;

            } else if (list2) {
                tmp->next = list2;
            }

            return head;
        }

        /* @brief creates linked list from array
        
        */
        ListNode* createLinkedList(int arr[], int n){

            ListNode* ll = new ListNode(arr[0]);
            ListNode* current = ll;

            for (int i = 1; i < n; ++i){
                current->next = new ListNode(arr[i]);
                current = current->next;
                cout << arr[i];
            }
            cout << endl;
            
            return ll;
        }

        void printLinkedList(ListNode* list){
            while (list){
                cout << list->val << " ";
                list=list->next;
            }
            cout << endl;
        }
};
    
int main() {
    Solution solution;
    // list1 = [1,2,4]; 
    int arrA[] = {1,2,4};
    int arrB[] = {1,3,4};
    ListNode* a = solution.createLinkedList(arrA, sizeof(arrA) / sizeof(arrA[0]));
    ListNode* b = solution.createLinkedList(arrB, sizeof(arrB) / sizeof(arrB[0]));
    solution.printLinkedList(a);
    solution.printLinkedList(b);
    solution.printLinkedList(solution.mergeTwoLists(a,b));
    return 0;
}
