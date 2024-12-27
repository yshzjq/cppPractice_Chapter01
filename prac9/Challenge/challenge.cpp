#include <iostream>

using namespace std;

class GameObject { // �߻�Ŭ����
protected:
	int distance; // �� �� �̵� �Ÿ�
	int x, y; // ���� ��ġ
public:
	GameObject(int startX, int startY, int distance) { // �ʱ���ġ�� �̵��Ÿ� ����
		this->x = startX; this->y = startY;
		this->distance = distance;
	}
	virtual ~GameObject() {}; // ����ҿ���
	virtual void move() = 0; // �̵��� �� ���ο� ��ġ�� x, �� ����
	virtual char getShape() = 0; // ��ü�� ����� ��Ÿ���� ���� ����
	int getX() { return x; }
	int getY() { return y; }
	bool collide(GameObject* p) { // �� ��ü�� ��ü p�� �浹������ true ����
		if (this->x == p->getX() && this->y == p->getY())
			return true;
		else
			return false;
	}
};

class Human : public GameObject
{
	char shape;
public:

	Human(int x,int y,int dis,char shape) : GameObject(x,y,dis) { // �ʱ���ġ�� �̵��Ÿ� ����
		this->shape = shape;
	}

	virtual void move() 
	{
		char command;

		cout << "����(a), �Ʒ�(s), ����), ������ (f) >> ";

		cin >> command;
	
		switch (command)
		{
			case 'a': 
			{ 
				x--; 
				break;
			}
			case 'd': 
			{
				x++;
				break;
			}
			case 'w': 
			{
				y++;
				break;
			}
			case 's':
			{
				y--;
				break;
			}
		}
	};
	virtual char getShape() { return shape; }
};

class Field {

	char** field;

	int xsize;
	int ysize;
public:
	Field(int x, int y) 
	{ 
		this->xsize = x;
		this->ysize = y; 

		field = new char*[x];

		for (int i = 0; i < x; i++)
		{
			field[i] = new char[y];
		}

		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				field[i][j] = '-';
			}
		}
	}

	void add(GameObject* gameObject)
	{
		field[gameObject->getX()][gameObject->getY()] = gameObject->getShape();
	}

	void move(GameObject* gameObject)
	{
		if(gameObject->getX() == -1)
	}

	void show()
	{
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				cout << field[i][j];
			}
			cout << '\n';
		}
	}
};

int main()
{
	Field field(10, 20);

	GameObject* human = new Human(0, 0, 1, 'H');
	field.add(human);

	field.show();

	while (true)
	{
		human->move();

		field.show();
	}
}