#include <iostream>
#include <string>

using namespace std;

class Person {
	string name;
	string tel;
public:
	Person() {};
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};

void Person::set(string name, string tel)
{
	this->name = name;
	this->tel = tel;
}

int main()
{
	const int person_count = 3;

	Person* persons = new Person[person_count];

	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���\n";

	for (int i = 0; i < person_count; i++)
	{
		string info;

		string info_name;
		string info_telnumber;

		cout << "��� " << i+1 << " >> ";
		
		getline(cin,info);

		info_name = info.substr(0,info.find(' '));
		info_telnumber = info.substr(info.find(' ')+1);

		persons[i].set(info_name, info_telnumber);
	}

	cout << "��� ����� �̸��� ";

	for (int i = 0; i < person_count; i++)
	{
		cout << persons[i].getName() << ' ';
	}

	string find_name;

	cout << "\n��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ��� >>";

	cin >> find_name;

	for (int i = 0; i < person_count; i++)
	{
		if (find_name == persons[i].getName())
		{
			cout << "��ȭ��ȣ�� " << persons[i].getTel();
			break;
		}
	}

	delete[] persons;
}


