//函数指针数组的应用
//转移表
//对应switch函数，可以通过回调函数去优化
#include <stdio.h>

void menu()
{
    printf("####### 计算器 ############\n");
    printf("#####1.add   2.sub#######\n");
    printf("#####3.mul   4.div#######\n");
    printf("######## 0.exit ########\n");
}
int ADD(int x,int y)
{
    return x+y;
}
int SUB(int x,int y)
{
    return x-y;
}
int MUL(int x,int y)
{
    return x*y;
}
int DIV(int x,int y)
{
    return x/y;
}
int main()
{
    int input =0;
    int x=0;
    int y=0;
    int ret=0;
    int(*pa[5])(int ,int) ={0,ADD,SUB,MUL,DIV};
    //为函数指针数组
    do
    {
        menu();
        printf("请选择：");
        scanf("%d",&input);
        if(input >=1 && input <=4)
        {
            printf("请输入两个操作数");
            scanf("%d%d",&x,&y);
            int ret=pa[input](x,y);
            printf("%d\n",ret);
        }
        else if(input==0)
        {
            printf("退出\n");
        }
        else
        {
            printf("选择错误\n");
        }
        
    }while(input);
}