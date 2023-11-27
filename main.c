#include <stdio.h>
#include <stdlib.h>

void Pratice_Point_1()///----------------------------------------------------------------------------------------普通指针
{
    char StR1[] = {"hihi  :D   Here is a fresh bird"};/*定义一个一维字符串数组*/
    char *PointEr1;/*定义一个指针*/
    PointEr1 = &StR1[0];//让指针指向字符串的首地址，成为“数组指针”
    printf("%s\n\n",PointEr1);//以字符串格式输出指针所指向的字符串
}

void Pratice_Point_6(char* i)///----------------------------------------------------------------------------------指针参数
{
    printf("%s\n\n",i);
}


void Pratice_Point_2()///-----------------------------------------------------------------------------------------指针数组
{
    char *(PointEr2[]) =//第二个是指针数组，这个数组里放了三个指针，指向三个字符串的首地址
    {   "\\\\\\\\\\\\\\\\\\\\\\\\\\",
        "|||||||||||||",
        "//////////////////////////"
    };
    unsigned char i;//控制循环
    for(i = 0;i < 2;++i)
    {
        printf("%s\n",PointEr2[i]);
    }
}


void Pratice_Point_7()///------------------------------------------------------------------------------------------数组指针
{
    int Team[2][3] = {{11,22,33},{44,55,66}};
    //int AAA[9] = {111,22,333,444,555,666,777,888,999};
    int (*Col)[3];
    Col = Team;//Col与二维数组数组名等价
    printf("\n\n\n%d",Team[1][0]);
    printf("\n\n\n%d",(*(Team+1))[0]);//(*(Team+1)) = Team[1]
    printf("\n\n\n%d",*((Team+1)[0]));//这个先确定地址，再确定地址中的值
    printf("\n\n\n%d",Col[0][0]);//Col指针与二维数组数组名等价
}



void Pratice_Point_3()///------------------------------------------------------------------------------------------指针指针
{
    char **PointEr3;//第三个是指向指针的指针
    char *PointEr2[] =//第二个是指针数组，这个数组里放了三个指针，指向三个字符串的首地址
    {
        "O~A~O---",
        "pu~pu~pu~pu~",
        "@_@"
    };
    unsigned char i;//控制循环
    for(i = 0;i < 3;++i)
    {
        PointEr3 = PointEr2 + i;//让第三个指针-指向第i个-指针数组-内的指针
        printf("\n\n%s\n",*PointEr3);
    }
}

unsigned long int Pratice_Point_4(unsigned long int i)///-----------------------------------------------------------函数指针
{//函数、参数、指向函数的指针  三者的申明必须为同类，否则报错
    unsigned long int (*PointEr4)();//申明   指向函数   的   指针
    PointEr4 = Pratice_Point_4;//指针指向函数
    if(i<=1)
    {
        return 1;
    }
    else
    {
        i = (*PointEr4)(i-1)*i;//递归
        return i;
    }
}

char *Pratice_Point_5(unsigned char i)///---------------------------------------------------------------------------指针函数
{
    char *PointEr[] =
    {
        "A~A~A---",
        "emmmm,H Hello ?",
        "TAT",
        "XD"
    };
    return PointEr[i];//返回指针值
}







int main()
{
    Pratice_Point_1();
    Pratice_Point_2();
    Pratice_Point_3();
    printf("%lu\n\n",Pratice_Point_4(10));
    printf("%s\n\n",Pratice_Point_5(3));
    Pratice_Point_6(Pratice_Point_5(2));
    Pratice_Point_7();
    getchar();
    return 0;
}
