#include <iostream>

using namespace std;

int main()
{
	char name[100];
	char place[100];
	int age;

	cout << "�̸���?";
	cin.getline(name, 100);
	cout << "�ּҴ�?";
	cin.getline(place, 100);
	cout << "���̴�?";
	cin >> age;

	cout << name << ", " << place << ", " << age << "��";
}