#include <stdio.h>
#include <stdlib.h>

///为基本数据类型定义新的类型名
typedef unsigned int COUNT ;//(将unsigned int命名为count





///为自定义数据类型（结构体、共用体和枚举类型）定义简洁的类型名称
struct Position2
{
    int x ;
    int y ;
    int z ;
};
typedef struct Position2 New_name;//(将struct Position2命名为New_name;

/*
typedef struct Position
{
    int x ;
    int y ;
    int z ;
}New_name;//(命名为New_name，作用是相同的
*/




///为数组定义简洁的类型名称
typedef int INT_ARRAY_100[100];
INT_ARRAY_100 arr;

typedef int *INT_ARRAY_10[10];
INT_ARRAY_10 pint;





///为指针定义简洁的名称
typedef char* PCHAR;
PCHAR pa;





typedef int *(*PFun)(int,char*);
PFun a[5];// PFun是我们创建的一个类型别名





struct tagNode
{
    char *pItem;
    struct tagNode *pNext;
};
typedef struct tagNode *pNode;
pNode Ptag;
///等效
/*
typedef struct tagNode
{
    char *pItem;
    struct tagNode *pNext;
} *pNode;
*/







int main()
{
    return 0;
}
