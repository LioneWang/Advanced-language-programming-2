/* ����09�� 2150265 ����� */
#include <iostream>
using namespace std;

int main()
{
	int x;
	while (1) {
		cout << "������x��ֵ[0-100] : ";
		cin >> x;   //����x�ķ�ʽ������ cin>>int�ͱ�����������������ʽ
		if (cin.rdstate() != 0)
		{


			cin.clear();
			cin.ignore(1024,'\n');
			//system("pause");
			continue;
		}
		if (x >= 0 && x <= 100)
			break;
	}

	cout << "cin.good()=" << cin.good() << " x=" << x << endl; //�˾䲻׼��������Ҫ�����ʱgoodΪ1

	return 0;
}
