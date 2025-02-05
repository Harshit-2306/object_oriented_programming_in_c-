// WAP to print add two numbers
// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.
#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
 int val;
 ListNode *next;
 ListNode(int x) : val(x), next(nullptr) {}
};

// Function to add two numbers represented by linked lists
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
 ListNode *dummy = new ListNode(0);
 ListNode *current = dummy;
 int carry = 0;

 while (l1 != nullptr || l2 != nullptr || carry)
 {
  int sum = carry;
  if (l1)
  {
   sum += l1->val;
   l1 = l1->next;
  }
  if (l2)
  {
   sum += l2->val;
   l2 = l2->next;
  }

  carry = sum / 10;
  current->next = new ListNode(sum % 10);
  current = current->next;
 }

 return dummy->next;
}

// Helper function to print a linked list
void printList(ListNode *node)
{
 while (node)
 {
  cout << node->val;
  if (node->next)
   cout << " -> ";
  node = node->next;
 }
 cout << endl;
}

// Helper function to create a linked list from an array
ListNode *createList(int arr[], int size)
{
 ListNode *head = new ListNode(arr[0]);
 ListNode *current = head;
 for (int i = 1; i < size; i++)
 {
  current->next = new ListNode(arr[i]);
  current = current->next;
 }
 return head;
}

int main()
{
 int arr1[] = {2, 4, 3};
 int arr2[] = {5, 6, 4};

 ListNode *l1 = createList(arr1, 3);
 ListNode *l2 = createList(arr2, 3);

 cout << "List 1: ";
 printList(l1);
 cout << "List 2: ";
 printList(l2);

 ListNode *result = addTwoNumbers(l1, l2);
 cout << "Sum: ";
 printList(result);

 return 0;
}
