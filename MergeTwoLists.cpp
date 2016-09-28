// Basic Idea
Node* mergeLists(Node *l1, Node *l2)
{
    Node *head = NULL;
    Node *tmp = head;
    
    if (l1 == NULL)
        return l2;
    else if (l2 == NULL)
        return l1;
    
    // Get head node
    if (l1->val < l2->val)
    {
        head = l1;
        l1 = l1->next;
    }
    else
    {
        head = l2;
        l2 = l2->next;
    }
    
    while (l1 & l2)
    {
        if (l1->val < l2->val)
        {
            tmp->next = l1;
            tmp = tmp->next;
            l1 = l1->next;
        }
        else
        {
            tmp->next = l2;
            tmp = tmp->next;
            l2 = l2->next;
        }
    }
    if (NULL == l1)
        tmp->next = l2;
    else if (NULL == l2)
        tmp->next = l1;
    
    return head;
}











// Advanced solution

Node* mergeLists(Node *l1, Node *l2)
{
    Node *head = NULL;          // in order to check head == NULL
    Node **prev = &head;
    
    while (l1 & l2)
    {
        if (l1->val < l2->val)
        {
            *prev = l1;
            l1 = l1->next;
        }
        else
        {
            *prev = l2;
            l2 = l2->next;
        }
        prev = &(*prev)->next;
    }
    
    *prev = &(*prev)->next;
    return head;
}


// recursive way
Node MergeLists(Node *l1, Node *l2)
{
    if (l1 == NULL)
        return l2;
    else if (l2 == NULL)
        return l1;
    
    Node *head = NULL;
    if (l1->val < l2->val)
    {
        head = l1;
        head->next = MergeLists(l1->next, l2);
    }
    else
    {
        head = l2;
        head->next = MergeLists(l1, l2->next);
    }
    return head;
}
