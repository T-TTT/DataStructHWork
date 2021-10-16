#include <stdio.h>
#define MaxSize 100
typedef int ElemType;			//����˳���������Ԫ��Ϊint����
typedef struct
{
    ElemType data[MaxSize];		//���˳����Ԫ��
	int length;					//˳����ʵ�ʳ���
} SqList;						//˳�������


void InitList(SqList &L)	//����LҪ�ش���ֵ�Σ���������������
{
	L.length=0;
}

void DestroyList(SqList L)
{
}

int GetLength(SqList L)
{
	return L.length;
}

int GetElem(SqList L,int i,ElemType &e)
{
    if (i<1 || i>L.length)		//��Ч��iֵ
		return 0;
	else
	{	e=L.data[i-1];
		return 1;
	}
}

int Locate(SqList L,ElemType x)
{
    int i=0;
	while (i<L.length && L.data[i]!=x)
		i++; 	//����ֵΪx�ĵ�1��Ԫ��,���ҷ�ΧΪ0��L.length-1
	if (i>=L.length) return(0);	//δ�ҵ�����0
	else return(i+1);			//�ҵ��󷵻����߼����
}

int InsElem(SqList &L,ElemType x,int i)
{
    int j;
	if (i<1 || i>L.length+1)		//��Ч�Ĳ���i
		return 0;
	for (j=L.length;j>i;j--)		//��λ��Ϊi�Ľ�㼰֮��Ľ�����
		L.data[j]=L.data[j-1];
	L.data[i-1]=x;					//��λ��i������x
	L.length++;						//���Ա�����1
	return 1;
}

int DelElem(SqList &L,int i)
{
    int j;
	if (i<1 || i>L.length)			//��Ч�Ĳ���i
		return 0;
	for (j=i;j<L.length;j++)		//��λ��Ϊi�Ľ��֮��Ľ��ǰ��
		L.data[j]=L.data[j+1];
	L.length--;						//���Ա��ȼ�1
	return 1;
}

void DispList(SqList L)
{
    int i;
	for (i=0;i<L.length;i++)
		printf("%d ",L.data[i]);
	printf("\n");
}

void CreateList(SqList &L,ElemType a[],int n)
{
	int i,k=0;						//k�ۼ�˳���L�е�Ԫ�ظ���
	for (i=0;i<n;i++)
	{
		L.data[k]=a[i];				//��L�����һ��Ԫ��
		k++;						//L��Ԫ�ظ�����1
	}
	L.length=k;						//����L�ĳ���
}

void swapnum(int &a,int &b)
{
    int t = a;
    a = b;
    b = t;
}
void ListSort(SqList &L)
{
    int i,j;
    for(i = 0;i < L.length-1;i++)
        for(j = i; j < L.length;j++)
        {
            if(L.data[i] < L.data[j])
            {
                swapnum(L.data[i],L.data[j]);
            }
        }
}

//��һ�� ������ʵ��
void ListSortZero(SqList &L)
{
    int i,j;
    for(i = 0;i < L.length;i++)
        for(j = i; j < L.length-1;j++)
        {
            if(L.data[i] > L.data[j])
            {
                swapnum(L.data[i],L.data[j]);
            }
        }
}

//����һ����С�ڵ���0�ľͷŽ�������ǰ��ȥ������i--



//�ڶ��� �ȱ�����ҳ����ģ�������ɾ���������ֵ
void DelMaxNum(SqList &L)
{
    int i,j,max = L.data[0];

    for(i = 0;i < L.length;i++)
    {
        if(max < L.data[i])
        {
            max = L.data[i];
        }

    }

    for(i = 0;i < L.length;i++)
    {
        if(L.data[i] == max)
        {
            for(j = i;j < L.length;j++)
            {
                L.data[j] = L.data[j+1];
            }
            i--;
            L.length--;
        }

    }


}

//ͨ��ȡ��õ�ż��
void DelEvenSave(SqList &L)
{
    int i;
    SqList L1;
    L1.length = 0;
    for(i = 0;i < L.length;i++)
		if (L.data[i] % 2 == 0)
		{
			L1.data[L1.length] = L.data[i];
			L1.length++;
			DelElem(L, i);
			i--;
		}

    printf("���Ա�Even:");DispList(L1);
}


void RNumDel(SqList &L)
{
    int i,j;

    for(i = 0;i < L.length;i++)
        for(j = 0;j < L.length;j++)
        {
            if(L.data[i] == L.data[j] && i != j)
            {
                DelElem(L, i);
                i--;
            }
        }
}


void RONumDel(SqList &L)
{
    int i,j;

    for(i = 0;i < L.length-1;i++)
    {
        if(L.data[i] == L.data[i+1])
        {
            DelElem(L, i);
            i--;
        }
    }

}

void UnionList(SqList L1,SqList L2,SqList &Lsave)
{
    int i=0,j=0,k=0;

    ListSort(L1);
    ListSort(L2);

    printf("���Ա�:");DispList(L1);
    printf("���Ա�:");DispList(L2);

    while(i < L1.length && j<L2.length)
    {
        if(L1.data[i] > L2.data[j])
        {
            Lsave.data[k] = L1.data[i];
            i++;
        }
        else if(L1.data[i] = L2.data[j])
        {
            Lsave.data[k] = L1.data[i];
            i++;j++;
        }
        else
        {
            Lsave.data[k] = L2.data[j];
            j++;
        }

        k++;
    }

    if(i == L1.length-1)
    {
        while(j < L2.length)
        {
            Lsave.data[k] = L2.data[j];
            j++;
            k++;
        }
    }

    if(j == L2.length-1)
    {
        while(i < L1.length)
        {
            Lsave.data[k] = L1.data[i];
            i++;
            k++;
        }
    }

    Lsave.length = k;
}

void DiffList(SqList &L1,SqList &L2,SqList &Lsave)
{
    int i=0,j=0,k=0;

    ListSort(L1);
    ListSort(L2);

    printf("���Ա�:");DispList(L1);
    printf("���Ա�:");DispList(L2);

    while(i < L1.length && j < L2.length)
    {
        if(L1.data[i] > L2.data[j])
        {
            Lsave.data[k] = L1.data[i];
            i++;j++;
            k++;
        }
        else if(L1.data[i] < L2.data[j])
        {
            Lsave.data[k] = L1.data[j];
            j++;i++;
            k++;
        }
        else
        {
            j++;i++;
        }

    }
    Lsave.length = k;



}


void InterSctList(SqList L1,SqList L2,SqList &Lsave)
{
    int i=0,j=0,k=0;

    ListSort(L1);
    ListSort(L2);

    printf("���Ա�:");DispList(L1);
    printf("���Ա�:");DispList(L2);

    while(i < L1.length && j < L2.length)
    {
        if(L1.data[i] > L2.data[j])
        {
            i++;
        }
        else if(L1.data[i] < L2.data[j])
        {
            j++;
        }
        else
        {
            Lsave.data[k] = L1.data[i];
            j++;i++;k++;
        }

    }
    Lsave.length = k;
}


void DiminList(SqList L1,SqList L2,SqList &Lsave)
{
    int i = L1.length-1;
    int j = L2.length-1;
    int k = 0;

    while(i >= 0)
    {
        Lsave.data[k] = L1.data[i];
        k++;
        i--;
    }
    while(j >= 0)
    {
        Lsave.data[k] = L2.data[j];
        k++;
        j--;
    }
    Lsave.length = k;

    ListSort(Lsave);
}
