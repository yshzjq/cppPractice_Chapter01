#include <iostream>
#include <string>

using namespace std;

bool bigger(int a, int b, int& big)
{
	if (a == b) {
		big = a;
		return true;
	}
	else if (a > b) big = a;
	else big = b;

	return false;
}

int main() 
{
	int n1, n2, bigN;

	cout << "�� ���� ������ �Է��ϼ��� >> ";
	cin >> n1 >> n2;

	cout << bigger(n1, n2, bigN) << '\n';

	cout << "ū �� : " << bigN;

}