#include <iostream>

using namespace std;

int main()
{
	int menuidx, inbun;

	char menu[3][100] = { "«��","¥��","������" };

	cout << "*****  �¸��忡 ���� ���� ȯ���մϴ�.  *****\n";

	while (true)
	{
		cout << "«��:1, ¥��:2, ������:3, ����:4>>  ";
		cin >> menuidx;

		if (menuidx == 4) break;

		if (menuidx > size(menu) || menuidx < 1)
		{
			cout << "�ٽ� �ֹ��ϼ���!!\n";
			continue;
		}
		

		cout << "���κ�?";
		cin >> inbun;

		cout << menu[menuidx-1] << " " << inbun << "�κ� ���Խ��ϴ�.\n";

	}

	cout << "���� ���� �������ϴ�.";
	return 0;
}
