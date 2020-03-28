//#include <stdio.h>
//void fn()
//{
//    static int x = 1;   //定义静态局部变量
//    x *= 2;
//    printf("x=%d\n", x);
//}
//
//int main()
//{
//    int i;
//    for (i = 0; i < 5; i++)
//    {
//        fn();
//    }
//    extern int x;      //调用外部变量,for循环完之后调用外部变量x=100
//    printf("x=%d\n", x);
//    return 0;
//}
//int x = 100;
