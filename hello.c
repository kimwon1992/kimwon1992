#include <stdio.h>

int main (void)
{
    printf("제 이름은 홍길동입니다.\n");
    printf("제 나이는 %d살이구요.\n", 20);
    printf("제가 사는 곳의 번지수는 %d-%d입니다.\n",123,456);

    printf("%dx%d=%d\n",4,5,4*5);
    printf("%dx%d=%d\n",7,9,7*9);
    int num;
    num=20;
    printf("%d\n", num);

    int num1=3;
    int num2=4;
    int result=num1+num2;
    printf("덧셈결과:%d\n",result);
    printf("%d+%d=%d \n",num1, num2, result);
    printf("%d와 %d의 합은 %d입니다.\n", num1,num2,result);    
    return 0;
}
