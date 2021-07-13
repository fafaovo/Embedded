#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <iostream>
//using namespace std;

//双链表
typedef struct ListNode
{
	struct ListNode* prev;
	struct ListNode* next;
	int item;
} ListNode, *pListNode;

//新建双链表节点
pListNode CreateNode(int item, pListNode next, pListNode prev)
{
	pListNode newNode = (pListNode)malloc(sizeof(ListNode));
	newNode->next = next;
	newNode->prev = prev;
	newNode->item = item;
	return newNode;
}
//初始化
pListNode initNode()
{
	pListNode newNode = CreateNode(0, NULL, NULL);
	newNode->next = newNode;
	newNode->prev = newNode;
	return newNode;
}

//尾插
void pushBack(int item, pListNode pHead)
{
	pListNode newNode = CreateNode(item, pHead, pHead->prev); //上一个是头 下一个是上一个头的尾部
	pHead->prev->next = newNode;
	pHead->prev = newNode;
}

//链表字数
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

//约瑟夫问题
void josephusProblem(pListNode pHead, int freq)
{
	int count = 1;
	pListNode cur = pHead;
	//如果循环的第一个元素是phead的话，进入循环后 就会直接将他指向下一个元素
	//此时下一个元素的count值就是1
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
	if (cur == pHead) //如果cur指向的是链表头,就打印下一个的item
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
	printf("请输入小盆友的数量");
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
	for (int i = 0; i < num;i++) //初始化数组元素
	{
		stu[i] = i + 1;
	}
	int i = 0; //数组下标
	int count = 0; //累积删除
	int itor = 0; //跳出循环条件 当只剩下一个人时
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