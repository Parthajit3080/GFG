struct Node* reverseList(struct Node* head) {
    // code here
    struct Node* prev=NULL, *curr=head, *currnext;
    while(curr!=NULL){
        currnext=curr->next;
        curr->next=prev;
        prev=curr;
        curr=currnext;
    }
    return prev;
}