#include <iostream>	
#include <vector>	
#include <iterator>
#include <random>

using namespace std;

class Nation
{
	string nation;
	string capital;
public:
	Nation(string nation, string capital)
	{
		this->nation = nation;
		this->capital = capital;
	}

	string getNation() { return nation; }
	string getCapital() { return capital; }
};

int main()
{
	cout << "***** ������ ���� ���߱� ������ �����մϴ�. *****\n";

	vector<Nation> v;


	//�ʱ� ���� �Էµ�
	string nations[] = { "�̱�", "����"};
	string capitals[] = { "�ͽ���", "��ũ��"};

	random_device rd;
	mt19937 gen(rd());
	

	int num = 0;
	for (string nation : nations)
	{
		auto a = v.begin();

		for ( ; a < v.end(); ++a)
		{
			if (nation == a->getNation())
			{
				break;
			}
		}

		if (v.size() == 0 || a == v.end())
		{
			v.push_back(Nation(nations[num], capitals[num]));
		}
		num++;
	}

	while (true)
	{
		int n;
		cout << "���� �Է�: 1, ����: 2, ����: 3 >> ";
		cin >> n;

		if (n == 3) break;
		else if (n == 1)
		{
			cout << "���� " << v.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�.\n����� ������ �Է��ϼ���(no no �̸� �Է³�)\n";
			
			while (true)
			{
				string str1, str2;

				cout << v.size() + 1 << ">>";

				cin >> str1 >> str2;

				if (str1 == "no" && str2 == "no") break;

				auto a = v.begin();
				for (; a < v.end(); a++)
				{
					if (a->getNation() == str1)
					{
						cout << "already exists !!\n";
						break;
					}
				}

				if (a == v.end())
				{
					v.push_back(Nation(str1, str2));
				}
			}
		}
		else if (n == 2)
		{
			string str;

			while (true)
			{
				uniform_int_distribution<> dis(0, v.size() - 1);

				int correct = dis(gen);

				cout << v[correct].getNation() << "�� ������?";

				cin >> str;

				if (str == "exit") break;
				else
				{
					if (str == v[correct].getCapital())
					{
						cout << "Correct !!\n";
					}
					else
					{
						cout << "NO !!\n";
					}

				}
			}
		}
	}
}