#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;

	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)\n";

	while (true)
	{
		cout << ">>";
		getline(cin, str);

		if (str == "exit") break;

		int length = str.size() - 1;

		do
		{
			cout << str[length];
		} 
		while (length--);

		cout << '\n';

	}
	return 0;
}
