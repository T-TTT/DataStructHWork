#include "SLinkNode.cpp"



int main()
{
    int i;
	ElemType e;
	SLinkNode *L;

	InitList(L);		//初始化循环单链表L
	InsElem(L,1,1);		//插入元素1
	InsElem(L,3,2);		//插入元素3
	InsElem(L,1,3);		//插入元素1
	InsElem(L,5,4);		//插入元素5
	InsElem(L,4,5);		//插入元素4
	InsElem(L,2,6);		//插入元素2


	printf("线性表:");DispList(L);


//	printf("长度:%d\n",GetLength(L));
//
//	i=3;GetElem(L,i,e);
//	printf("第%d个元素:%d\n",i,e);
//
//	e=1;
//	printf("元素%d是第%d个元素\n",e,Locate(L,e));
//
//	i=4;printf("删除第%d个元素\n",i);
//	DelElem(L,i);

	printf("P90-2(9)\n");
	DelReNum(L);
	printf("线性表:");DispList(L);
	printf("\n\n");
	
	
	
	printf("P90-2(10)\n");
	InitList(L);		//初始化循环单链表L
	InsElem(L,1,1);		//插入元素1
	InsElem(L,3,2);		//插入元素3
	InsElem(L,3,3);		//插入元素1
	InsElem(L,6,4);		//插入元素5
	InsElem(L,6,5);		//插入元素4
	InsElem(L,6,6);		//插入元素2
	printf("原线性表:");DispList(L);
	DelOrdReNum(L);
	printf("线性表:");DispList(L);
	printf("\n\n");

	return 0;
}
