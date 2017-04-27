#include<iostream>
#include"circle.h"
using namespace std;

int main()
{
	double r,s;//s代表圆的面积，r代表圆的半径。
	cin >> r;
	s = circle(r);//函数实现的是输入圆的半径，然后计算圆的面积。
	cout << s << endl;
	return 0;
}
