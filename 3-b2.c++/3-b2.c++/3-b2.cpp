/* 2150265 信09 王加炜 */
#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	int b, c, d, e, f;
	cout << "请输入一个[1..30000]间的整数:" << endl;
	cin >> a;
	b = a % 10;
	c = (a/10) % 10;
	d = (a / 100) % 10;
	e = (a / 1000) % 10;
	f = (a / 10000);
	cout << "万位 : " << f << endl;
	cout << "千位 : " << e << endl;
	cout << "百位 : " << d << endl;
	cout << "十位 : " << c << endl;
	cout << "个位 : " << b << endl;



	
	return 0;

}