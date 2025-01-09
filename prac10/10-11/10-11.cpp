#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Book
{
	int year;
	string bookName;
	string writer;
public:
	Book(int year, string bookName, string writer)
	{
		this->year = year;
		this->bookName = bookName;
		this->writer = writer;
	}

	int getYear() { return year; }
	string getBookName(){ return bookName; }
	string getWriter() { return writer; }	
};

int main()
{
	vector<Book> books;

	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�.\n";
	
	int year;
	string bookName;
	string writer;

	while (true)
	{
		cout << "�⵵>>";
		cin >> year;

		if (year == -1) break;

		cin.ignore();
		cout << "å�̸�>>";
		getline( cin, bookName);

		cout << "����>>";
		getline(cin, writer);

		books.push_back(Book(year, bookName, writer));
	}

	cout << "�� �԰�� å�� " << books.size() << "���Դϴ�.\n";

	cout << "�˻��ϰ��� �ϴ� ���� �̸��� �Է¼���>>";

	string find;

	cin >> find;

	for (int i = 0; i < books.size(); i++)
	{
		if (books[i].getWriter() == find)
		{
			cout << books[i].getYear() << "�⵵, " << books[i].getBookName() << books[i].getWriter() << '\n';
			break;
		}
	}

	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է¼���>>";

	int year_find;

	cin >> year_find;

	for (int i = 0; i < books.size(); i++)
	{
		if (books[i].getYear() == year_find)
		{
			cout << books[i].getYear() << "�⵵, " << books[i].getBookName() << books[i].getWriter() << '\n';
			break;
		}
	}

	return 0;
}