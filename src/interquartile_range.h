#include <iostream>
#include <iomanip>
using namespace std;

class Node {
    public:
        int value;
        Node* next = nullptr;
};

Node* insertEnd(Node* head, int key)
{
    Node* temp = new Node();
    temp->value = key;
    if(head == nullptr)
        head = temp;
    else
    {
        Node* curr = head;
        while(curr->next != nullptr)
            curr = curr->next;
        curr->next = temp;
    }
    return head;
}

float interQuartile(Node* head)
{

  Node* ptr1 = head;            
  Node* ptr3 = head;            
  Node* ptr4 = head;            

  int ptr1_prev = ptr1->value;  
  int ptr3_prev = ptr3->value;  
  int count = 0;                

  while (ptr4 != nullptr) {
    ptr4 = ptr4->next;
    ++count;

    if ((count % 4) == 0) {
      // 1/4 speed → lands at floor(n/4)
      ptr1_prev = ptr1->value;
      ptr1 = ptr1->next;
    } else {
      // 3/4 speed → lands at ceil(3n/4)
      ptr3_prev = ptr3->value;
      ptr3 = ptr3->next;
    }
  }

  int mod = count & 3; // n % 4
  double q1, q3;
  if (mod == 0 || mod == 1) {
    q1 = (static_cast<double>(ptr1_prev) + static_cast<double>(ptr1->value)) / 2.0;
  } else {
    q1 = static_cast<double>(ptr1->value);
  }
  if (mod == 0 || mod == 1) {
    q3 = (static_cast<double>(ptr3_prev) + static_cast<double>(ptr3->value)) / 2.0;
  } else {
    q3 = static_cast<double>(ptr3_prev);
  }

  return static_cast<float>(q3 - q1);
}
