#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	char findChar = 'a';

	int cnt = 0;

	cout << "���ڿ� �Է�>> ";
	getline(cin, str);

	/* (1)
	for (char c : str)
	{
		if (c == findChar) cnt++;
	}
	*/

	/* (2)
	int startIdx = 0;

	while ((startIdx = str.find(findChar,startIdx)) >= 0)
	{
		cnt++;
		startIdx++;
	}
	*/

	cout << "���� " << findChar << "�� " << cnt << "�� �ֽ��ϴ�.";

}

