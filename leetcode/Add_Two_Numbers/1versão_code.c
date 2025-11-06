struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *no = l1;
    int add = 0; 
    struct ListNode *ant = NULL;
    while( l2 != NULL && l1 != NULL){
        l1->val = l1->val + l2 -> val + add;
        if(l1->val > 9){
            add = 1;
            l1->val = l1->val % 10;
        }else{
            add = 0;
        }
        ant = l1;
        l1 = l1->next;
        l2 = l2->next;
    }
    if(l2 != NULL){
        ant->next = l2;
    }
    l1 = ant->next;
    while(l1 != NULL && add == 1){
        l1->val += add;
        if(l1->val > 9){
            l1->val = l1->val % 10;
            ant = l1;
            l1 = l1->next;
        }else{
            add = 0;
        }
    }
    if(add == 1){
        ant->next = malloc(sizeof(struct ListNode));
        ant->next->next =NULL;
        ant->next->val=1;
    }
    return no;
}
