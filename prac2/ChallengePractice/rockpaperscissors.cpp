#include <iostream>
#include <string>
using namespace std;

int main()
{
	string A, B; // ���� ���� �� �Է� ���� ����

	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���.\n";
	
	cout << "�ι̿�>>";
	cin >> A;
	cout << "�ٸ���>>";
	cin >> B;

	if ((A == "����" && B == "��") || (A == "��" && B == "����") || (A == "����" && B == "����"))
	{
		cout << "�ι̿��� �̰���ϴ�.";
	}
	else if ((B == "����" && A == "��") || (B == "��" && A == "����") || (B == "����" && A == "����"))
	{
		cout << "�ٸ����� �̰���ϴ�.";
	}
	else
	{
		cout << "�����ϴ�.";
	}
	// return 0 ���� ����
}