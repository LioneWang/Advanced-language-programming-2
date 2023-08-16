/* 2150265 信09 王加炜 */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double  num1,num2;
	long long int num3;
	int a, b, c, d, e, f, g, h, i, j, k, l,num4;
	cout << "请输入一个[0-100亿)之间的数字:" << endl;
	
	cin >> num1;
	num3 =  static_cast<long long int>(num1/1); 
	num2 = num1 - num3;
	num4 =  int(100 * num2+0.01);
	a = int((num4 %10));
	b = int((num4 / 10)) ;
	c = (num3 ) % 10;
	d = (num3 / 10) % 10;
	e = (num3 / 100) % 10;
	f = (num3 / 1000) % 10;
	g = (num3 / 10000) % 10;
	h = (num3 / 100000) % 10;
	i = (num3 / 1000000) % 10;
	j = (num3 / 10000000) % 10;
	k =(int(num3 / 100000000)) % 10;
	l = int((num3 / 1000000000));
	cout << "十亿位 : " << l << endl;
	cout << "亿位   : " << k << endl;
	cout << "千万位 : " << j << endl;
	cout << "百万位 : " << i << endl;
	cout << "十万位 : " << h << endl;
	cout << "万位   : " << g << endl;
	cout << "千位   : " << f << endl;
	cout << "百位   : " << e << endl;
	cout << "十位   : " << d << endl;
	cout << "圆     : " << c << endl;
	cout << "角     : " << b << endl;
	cout << "分     : " << a << endl;
	return 0;
}
