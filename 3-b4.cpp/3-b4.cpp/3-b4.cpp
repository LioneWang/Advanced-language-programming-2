/* 2150265 ��09 ����� */
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
	cout << "�����������ε����߼���нǣ��Ƕȣ�" << endl;
	float pi = 3.14159f;
	int a, b;
	float c,d,s;
	cin >> a>>b>>c;
	d = (c * pi) / 180;
	s = a * b * sin(d) / 2;
	cout << setiosflags(ios::fixed);
	cout<<setprecision(3)<<"�����ε����Ϊ : "<<s << endl;
	
	return 0;
}