#include <iostream>
using namespace std;

int main()
{
	char str[10000];
	int starcnt[26] = { 0 };

	int sum = 0;
	
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ����; �Դϴ�. 10000������ �����մϴ�.\n";

	cin.getline(str, 10000, ';');

	for (char c = 'a'; c <= 'z'; c++)
	{
		int ccnt = 0;
	
		for (int i = 0; i < strlen(str); i++)
		{
			if (tolower(str[i]) == c) ccnt++;
		}

		sum += ccnt;
		starcnt[c - 'a'] = ccnt;
	}

	cout << "�� ���ĺ� �� " << sum << "\n\n";

	for (char c = 'a'; c <= 'z'; c++)
	{
		cout << c << " (" << starcnt[c - 'a'] << ")   : ";

		for (int i = 0; i < starcnt[c - 'a']; i++)
		{
			cout << '*';
		}

		cout << '\n';
	}
}




