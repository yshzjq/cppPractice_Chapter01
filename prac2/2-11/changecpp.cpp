#include <iostream>

using namespace std;

int main()
{
	int k, n;
	int sum = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;
	for (k = 1; k <= n; k++)
		sum += k;
	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�.\n";
	return 0;
}