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
//    printf("����ǰ��\n");
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
//    for (k = 8; k >= 0; k--)//����ÿ�˱Ƚϵ�����±�
//    {
//        for (j = 0; j <= k; j++)//����ÿ������Ԫ�رȽϵ��±�
//        {
//            if (score[j] > score[j + 1])//������Ԫ�ر��ұ�Ԫ�ش��򽻻�
//            {
//                int temp;
//                temp = score[j];
//                score[j] = score[j + 1];
//                score[j + 1] = temp;
//            }
//        }
//    }
//    printf("\n�����\n");
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
//    int a = 0;//aΪ�ܷ�
//    double average = 0;
//    int high = 0;
//    int low = 0;
//    int k = 0;
//    a = ADD(score);
//    average = Average(score);
//    high = Compare1(score);
//    low = Compare2(score);
//    printf("�ܷ�Ϊ��%d\n", a);
//    printf("ƽ����Ϊ��%.2f\n", average);
//    printf("��߷֣�%d\n", high);
//    printf("��ͷ֣�%d\n", low);
//    Sort(score);
//    return 0;
//}
