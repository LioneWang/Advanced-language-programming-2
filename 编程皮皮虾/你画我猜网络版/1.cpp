#include<stdio.h>
#include<easyx.h>
int main()
{
	//��������
	initgraph(640, 480, EW_SHOWCONSOLE);
	setlinecolor(YELLOW);
	setlinestyle(PS_SOLID, 5);
	//����һ��ֱ��
	line(0, 0, 640, 480);
	while (1)
	{
		ExMessage msg = { 0 };
		while (peekmessage(&msg, EM_MOUSE))
		{
			//�ж���ʲô��Ϣ��������Ҽ������£�����
			switch (msg.message)
			{
				case WM_LBUTTONDOWN:
					break;
				case WM_LBUTTONUP:
					break;
				case 
			}
		};
	}
	getchar();//�ȴ��ַ����룬��ֹ����
	return 0;
}