void recursiveReverse( Node** head)
{
    Node* first;
    Node* rest;
 
    if (*head == NULL)
        return;
 
    first = *headRef;       // suppose first = {1, 2, 3}
    rest = first->next;  // rest = {2, 3}
 
    if (rest == NULL)
        return;
 
    recursiveReverse(&rest);
    first->next->next = first;
 
    first->next = NULL;
 
    *head = rest;
}
- See more at: http://www.ritambhara.in/recursive-function-to-reverse-a-linked-list/#sthash.NTfMzPKg.dpuf
