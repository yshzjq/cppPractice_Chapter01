#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;


class Circle {
	string name; // �̸�
	int radius; // ������
public:
	Circle(int radius, string name) {
		this->radius = radius; this->name = name;
	}
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

int main()
{
	vector<Circle*> cm;

	cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�.\n";

	while (true)
	{
		int n;
		cout << "����:1, ����:2, ��κ���:3. ����:4 >> ";
		cin >> n;

		string name;
		int radius;

		if (n == 4)
		{
			break;
		}
		else if (n == 1)
		{
			cout << "�����ϰ��� �ϴ� ���� �������� �̸��� >> ";
			cin >> radius >> name;
			cm.push_back(new Circle(radius, name));
		}
		else if (n == 3)
		{
			for (int i = 0; i < cm.size(); i++)
			{
				cout << cm[i]->getName() << ' ' << cm[i]->getArea() << '\n';
			}
			cout << '\n';
		}
		else if (n == 2)
		{
			cout << "�����ϰ��� �ϴ� ���� �̸��� >> ";
			cin >> name;

			vector<Circle*>::iterator it;

			for (it = cm.begin(); it < cm.end();)
			{
				if ((*it)->getName() == name)
				{
					it = cm.erase(it);
				}
				else it++;
			}
		}

	}
}