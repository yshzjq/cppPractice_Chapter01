#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	cout << "***** �������� ���α׷� HIGH SCORE�� �����մϴ�. *****\n";

	map<string, int> m;

	while (true)
	{
		int n;
		cout << "�Է�:1, ��ȸ:2, ����:3 >> ";
		cin >> n;

		string name;
		int score;


		if (n == 1)
		{
			cout << "�̸��� ����>> ";
			cin >> name >> score;

			m[name] = score;
		}
		else if (n == 2)
		{
			cout << "�̸� >> ";
			cin >> name;

			if(m[name] != 0) cout << name << "�� ������ " << m[name] << '\n';
		}
		else if (n == 3)
		{
			cout << "���α׷��� �����մϴ�...";
			break;
		}

	}
}