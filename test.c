#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum = % d\n", sum);
//	return 0;
//}


// ���������������������
//int main()
//{
//	printf("hehe\n");
//	{
//		int a = 2;
//
//	}
//	printf("a = %d\n", a);
//
//}
 

//int g_val = 2022;
//
//int main()
//
//{
//	printf("1:%d\n", g_val);
//
//	{
//		printf("2:%d\n", g_val);
//
//		int a = 10;
//
//		printf("a = %d\n", a);
//	}
//	printf("3:%d\n", g_val);
//
//	return 0;
//}


//     �ַ���
//�ַ����� -- ������һ����ͬ���͵�Ԫ��
//�ַ����ڽ�β������һ��\0�ַ�
// \0���ַ����Ľ����ַ�

// char arr[] = "hello";
//char arr1[] = "abc";
//char arr2[] = { 'a', 'b', 'c' };
//
////��ӡ�ַ���
//int main()
//{
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//}  

//���ַ����ĳ���
//int main()
//{
//	int len = strlen("abc");  //string length
//	printf("%d\n", len);
//}

//int main()
//{
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//}



//ת���ַ�
//int main()
//{
//	printf("\a");
//
//	return 0;
//
//}


//ע��

//int a = 10;   //C ++ע�ͷ��

/*
	int b = 20;
*/

/* C����ע�ͷ�� - ��֧��Ƕ��ע�� */



////ѡ�����
//
//int main()
//{
//	int input = 0; //�����ֵ
//	printf("�������?:>\n");
//	printf("��Ҫ�ú�ѧϰ��1/0��?:>");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("������\n");
//	else
//		printf("����\n");
//
//	return 0;
//
//}


////ѭ�����
//
//int main()
//{
//	int line = 0;
//	while (line <= 30000)
//	{
//		printf("д����%d\n", line);
//		line++;
//	}
//	if (line >= 30000)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}


////����
//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	return 0;
//}


////����
//int main()
//{
//	/*
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//
//	.....
//	���� - һ����ͬ��Ԫ�صļ���
//	��10������1-10������
//	���������±������ʵ�
//	*/
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	char ch[5] = { 'a','b','c' }; //����ȫ��ʼ����ʣ���ȫΪ0��
//
//	return 0;
//}


////������
//
//int main()
//{
//	int a = 10;
//	int b = ++a; //ǰ��++����++.��ʹ��
//
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++; //����++����ʹ�ã���++
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	int b = 5;
//	int max = 0;
//
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//
//	max = a > b ? a : b;  //exp1 ? exp2 : exp3;  (��Ŀ������)
//
//	printf("%d\n", max);
//
//	return 0;
//}

