#include <iostream>

using namespace std;

int main()
{
	char str[5][100];

	char max[100];

	int size = 0;

	cout << "5 ���� �̸��� ';' ���� �����Ͽ� �Է��ϼ���\n>>";

	for (int i = 0; i < 5; i++)
	{
		cin.getline(str[i], 100,';');

		if (size <= strlen(str[i]))
		{
			size = strlen(str[i]);
			strcpy_s(max, str[i]);
		};
	}

	for (int i = 0; i < 5; i++)
	{
		cout << i << " : " << str[i] << '\n';
		
	}

	cout << "���� �� �̸��� " << max;
}