#include <iostream>
#include <string>
#include <vector>
#include "Shape.h"

using namespace std;

int main()
{
	vector<Shape*> v;

	cout << "�׷��� �������Դϴ�.\n";

	while (true)
	{
		cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
		int n;
		cin >> n;

		if (n == 4) // 4. ����
		{
			break;
		}
		else if (n == 1) // 1. ����
		{
			cout << "��:1, ��:2, �簢��:3 >> ";
			cin >> n;
			
			if (n == 1)
			{
				v.push_back(new Line());
			}
			else if (n == 2)
			{
				v.push_back(new Circle());
			}
			else if (n == 3)
			{
				v.push_back(new Rect());
			}
		}
		else if (n == 2) // 2. ����
		{
			cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
			cin >> n;
			
			vector<Shape*>::iterator it;
			it = v.begin() + n;
			v.erase(it);
		}
		else if (n == 3) // 3. ��� ����
		{
			for (int i = 0; i < v.size(); i++)
			{
				cout << i << ": ";
				v[i]->paint();
			}
		}
	}

}