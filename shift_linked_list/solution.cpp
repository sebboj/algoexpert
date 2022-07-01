//by sebbo

using namespace std;

class LinkedList {
public:
  int value;
  LinkedList *next;

  LinkedList(int value) {
    this->value = value;
    next = nullptr;
  }
};

LinkedList *shiftLinkedList(LinkedList *head, int k) {
  if(k == 0)
    return head;
  
  LinkedList * temp = head;
  int len = 1;
  int c = 0;
  
  while(temp->next != nullptr){
    len++;
    temp = temp->next;
  }
  
  if(len == 1){
    return head;
  }
  
  //close the loop
  temp->next = head;
  
  k %= len;
  if(k < 0){
    k += len;
  }
  k = len - k;
  //k is the position of new head
  
  //temp stops right before newhead
  temp = head;
  while(c < k - 1){
    temp = temp->next;
    c++;
  }

  LinkedList * newhead = temp->next;
  temp->next = nullptr;

  return newhead;
  
}
