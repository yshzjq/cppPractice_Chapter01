#include <iostream>
using namespace std;

int main()
{
	int cnt = 5;

	int* n = new int[cnt];

	double avg = 0.f;

	cout << "���� 5�� �Է�>> ";

	for (int i = 0; i < cnt; i++)
	{
		int num;

		cin >> num;
		avg += num;
	}

	avg /= cnt;

	cout << "��� " << avg;

	delete n;
}

