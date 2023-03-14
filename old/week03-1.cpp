#include <stdio.h>
int main()
{
    int a,b;
    printf("輸入2個數字:");
    scanf("%d%d",&a,&b);

    printf("%d+%d是%d\n",a,b,a+b);
    printf("%d-%d是 %d\n",a,b,a-b);
    printf("%d*%d是%d\n",a,b,a*b);
    printf("%d/%d是%d\n",a,b,a/b);
    printf("%d除法%d的除數是%d是%d\n",a,b,a%b);
}
