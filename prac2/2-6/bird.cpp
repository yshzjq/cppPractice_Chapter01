#include <iostream>

using namespace std;

int main()
{
	char password[100];
	char check[100];

	cout << "�� ��ȣ�� �Է��ϼ��� >>";

	cin >> password;

	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";

	cin >> check;

	if (strcmp(password,check) == 0)
	{
		cout << "�����ϴ�";
	}
	else
	{
		cout << "���� �ʽ��ϴ�";
	}
}


