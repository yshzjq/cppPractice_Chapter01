#include <iostream>

using namespace std;

int big(int n1, int n2, int n3 = 100)
{
	if (n1 > n2 ? n1 : n2 > n3) return n3;
	else return n1 > n2 ? n1 : n2;
}

int main() {
	int x = big(3, 5); // 3�� 5 �� ū �� S�� �ִ밪 100���� �����Ƿ�, 5 ���� 
	int y = big(300, 60); // 300�� �� �� ū �� 300�� �ִ밪 100���� ũ�Ƿ�, 100 ���� 
	int z = big(30, 60, 50); // 30�� 60 �� ū �� ���� �ִ밪 50���� ũ�Ƿ�, 50 ���� 
	cout << x << ' ' << y << ' ' << z << endl;
} 