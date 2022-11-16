#include "function.h"
void LevelOrder(BiTree T)
{
	LinkQueue Q;//��������
	InitQueue(Q);//��ʼ������
	BiTree p;
	EnQueue(Q, T);//�������
	while (!IsEmpty(Q))
	{
		DeQueue(Q, p);//���ӵ�ǰ��㲢��ӡ
		putchar(p->c);
		if (p->lchild != NULL) //�������
			EnQueue(Q, p->lchild);
		if (p->rchild != NULL)
		{
			EnQueue(Q, p->rchild);
		}
	}
}
int main()
{
	BiTree pnew;//����ָ��������������
	char c;
	BiTree tree = NULL;//����
	//phead ���Ƕ���ͷ��ptail ���Ƕ���β
	ptag_t phead = NULL, ptail = NULL, listpnew = NULL, pcur = NULL;
	//��������Ϊ abcdefghij
	while (scanf("%c", &c))
	{
		if (c == '\n')
		{
			break;
		}
		pnew = (BiTree)calloc(1, sizeof(BiTNode));//calloc ����ռ䲢�Կռ���г�ʼ������ֵΪ 0
		pnew->c = c;//���ݷŽ�ȥ
		listpnew = (ptag_t)calloc(1, sizeof(tag_t));//�����н������ռ�
		listpnew->p = pnew;
		if (NULL == tree)
		{
			tree = pnew;//���ĸ�
			phead = listpnew;//����ͷ
			ptail = listpnew;//����β
			pcur = listpnew;
			continue;
		}
		else {
			ptail->pnext = listpnew;//�½���������ͨ��β�巨
			ptail = listpnew;//ptail ָ�����β��
		}//pcur ʼ��ָ��Ҫ����Ľ���λ��
		if (NULL == pcur->p->lchild)//��ΰ��½�������
		{
			pcur->p->lchild = pnew;//���½��ŵ�Ҫ����������
		}
		else if (NULL == pcur->p->rchild)
		{
			pcur->p->rchild = pnew;//���½��ŵ�Ҫ��������ұ�
			pcur = pcur->pnext;//���Ҷ����˽���pcur ָ����е���һ��
		}
	}
	printf("--------��α���-----------\n");
	LevelOrder(tree);
	return 0;
}