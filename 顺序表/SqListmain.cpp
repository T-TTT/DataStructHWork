#include "SqList.cpp"
int main()
{
    int i;
	ElemType e;
	SqList L;
    SqList L1,L2,L3;


	InitList(L);		//初始化顺序表L
	InsElem(L,1,1);		//插入元素1
	InsElem(L,3,2);		//插入元素3
	InsElem(L,-1,3);		//插入元素1
	InsElem(L,5,4);		//插入元素5
	InsElem(L,-4,5);		//插入元素4
	InsElem(L,2,6);		//插入元素2
	InsElem(L,5,7);		//插入元素2
	InsElem(L,5,8);		//插入元素2

/*
	printf("长度:%d\n",GetLength(L));
	i=3;GetElem(L,i,e);
	printf("第%d个元素:%d\n",i,e);
	e=1;
	printf("元素%d是第%d个元素\n",e,Locate(L,e));
	i=4;printf("删除第%d个元素\n",i);
	DelElem(L,i);
*/
    printf("2(1)零放前面\n");
    printf("原线性表:");DispList(L);
    ListSortZero(L);
	printf("线性表:");DispList(L);
    printf("\n\n");

    printf("2(2)删除最大值（可能多个）\n");
    printf("原线性表:");DispList(L);
    DelMaxNum(L);
	printf("线性表:");DispList(L);
    printf("\n\n");

    printf("2(3)原表删偶数，再来个表存储偶数\n");
    InitList(L);		//初始化顺序表L
	InsElem(L,1,1);		//插入元素1
	InsElem(L,3,2);		//插入元素3
	InsElem(L,6,3);		//插入元素1
	InsElem(L,5,4);		//插入元素5
	InsElem(L,4,5);		//插入元素4
	InsElem(L,2,6);		//插入元素2
	printf("原线性表:");DispList(L);
    DelEvenSave(L);
	printf("线性表:");DispList(L);
    printf("\n\n");

    printf("2(4)删除重复，保留一个\n");
    InitList(L);		//初始化顺序表L
	InsElem(L,1,1);		//插入元素1
	InsElem(L,2,2);		//插入元素3
	InsElem(L,3,3);		//插入元素1
	InsElem(L,2,4);		//插入元素5
	InsElem(L,4,5);		//插入元素4
	InsElem(L,3,6);		//插入元素2
	printf("原线性表:");DispList(L);
    RNumDel(L);
	printf("线性表:");DispList(L);
    printf("\n\n");



    printf("2(5)有序中删除重复保留一个\n");
    InitList(L);		//初始化顺序表L
	InsElem(L,1,1);		//插入元素1
	InsElem(L,2,2);		//插入元素3
	InsElem(L,2,3);		//插入元素1
	InsElem(L,2,4);		//插入元素5
	InsElem(L,4,5);		//插入元素4
	InsElem(L,4,6);		//插入元素2
	printf("原线性表:");DispList(L);
    RONumDel(L);
	printf("线性表:");DispList(L);
    printf("\n\n");



    InitList(L1);		//初始化顺序表L
	InsElem(L1,1,1);		//插入元素1
	InsElem(L1,9,2);		//插入元素3
	InsElem(L1,2,3);		//插入元素1
	InsElem(L1,10,4);		//插入元素5
	InsElem(L1,11,5);		//插入元素4
	InsElem(L1,8,6);		//插入元素2

    InitList(L2);		//初始化顺序表L
	InsElem(L2,1,1);		//插入元素1
	InsElem(L2,6,2);		//插入元素3
	InsElem(L2,4,3);		//插入元素1
	InsElem(L2,8,4);		//插入元素5
	InsElem(L2,10,5);		//插入元素4
	InsElem(L2,7,6);		//插入元素2

    printf("2(6)并集\n");
    printf("原线性表L1:");DispList(L1);
    printf("原线性表L2:");DispList(L2);
    printf("\n");
    InitList(L3);		//初始化顺序表L
    UnionList(L1,L2,L3);
	printf("线性表:");DispList(L3);
    printf("\n\n");


    printf("2(6)差集\n");
    printf("原线性表L1:");DispList(L1);
    printf("原线性表L2:");DispList(L2);
    printf("\n");
    InitList(L3);		//初始化顺序表L
    DiffList(L1,L2,L3);
	printf("线性表:");DispList(L3);
    printf("\n\n");


    printf("2(6)交集\n");
    printf("原线性表L1:");DispList(L1);
    printf("原线性表L2:");DispList(L2);
    printf("\n");
    InitList(L3);		//初始化顺序表L
    InterSctList(L1,L2,L3);
	printf("线性表:");DispList(L3);
    printf("\n\n");


    printf("2(7)省略，将2（6）的排序去掉即可或者有空试试递归\n");
    printf("\n\n");


    InitList(L1);		//初始化顺序表
	InsElem(L1,1,1);		//插入元素
	InsElem(L1,3,2);		//插入元素
	InsElem(L1,4,3);		//插入元素
	InsElem(L1,6,4);		//插入元素
	InsElem(L1,7,5);		//插入元素
	InsElem(L1,8,6);		//插入元素

    InitList(L2);		//初始化顺序表
	InsElem(L2,5,1);		//插入元素
	InsElem(L2,10,2);		//插入元素
	InsElem(L2,12,3);		//插入元素
	InsElem(L2,13,4);		//插入元素
	InsElem(L2,15,5);		//插入元素
	InsElem(L2,17,6);		//插入元素


    printf("2(8) 递减有序\n");
    InitList(L3);		//初始化顺序表L
    printf("原线性表L1:");DispList(L1);
    printf("原线性表L2:");DispList(L2);
    DiminList(L1,L2,L3);
	printf("线性表:");DispList(L3);
    printf("\n\n");



	DestroyList(L);
	return 0;
}
