#include <stdio.h>
 
int main ()
{
    int var_runoob = 10;
    int *p;              // 定义指针变量
    p = &var_runoob;
 
   printf("var_runoob 变量的地址： %p\n", p);
   printf("var_runoob 变量：%d\n",*p);
   int a = 20;
   for(int i =0;i<20;i++)
   {
    printf("%d",a--);
    printf("\n");
   }
   return 0;
}