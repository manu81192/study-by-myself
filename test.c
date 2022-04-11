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


// 变量的作用域和作用周期
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


//     字符串
//字符数组 -- 数组是一组相同类型的元素
//字符串在结尾隐藏了一个\0字符
// \0是字符串的结束字符

// char arr[] = "hello";
//char arr1[] = "abc";
//char arr2[] = { 'a', 'b', 'c' };
//
////打印字符串
//int main()
//{
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//}  

//求字符串的长度
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



//转义字符
//int main()
//{
//	printf("\a");
//
//	return 0;
//
//}


//注释

//int a = 10;   //C ++注释风格

/*
	int b = 20;
*/

/* C语言注释风格 - 不支持嵌套注释 */



////选择语句
//
//int main()
//{
//	int input = 0; //输入的值
//	printf("加入比特?:>\n");
//	printf("你要好好学习吗（1/0）?:>");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("人上人\n");
//	else
//		printf("放羊\n");
//
//	return 0;
//
//}


////循环语句
//
//int main()
//{
//	int line = 0;
//	while (line <= 30000)
//	{
//		printf("写代码%d\n", line);
//		line++;
//	}
//	if (line >= 30000)
//	{
//		printf("好offer\n");
//	}
//	return 0;
//}


////函数
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


////数组
//int main()
//{
//	/*
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//
//	.....
//	数组 - 一组相同的元素的集合
//	将10个整形1-10存起来
//	数组是用下标来访问的
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
//	char ch[5] = { 'a','b','c' }; //不完全初始化，剩余的全为0；
//
//	return 0;
//}


////操作符
//
//int main()
//{
//	int a = 10;
//	int b = ++a; //前置++，先++.再使用
//
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++; //后置++，先使用，再++
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
//	max = a > b ? a : b;  //exp1 ? exp2 : exp3;  (三目操作符)
//
//	printf("%d\n", max);
//
//	return 0;
//}

