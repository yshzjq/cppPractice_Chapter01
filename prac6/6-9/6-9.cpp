#include <iostream>
#include <string>

using namespace std;

class Board
{
public:
	static string str[100];
	static int idx;
	static void add(string command);
	static void print();
};

string Board::str[100] = {};

int Board::idx = 0;

void Board::add(string command)
{
	str[idx] = to_string(idx) + ": " + command;
	idx++;
}

void Board::print()
{
	cout << "************** �Խ����Դϴ�. **************\n";

	for (int i = 0;i<idx;i++)
	{
		cout << str[i] << '\n';
	}
}


int main() {
	// Board myBoard; // ��ü ������ ������ �����Դϴ�.
	Board::add("�������� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}

