#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	double avg = 0;

	vector<int> v;

	while (true)
	{

		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����>>";

		cin >> n;

		

		if (n == 0) break;
		else
		{
			v.push_back(n);
			avg += *(v.end() - 1);
			for (auto i = v.begin(); i < v.end(); i++)
			{
				cout << *i << ' ';
			}
			cout << '\n' << "��� = " << avg / v.size() << '\n';
		}

	}



}