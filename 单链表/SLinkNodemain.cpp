#include "SLinkNode.cpp"



int main()
{
    int i;
	ElemType e;
	SLinkNode *L;

	InitList(L);		//��ʼ��ѭ��������L
	InsElem(L,1,1);		//����Ԫ��1
	InsElem(L,3,2);		//����Ԫ��3
	InsElem(L,1,3);		//����Ԫ��1
	InsElem(L,5,4);		//����Ԫ��5
	InsElem(L,4,5);		//����Ԫ��4
	InsElem(L,2,6);		//����Ԫ��2


	printf("���Ա�:");DispList(L);


//	printf("����:%d\n",GetLength(L));
//
//	i=3;GetElem(L,i,e);
//	printf("��%d��Ԫ��:%d\n",i,e);
//
//	e=1;
//	printf("Ԫ��%d�ǵ�%d��Ԫ��\n",e,Locate(L,e));
//
//	i=4;printf("ɾ����%d��Ԫ��\n",i);
//	DelElem(L,i);

	printf("P90-2(9)\n");
	DelReNum(L);
	printf("���Ա�:");DispList(L);
	printf("\n\n");
	
	
	
	printf("P90-2(10)\n");
	InitList(L);		//��ʼ��ѭ��������L
	InsElem(L,1,1);		//����Ԫ��1
	InsElem(L,3,2);		//����Ԫ��3
	InsElem(L,3,3);		//����Ԫ��1
	InsElem(L,6,4);		//����Ԫ��5
	InsElem(L,6,5);		//����Ԫ��4
	InsElem(L,6,6);		//����Ԫ��2
	printf("ԭ���Ա�:");DispList(L);
	DelOrdReNum(L);
	printf("���Ա�:");DispList(L);
	printf("\n\n");

	return 0;
}
