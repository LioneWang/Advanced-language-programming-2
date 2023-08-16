/* 2150265 信09 王加炜 */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	cout << "请输入三角形的两边及其夹角（角度）" << endl;
	float pi = 3.14159f;
	int a, b;
	float c,d,s;
	cin >> a>>b>>c;
	d = (c * pi) / 180;
	s = a * b * sin(d) / 2;
	cout << setiosflags(ios::fixed);
	cout<<setprecision(3)<<"三角形的面积为 : "<<s << endl;
	
	return 0;
}