#include <iostream>

using namespace std;

int main()
{
	char str[100];

	int cnt = 0;

	cout << "���ڵ��� �Է��϶�(100�� �̸�).\n";

	cin.getline(str,100);

	for (int i = 0; i < 100; i++)
	{
		if (str[i] == 'x') cnt++;
		else if (str[i] == '\n') break;
	}
		
	cout << "x�� ������ " << cnt;
}


