#include<iostream>
#include"caculate.h"
using namespace std;
int main()
{
	double s, r;//s代表圆的面积，r代表圆的半径
	cin >> r;
	s = caculate(r);//函数实现的是输入半径，计算面积
	cout << s << endl;
	return 0;
}

#include<iostream>
#include"CIRCEL.H" 
//用户自己编写的头文件，vs6.0环境右击鼠标可查看内容（点击打开文档“CIRCEL.H”）
using namespace std;

int main()
{
	double t;
	//定义t接收半径值
	class Circel a;
	//定义Circel的对象a
	cin >> t;
	a.circel(t);
	//把t的值给a内的circel函数，这个函数再把t的值传递给私有的r
	cout << "AREA=" << a.Area() <<endl;
	//Area()函数计算面积
	return 0;
}
