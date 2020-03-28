//
//#include <stdio.h>
//int getPeachNumber(int n)
//{
//    int num;    //定义所剩桃子数
//    if (n == 10)
//    {
//        num = 1;       //递归结束条件
//    }
//    else
//    {
//        num =(getPeachNumber(n+1)+1)*2 ;   //这里是不应该用递归呢？
//        printf("第%d天所剩桃子%d个\n", n, num); //天数，所剩桃子个数
//    }
//    return num;
//}
//int main()
//{
//    int num = getPeachNumber(1);
//    num = (num + 1) * 2;
//    printf("猴子第一天摘了:%d个桃子。\n", num);
//    return 0;
//}
////gt(1)=（gt(2）+1）*1
////gt(2)=（gt(3）+1）*1
////gt(3)=（gt(4）+1）*1
////gt(4)=（gt(5）+1）*1
////gt(5)=（gt(6）+1）*1
////gt(6)=（gt(7）+1）*1
////gt(7)=（gt(8）+1）*1
////gt(8)=（gt(9）+1）*1
////gt(9)=（gt(10）+1）*1
////gt(10)=1