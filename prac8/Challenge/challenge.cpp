#include <iostream>

using namespace std;

class Product
{
	int id;
	string des;
	string producter;
	int price;

	string type;
public:
	Product(int id, string des, string producter, int price, string type)
	{
		this->id = id;
		this->des = des;
		this->producter = producter;
		this->price = price;

		this->type = type;
	}

	void ProductShow()
	{
		cout << "---- ��ǰID : " + id << '\n';
		cout << "��ǰ���� : " << des << '\n';
		cout << "������ : " << producter << '\n';
		cout << "���� : " << price << '\n';
	}

	string getType()
	{
		return type;
	}
};

class Book : public Product
{
	int ISBN;
	string writer;
	string title;
public:
	Book(int id, string des, string producter, int price, int ISBN, string writer, string title, string type = "Book") : Product(id, des, producter, price, type)
	{
		this->ISBN = ISBN;
		this->writer = writer;
		this->title = title;
	}

};

class CompactDisc : public Product
{
	string title;
	string singer_name;
public:
	CompactDisc(int id, string des, string producter, int price, string title, string singer_name) : Product(id,des,producter,price,"CD")
	{
		this->title = title;
		this->singer_name = singer_name;
	};

	void CDshow()
	{
		cout << "�ٹ����� : " << title << '\n';
		cout << "���� : " << singer_name << '\n';
	}
};

class ConversationBook : public Book
{
	string language;
public:
	ConversationBook(int id, string des, string producter, int price, int ISBN, string writer, string title,string language) : Book(id, des, producter, price,ISBN,writer,title, "CBook")
	{
		this->language = language;
	}
};

int main()
{
	int idx = 0;

	Product* product[100];

	cout << "***** ��ǰ ���� ���α׷��� �۵��մϴ�. *****\n";

	while (true)
	{
		int n;
		cout << "��ǰ �߰�(1), ��� ��ǰ ��ȸ(2), ������(3) ? ";
		cin >> n;

		if (n == 1)
		{
			cout << "��ǰ ���� å(1), ����CD(2), ȸȭå(3) ? ";
			cin >> n;
			
			string des;
			string producter;
			int price;
			int ISBN;
			string writer;
			string title;
			string singer_name;
			string language;

			cout << "��ǰ����>>";
			cin >> des;
			cout << "������>>";
			cin >> producter;
			cout << "����>>";
			cin >> price;

			if (n == 2)
			{
				cout << "�ٹ�����>>";
				cin >> title;
				cout << "����>>";
				cin >> singer_name;

				CompactDisc cd = CompactDisc(idx, des, producter, price, title, singer_name);

				product[idx] = (Product*)&cd;
			}
			else
			{
				cout << "å����>>";
				cin >> title;
				cout << "����>>";
				cin >> writer;
				if (n == 3)
				{
					cout << "���>>";
					cin >> language;
				}
				cout << "ISBN>>";
				cin >> ISBN;

				if (n == 3)
				{
					ConversationBook cbook = ConversationBook(idx, des, producter, price,ISBN, title, writer, language);
					product[idx] = (Product*)&cbook;
				}
				else if (n == 2)
				{
					Book book = Book(idx, des, producter, price, ISBN, title, writer);
					product[idx] = (Product*)&book;
				}
			}
		}
		else if (n == 2) // ��� ��ǰ ��ȸ
		{
			for (int i = 0; i < idx; i++)
			{
				product[idx]->ProductShow();

				if (product[idx]->getType() == "CD")
				{
					CompactDisc* cd = (CompactDisc*)product[idx];
					cd->CDshow();
				}
				else if (product[idx]->getType() == "Book")
				{

				}
				else if (product[idx]->getType() == "CBook")
				{

				}

			}
		}
		else // ������
		{
			break;
		}

		idx++;
	}






	return 0;
}