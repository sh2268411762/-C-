//
//#include <stdio.h>
//int getPeachNumber(int n)
//{
//    int num;    //������ʣ������
//    if (n == 10)
//    {
//        num = 1;       //�ݹ��������
//    }
//    else
//    {
//        num =(getPeachNumber(n+1)+1)*2 ;   //�����ǲ�Ӧ���õݹ��أ�
//        printf("��%d����ʣ����%d��\n", n, num); //��������ʣ���Ӹ���
//    }
//    return num;
//}
//int main()
//{
//    int num = getPeachNumber(1);
//    num = (num + 1) * 2;
//    printf("���ӵ�һ��ժ��:%d�����ӡ�\n", num);
//    return 0;
//}
////gt(1)=��gt(2��+1��*1
////gt(2)=��gt(3��+1��*1
////gt(3)=��gt(4��+1��*1
////gt(4)=��gt(5��+1��*1
////gt(5)=��gt(6��+1��*1
////gt(6)=��gt(7��+1��*1
////gt(7)=��gt(8��+1��*1
////gt(8)=��gt(9��+1��*1
////gt(9)=��gt(10��+1��*1
////gt(10)=1