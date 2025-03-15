#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  

class Solution {
public:
ListNode* createLinkedList(int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < n; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }

    return head;
}


ListNode* reverseList(ListNode* head) {
        // TODO: Implement your solution
        ListNode* prev = nullptr; 
        ListNode* current = head;


        while (current != nullptr ) {
            // reverse current pointer
            current->next = prev;
            // set previous to current
            prev = current;
            //set current to next
            current = current->next;
            
        }
        head = current;

        
        return prev;
    }

    void printLinkedList(ListNode* head){
        ListNode* temp = head;
        while (temp !=nullptr){
            cout << temp->val << " ";

            temp = temp->next;
        }
        cout << endl;
    }
};


int main() {
    Solution solution;

    int values[] = {0, 1, 2};  // Example input
    int n = sizeof(values) / sizeof(values[0]);


    ListNode* head = solution.createLinkedList(values, n);
    
    // cout << "Head is " << head->val << endl;;
    // cout << "Head is " << head->next;

    solution.printLinkedList(head);
    
    ListNode* rev = solution.reverseList(head);
    
    solution.printLinkedList(rev);

    //cout << solution.functionName(var) << endl;
    return 0;
}