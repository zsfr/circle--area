//调用外部函数
#include<iostream>
#include "head.h"               //用户自己编写的头文件
using namespace std;

int main()
{
	double r,s;             //定义半径为r,面积为s
	cin>>r;                 //输入r
	s=Area(r);              //调用函数area()，求得面积
	output(s);              //调用函数output()，输出面积
	return 0;
}
