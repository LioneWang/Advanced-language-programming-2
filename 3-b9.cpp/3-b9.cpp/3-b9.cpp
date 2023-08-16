/* ¼ÃÇÚ09°à 2150265 Íõ¼Óì¿ */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i = 0;
	int j = 0;
	for (i=1;i<=9;i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << j << ("x") << i << ("=") <<setiosflags(ios::left)<< setw(4) << j * i;
		}
		cout<<endl;
	}
	return 0;
}