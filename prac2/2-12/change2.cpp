#include <iostream>

using namespace std;

int sum(int a,int b); // �Լ� ���� ����

int main()
{
	int n = 0;
	cout << "�� ���� �Է��ϼ���>>";
	cin >> n;
	cout << "1���� " << n << "������ ���� " << sum(1, n);
	return 0;
}

int sum(int a, int b)
{
	int k, res = 0;
	for (k = a; k <= b; k++)
		res += k;
	return res;
}