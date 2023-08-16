/* 2150265 信09 王加炜 */
#include <iostream>
using namespace std;
#include<iomanip>
int main()
{
    float r, h;
    cout<<"请输入半径和高度"<<endl;
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
    cout<<"圆周长      : "<<a<<endl;
    cout<<"圆面积      : "<<b<<endl;
    cout<<"圆球表面积  : "<<c<< endl;
    cout<<"圆球体积    : "<<d<< endl;
    cout<<"圆柱体积    : "<<e<< endl;
    return 0;
}
