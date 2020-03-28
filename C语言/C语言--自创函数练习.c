//#include <stdio.h>
//#include <string.h>
////#define n 10
//int ADD(int score[])
//{
//    int sum=0;
//    int i = 0;
//    int n = 10;//
//    for (i = 0; i < n; i++)
//    {
//        sum += score[i];
//    }
//    return sum;
//}
//int Average(int score[])
//{
//    int sum = 0;
//    int i = 0;
//    int av = 0;
//    int n = 10;
//    for (i = 0; i < n; i++)
//    {
//        sum += score[i];
//    }
//    av = sum / n;
//    return av;
//}
//int Compare1(int score[])
//{
//    int h = score[0];
//    int n = 10;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (h <= score[i])
//        {
//            h=score[i];
//        }
//    }
//    return h;
//}
//int Compare2(int score[])
//{
//    int l = score[0];
//    int n = 10;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (l >= score[i])
//        {
//            l = score[i];
//        }
//    }
//    return l;
//}
//void  Sort (int score[])
//{
//    int k, j;
//    int n=10;
//    printf("排序前：\n");
//    for (k = 0; k < n; k++)
//    {
//        if (k != 9)
//        {
//            printf("%d,", score[k]);
//        }
//        else
//        {
//            printf("%d", score[k]);
//        }
//    }
//    for (k = 8; k >= 0; k--)//控制每趟比较的最大下标
//    {
//        for (j = 0; j <= k; j++)//控制每次相邻元素比较的下标
//        {
//            if (score[j] > score[j + 1])//如果左边元素比右边元素大，则交换
//            {
//                int temp;
//                temp = score[j];
//                score[j] = score[j + 1];
//                score[j + 1] = temp;
//            }
//        }
//    }
//    printf("\n排序后：\n");
//    for (k = 0; k < n; k++)
//    {
//        if (k != 9)
//        {
//            printf("%d,", score[k]);
//        }
//        else
//        {
//            printf("%d", score[k]);
//        }
//    }
//}
//int main()
//{
//    int n = 10;
//    int score[10] = { 67,98,75,63,82,79,81,91,66,84 };
//    int a = 0;//a为总分
//    double average = 0;
//    int high = 0;
//    int low = 0;
//    int k = 0;
//    a = ADD(score);
//    average = Average(score);
//    high = Compare1(score);
//    low = Compare2(score);
//    printf("总分为：%d\n", a);
//    printf("平均分为：%.2f\n", average);
//    printf("最高分：%d\n", high);
//    printf("最低分：%d\n", low);
//    Sort(score);
//    return 0;
//}
