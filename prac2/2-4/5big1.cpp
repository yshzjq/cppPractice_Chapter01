#include <iostream>

using namespace std;

int main()
{
	double value;
	double max;

	cout << "5 ���� �Ǽ��� �Է��϶�>>";

	cin >> value;
	max = value;
	
	for (int i = 0; i < 4; i++)
	{
		cin >> value;
		
		if (max < value) max = value;
	}

	cout << "���� ū �� = " << max;

}

