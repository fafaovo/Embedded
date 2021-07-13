#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <iostream>
//using namespace std;

//˫����
typedef struct ListNode
{
	struct ListNode* prev;
	struct ListNode* next;
	int item;
} ListNode, *pListNode;

//�½�˫����ڵ�
pListNode CreateNode(int item, pListNode next, pListNode prev)
{
	pListNode newNode = (pListNode)malloc(sizeof(ListNode));
	newNode->next = next;
	newNode->prev = prev;
	newNode->item = item;
	return newNode;
}
//��ʼ��
pListNode initNode()
{
	pListNode newNode = CreateNode(0, NULL, NULL);
	newNode->next = newNode;
	newNode->prev = newNode;
	return newNode;
}

//β��
void pushBack(int item, pListNode pHead)
{
	pListNode newNode = CreateNode(item, pHead, pHead->prev); //��һ����ͷ ��һ������һ��ͷ��β��
	pHead->prev->next = newNode;
	pHead->prev = newNode;
}

//��������
int listSize(pListNode pHead)
{
	pListNode cur = pHead->next;
	int count = 0;
	if (cur->next == pHead)
	{
		return count;
	}
	while (cur != pHead)
	{
		count++;
		cur = cur->next;
	}
	return count;
}

//Լɪ������
void josephusProblem(pListNode pHead, int freq)
{
	int count = 1;
	pListNode cur = pHead;
	//���ѭ���ĵ�һ��Ԫ����phead�Ļ�������ѭ���� �ͻ�ֱ�ӽ���ָ����һ��Ԫ��
	//��ʱ��һ��Ԫ�ص�countֵ����1
	while (listSize(pHead) > 1)
	{
		if (count == freq && cur != pHead)
		{
			count = 0;
			printf("%d->", cur->item);
			pListNode prev = cur->prev;
			prev->next = cur->next;
			cur->next->prev = prev;
			free(cur);
			cur = prev->next;
			count++;
		}
		else if (cur == pHead)
		{
			cur = cur->next;
		}
		else
		{
			cur = cur->next;
			count++;
		}

	}
	if (cur == pHead) //���curָ���������ͷ,�ʹ�ӡ��һ����item
	{
		printf("%d\n", cur->next->item);
	}
	else
	{
		printf("%d\n", cur->item);
	}
}


void test01()
{
	printf("������С���ѵ�����");
	pListNode S = initNode();
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		pushBack(i, S);
	}
	josephusProblem(S, 3);
}

void test02()
{
	int num;
	scanf("%d", &num);
	int stu[num];
	for (int i = 0; i < num;i++) //��ʼ������Ԫ��
	{
		stu[i] = i + 1;
	}
	int i = 0; //�����±�
	int count = 0; //�ۻ�ɾ��
	int itor = 0; //����ѭ������ ��ֻʣ��һ����ʱ
	while (itor < num - 1)
	{
		if (stu[i] != 0)
		{
			count++;
		}
		if (count == 3)
		{
			printf("%d ", stu[i]);
			stu[i] = 0;
			count = 0;
			itor++;
		}
		i++;
		if (i == num)
			i = 0;
	}
	for (int i = 0; i < num; i++)
	{
		if (stu[i] != 0)
		{
			printf("%d\n", stu[i]);
		}
	}
}




int main()
{
	test02();





	return 0;
}