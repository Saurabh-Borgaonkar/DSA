#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};

int main() {

    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    ListNode* head = NULL;
    ListNode* temp = NULL;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        ListNode* newNode = new ListNode{x, NULL};

        if(head == NULL) {
            head = newNode;
            temp = head;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // print linked list
    temp = head;
    cout << "Linked List: ";

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    return 0;
}