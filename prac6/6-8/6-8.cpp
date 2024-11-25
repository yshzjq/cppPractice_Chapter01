#include <iostream>
#include <string>

using namespace std;

class Trace
{
public:
	static string debugs[100];
	static int didx;
	static void put(string tag, string debug);
	static void print(string tag = "All");
};

string Trace::debugs[100] = { "" };

int Trace::didx = 0;

void Trace::put(string tag, string debug)
{
	debugs[didx] = tag + ":" + debug;
	didx++;
}

void Trace::print(string tag)
{
	if (tag == "All")
	{
		cout << "-----" <<  "��� Trace ������ ����մϴ�. -----\n";
		for (int i = 0;i<didx;i++)
		{
			cout << debugs[i] << '\n';
		}
	}
	else
	{
		cout << "-----" << tag << "�±��� Trace ������ ����մϴ�. -----\n";
		for (int i = 0; i < didx; i++)
		{
			if (debugs[i].find(tag) == 0)
			{
				cout << debugs[i] << '\n';
			}
		}

	}
}

void f() {
	int a, b, c;
	cout << "�� ���� ������ �̷��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}

int main()
{
	Trace::put("main()", "���α׷� �����մϴ�");
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();
}


