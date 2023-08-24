
#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode dummy(0); // Dummy node acting as the head of the result list
    ListNode* current = &dummy; // Pointer to the dummy node
    int carry = 0;

    while (l1 || l2 || carry) {
        int sum = carry;
        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        sum %= 10;

        current->next = new ListNode(sum);
        current = current->next;
    }

    return dummy.next; // Return the head of the result list
}

// Helper function to create a linked list from an array
ListNode* createLinkedList(const std::vector<int>& values) {
    ListNode dummy(0);
    ListNode* current = &dummy;
    for (int val : values) {
        current->next = new ListNode(val);
        current = current->next;
    }
    return dummy.next;
}

// Helper function to print a linked list
void printLinkedList(ListNode* head) {
    while (head) {
        std::cout << head->val;
        if (head->next) {
            std::cout << " -> ";
        }
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> l1_values = {9,9,9,9,9,9,9};
    std::vector<int> l2_values = {9,9,9,9};

    ListNode* l1 = createLinkedList(l1_values);
    ListNode* l2 = createLinkedList(l2_values);

    ListNode* result = addTwoNumbers(l1, l2);

    std::cout << "Input l1: ";
    printLinkedList(l1);
    std::cout << "Input l2: ";
    printLinkedList(l2);
    std::cout << "Output: ";
    printLinkedList(result);

    return 0;
}