/* 2150265 ��09 ����� */
#include <iostream>
using namespace std;
#include<iomanip>
int main()
{
    float r, h;
    cout<<"������뾶�͸߶�"<<endl;
    cin>>r>> h;
    float a, b, c, d, e;
    float pi = 3.14159f;
    cout << setiosflags(ios::fixed);
    cout << setprecision(2);
    a = 2 * pi * r;
    b = pi * r * r;
    c = 4 * pi * r * r;
    d = (4 * pi * r * r * r) / 3;
    e = b * h;
    cout<<"Բ�ܳ�      : "<<a<<endl;
    cout<<"Բ���      : "<<b<<endl;
    cout<<"Բ������  : "<<c<< endl;
    cout<<"Բ�����    : "<<d<< endl;
    cout<<"Բ�����    : "<<e<< endl;
    return 0;
}
