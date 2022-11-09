//删除p的后继结点q
p->next=q->next;
q->next->prior=p;
free(q);