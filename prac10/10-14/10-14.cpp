#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<string, string> PassWord_Manager;

	cout << "***** ��ȣ ���� ���α׷� WHO�� �����մϴ� *****\n";

	while (true)
	{
		cout << "����:1, �˻�:2, ����:3>> ";
		int n;
		cin >> n;

		string name;
		string password;

		if (n == 3)
		{
			cout << "���α׷��� �����մϴ�...\n";
			return 0;
		}
		else if (n == 1)
		{
			cout << "�̸� ��ȣ>> ";

			cin >> name;
			cin >> password;

			PassWord_Manager[name] = password;
		}
		else if (n == 2)
		{
			cout << "�̸�? ";
			cin >> name;

			while (true)
			{
				cout << "��ȣ?\n";
				cin >> password;

				if (PassWord_Manager[name] == password)
				{
					cout << "���!!\n";
					break;
				}
				else
				{
					cout << "����~~";
				}
			}
		}
	}
	

}