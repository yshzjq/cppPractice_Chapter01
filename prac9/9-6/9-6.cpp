#include <iostream>

using namespace std;

class AbstractStack {
public:
	virtual bool push(int n) = 0; // ���ÿ� n��Ǫ���Ѵ�. ������ full�̸� false ����
	virtual bool pop(int& n) = 0; // ���ÿ��� ���� ������ n�� �����ϰ� ������ emptyO]�� false ����

	virtual int size() = 0; // ���� ���ÿ� ����� ������ ���� ����
};

class IntStack : public AbstractStack
{
	int idx = 0;

	int capacity;
	int* stack;
public:
	IntStack(int capacity) 
	{ 
		this->capacity = capacity; 
		stack = new int[capacity];
	}

	~IntStack() { delete[] stack; }

	bool push(int n) override
	{
		if (idx == capacity) return false;
		stack[idx++] = n;
		return true;
	}

	bool pop(int& n) override
	{
		if (idx == 0)
		{
			n = -1;
			return false;
		}
		n = stack[--idx];
		return true;
	}

	int size() { return idx; }


};


int main()
{
	IntStack stack(5);

	for (int i = 0; i < 6; i++)
	{
		cout << stack.push(i * 2);

		cout << "  " << stack.size() << '\n';
	}

	

	int n;

	for (int i = 0; i < 6; i++)
	{
		cout << stack.pop(n) << "  ";
		cout << n << '\n';
	}

	cout << stack.size();

	return 0;
}