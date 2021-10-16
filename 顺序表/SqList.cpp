#include <stdio.h>
#define MaxSize 100
typedef int ElemType;			//假设顺序表中所有元素为int类型
typedef struct
{
    ElemType data[MaxSize];		//存放顺序表的元素
	int length;					//顺序表的实际长度
} SqList;						//顺序表类型


void InitList(SqList &L)	//由于L要回传给值参，所以用引用类型
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
    if (i<1 || i>L.length)		//无效的i值
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
		i++; 	//查找值为x的第1个元素,查找范围为0～L.length-1
	if (i>=L.length) return(0);	//未找到返回0
	else return(i+1);			//找到后返回其逻辑序号
}

int InsElem(SqList &L,ElemType x,int i)
{
    int j;
	if (i<1 || i>L.length+1)		//无效的参数i
		return 0;
	for (j=L.length;j>i;j--)		//将位置为i的结点及之后的结点后移
		L.data[j]=L.data[j-1];
	L.data[i-1]=x;					//在位置i处放入x
	L.length++;						//线性表长度增1
	return 1;
}

int DelElem(SqList &L,int i)
{
    int j;
	if (i<1 || i>L.length)			//无效的参数i
		return 0;
	for (j=i;j<L.length;j++)		//将位置为i的结点之后的结点前移
		L.data[j]=L.data[j+1];
	L.length--;						//线性表长度减1
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
	int i,k=0;						//k累计顺序表L中的元素个数
	for (i=0;i<n;i++)
	{
		L.data[k]=a[i];				//向L中添加一个元素
		k++;						//L中元素个数增1
	}
	L.length=k;						//设置L的长度
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

//第一题 用排序实现
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

//或者一旦有小于等于0的就放交换两数前面去，并且i--



//第二题 先便遍历找出最大的，再依次删除等于最大值
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

//通过取余得到偶数
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

    printf("线性表Even:");DispList(L1);
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

    printf("线性表:");DispList(L1);
    printf("线性表:");DispList(L2);

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

    printf("线性表:");DispList(L1);
    printf("线性表:");DispList(L2);

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

    printf("线性表:");DispList(L1);
    printf("线性表:");DispList(L2);

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
