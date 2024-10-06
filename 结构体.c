#include <stdio.h>
#include <stdlib.h>

struct Student///----------------------------------------------------------------------------------------------------申明Student结构体
{
    char Name[15];
    char Student_Num[11];
    float Score;
    struct Birthday///------------------------------------------------------------------------------------------------结构体中的结构体，birthday依然能像student一样定义变量(结构体中可以创建结构体)
    {
        unsigned int Year;
        unsigned char Month;
        unsigned char Day;
    };
}A = {"Zero","3115461231",78.5,{1500,6,12}},E = {"Second","2119514836",55.4};///---------------------------------------------同时定义结构体变量&赋值








void Struct_Practice_1()
{
    struct Student B = {"HuangZiQi","2019214081",60.2};///----------------------------------------------------------------定义结构体变量&赋值
    printf("name:%s\nnumber:%s\nscore:%f\n\n",B.Name,B.Student_Num,B.Score);//成员运算符: "."
}

void Struct_Practice_2()

{
    unsigned char i;
    struct Student C[] = {{"Noob","2222222232",56.3},{"joker","3333333333",88.5}};///----------------------------------结构体数组
    for(i = 0;i < 2;++i)
    {
        printf("name:%s\nnumber:%s\nscore:%f\n\n",C[i].Name,C[i].Student_Num,C[i].Score);//结构体数组引用
    }
}

void Struct_Practice_3()
{
    struct Student  D ;///----------------------------------------------------------------------------------------------成员变量赋值
    sprintf(D.Name,"%s","GuTiFan");//格式化输出
    D.Score = 99;
    sprintf(D.Student_Num,"%s","4019214051");
    printf("name:%s\nnumber:%s\nscore:%f\n\n",D.Name,D.Student_Num,D.Score);
}

void Struct_Practice_4()///---------------------------------------------------------------------------------------------结构体指针
{
    struct Student *P_1;
    P_1 = &A;
    printf("name:%s\nnumber:%s\nscore:%f\n\n",(*P_1).Name,P_1->Student_Num,A.Score);//三种引用效果是等价的
}

void Struct_Practice_5(struct Student A)///------------------------------------------------------------------------------结构体变量作参数
{
    printf("name:%s\nnumber:%s\nscore:%f\n\n",A.Name,A.Student_Num,A.Score);
}

void Struct_Practice_6(float Score)///-----------------------------------------------------------------------------------变量成员做参数？其实和一般的函数一样，只要是相同的数据类型就都可以做实参
{
    printf("%f",Score);
}

int main()
{
    Struct_Practice_1();
    Struct_Practice_2();
    Struct_Practice_3();
    Struct_Practice_4();
    Struct_Practice_5(E);
    Struct_Practice_6(A.Score);//变量成员作实参
    return 0;
}
