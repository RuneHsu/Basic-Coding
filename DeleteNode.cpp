NODE *Delete(NODE *Head, int key)
{
    if (head->value == key)
    {
        head = head->next;
        return head;
    }
    
    NODE *p = head;
    NODE *q = NULL;
    
    while(p->next)
    {   
        if (p->next->value == key)
        {
            p->next = p->next->next;
            break;
        }
        p = p->next;
    }
    return head;
}
