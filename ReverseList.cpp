Node* revlist(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *previous = head;
    Node *middle = previous->next;
    Node *follower = middle->next;
    while (follower)
    {
        middle->next = previous;        // actually there is no link between previous and middle
        previous = middle;
        middle = follower;
        follower = follower->next;
    }           // when finished this loop, follower points to NULL
    middle->next = previous;
    head = middle;
    return head;
}
