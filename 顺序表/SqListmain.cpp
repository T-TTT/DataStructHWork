#include "SqList.cpp"
int main()
{
    int i;
	ElemType e;
	SqList L;
    SqList L1,L2,L3;


	InitList(L);		//��ʼ��˳���L
	InsElem(L,1,1);		//����Ԫ��1
	InsElem(L,3,2);		//����Ԫ��3
	InsElem(L,-1,3);		//����Ԫ��1
	InsElem(L,5,4);		//����Ԫ��5
	InsElem(L,-4,5);		//����Ԫ��4
	InsElem(L,2,6);		//����Ԫ��2
	InsElem(L,5,7);		//����Ԫ��2
	InsElem(L,5,8);		//����Ԫ��2

/*
	printf("����:%d\n",GetLength(L));
	i=3;GetElem(L,i,e);
	printf("��%d��Ԫ��:%d\n",i,e);
	e=1;
	printf("Ԫ��%d�ǵ�%d��Ԫ��\n",e,Locate(L,e));
	i=4;printf("ɾ����%d��Ԫ��\n",i);
	DelElem(L,i);
*/
    printf("2(1)���ǰ��\n");
    printf("ԭ���Ա�:");DispList(L);
    ListSortZero(L);
	printf("���Ա�:");DispList(L);
    printf("\n\n");

    printf("2(2)ɾ�����ֵ�����ܶ����\n");
    printf("ԭ���Ա�:");DispList(L);
    DelMaxNum(L);
	printf("���Ա�:");DispList(L);
    printf("\n\n");

    printf("2(3)ԭ��ɾż������������洢ż��\n");
    InitList(L);		//��ʼ��˳���L
	InsElem(L,1,1);		//����Ԫ��1
	InsElem(L,3,2);		//����Ԫ��3
	InsElem(L,6,3);		//����Ԫ��1
	InsElem(L,5,4);		//����Ԫ��5
	InsElem(L,4,5);		//����Ԫ��4
	InsElem(L,2,6);		//����Ԫ��2
	printf("ԭ���Ա�:");DispList(L);
    DelEvenSave(L);
	printf("���Ա�:");DispList(L);
    printf("\n\n");

    printf("2(4)ɾ���ظ�������һ��\n");
    InitList(L);		//��ʼ��˳���L
	InsElem(L,1,1);		//����Ԫ��1
	InsElem(L,2,2);		//����Ԫ��3
	InsElem(L,3,3);		//����Ԫ��1
	InsElem(L,2,4);		//����Ԫ��5
	InsElem(L,4,5);		//����Ԫ��4
	InsElem(L,3,6);		//����Ԫ��2
	printf("ԭ���Ա�:");DispList(L);
    RNumDel(L);
	printf("���Ա�:");DispList(L);
    printf("\n\n");



    printf("2(5)������ɾ���ظ�����һ��\n");
    InitList(L);		//��ʼ��˳���L
	InsElem(L,1,1);		//����Ԫ��1
	InsElem(L,2,2);		//����Ԫ��3
	InsElem(L,2,3);		//����Ԫ��1
	InsElem(L,2,4);		//����Ԫ��5
	InsElem(L,4,5);		//����Ԫ��4
	InsElem(L,4,6);		//����Ԫ��2
	printf("ԭ���Ա�:");DispList(L);
    RONumDel(L);
	printf("���Ա�:");DispList(L);
    printf("\n\n");



    InitList(L1);		//��ʼ��˳���L
	InsElem(L1,1,1);		//����Ԫ��1
	InsElem(L1,9,2);		//����Ԫ��3
	InsElem(L1,2,3);		//����Ԫ��1
	InsElem(L1,10,4);		//����Ԫ��5
	InsElem(L1,11,5);		//����Ԫ��4
	InsElem(L1,8,6);		//����Ԫ��2

    InitList(L2);		//��ʼ��˳���L
	InsElem(L2,1,1);		//����Ԫ��1
	InsElem(L2,6,2);		//����Ԫ��3
	InsElem(L2,4,3);		//����Ԫ��1
	InsElem(L2,8,4);		//����Ԫ��5
	InsElem(L2,10,5);		//����Ԫ��4
	InsElem(L2,7,6);		//����Ԫ��2

    printf("2(6)����\n");
    printf("ԭ���Ա�L1:");DispList(L1);
    printf("ԭ���Ա�L2:");DispList(L2);
    printf("\n");
    InitList(L3);		//��ʼ��˳���L
    UnionList(L1,L2,L3);
	printf("���Ա�:");DispList(L3);
    printf("\n\n");


    printf("2(6)�\n");
    printf("ԭ���Ա�L1:");DispList(L1);
    printf("ԭ���Ա�L2:");DispList(L2);
    printf("\n");
    InitList(L3);		//��ʼ��˳���L
    DiffList(L1,L2,L3);
	printf("���Ա�:");DispList(L3);
    printf("\n\n");


    printf("2(6)����\n");
    printf("ԭ���Ա�L1:");DispList(L1);
    printf("ԭ���Ա�L2:");DispList(L2);
    printf("\n");
    InitList(L3);		//��ʼ��˳���L
    InterSctList(L1,L2,L3);
	printf("���Ա�:");DispList(L3);
    printf("\n\n");


    printf("2(7)ʡ�ԣ���2��6��������ȥ�����ɻ����п����Եݹ�\n");
    printf("\n\n");


    InitList(L1);		//��ʼ��˳���
	InsElem(L1,1,1);		//����Ԫ��
	InsElem(L1,3,2);		//����Ԫ��
	InsElem(L1,4,3);		//����Ԫ��
	InsElem(L1,6,4);		//����Ԫ��
	InsElem(L1,7,5);		//����Ԫ��
	InsElem(L1,8,6);		//����Ԫ��

    InitList(L2);		//��ʼ��˳���
	InsElem(L2,5,1);		//����Ԫ��
	InsElem(L2,10,2);		//����Ԫ��
	InsElem(L2,12,3);		//����Ԫ��
	InsElem(L2,13,4);		//����Ԫ��
	InsElem(L2,15,5);		//����Ԫ��
	InsElem(L2,17,6);		//����Ԫ��


    printf("2(8) �ݼ�����\n");
    InitList(L3);		//��ʼ��˳���L
    printf("ԭ���Ա�L1:");DispList(L1);
    printf("ԭ���Ա�L2:");DispList(L2);
    DiminList(L1,L2,L3);
	printf("���Ա�:");DispList(L3);
    printf("\n\n");



	DestroyList(L);
	return 0;
}
