bool check(const node* head)
{
  if (head == NULL)
    return false;
    
  node *low = head, *fast = head->next->next;
  
  while(fast != NULL && fast->next != NULL)
  {
    low = low->next;
    fast = fast->next->next;
    if (low == fast)
      return true;
  }
  return false;
}
