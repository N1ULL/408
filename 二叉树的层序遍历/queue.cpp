#include "function.h"
void InitQueue(LinkQueue &Q)
{
	Q.front = Q.rear = (LinkNode*)malloc(sizeof(LinkNode));//ͷ��βָ��ͬһ�����
	Q.front->next = NULL;//ͷ���� next ָ��Ϊ NULL
}
bool IsEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}
//��ӣ�β�����뷨
void EnQueue(LinkQueue& Q, ElemType x)
{
	LinkNode* s = (LinkNode*)malloc(sizeof(LinkNode));
	s->data = x; s->next = NULL;
	Q.rear->next = s;//rear ʼ��ָ��β��
	Q.rear = s;
}
//���� ͷ��ɾ����
bool DeQueue(LinkQueue& Q, ElemType& x)
{
	if (Q.front == Q.rear) return false;//����Ϊ��
	LinkNode* p = Q.front->next;//ͷ���ʲô��û�棬����ͷ������һ���ڵ��������
	x = p->data;
	Q.front->next = p->next;//����
	if (Q.rear == p)//ɾ���������һ��Ԫ��
		Q.rear = Q.front;//������Ϊ��
	free(p);
	return true;
}