#include <iostream>

using namespace std;

int main()
{
	char coffee[100];
	int cnt;

	int sum = 0;

	int price = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500���Դϴ�.\n";

	while (sum <= 20000)
	{
		cout << "�ֹ�>>";
		cin >> coffee >> cnt;

		if (strcmp(coffee, "����������") == 0)
		{
			price = 2000;
			sum += 2000 * cnt;
		}
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0)
		{
			price = 2300;
			sum += 2300 * cnt;
		}
		else if (strcmp(coffee, "īǪġ��") == 0)
		{
			price = 2500;
			sum += 2500 * cnt;
		}

		cout << price * cnt << "���Դϴ�. ���ְ� �弼��\n";

	}

	cout << "���� "<< sum << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���Ϻ���~";

	return 0;
}
