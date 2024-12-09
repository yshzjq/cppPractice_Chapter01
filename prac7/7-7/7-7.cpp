#include <iostream>	
#include <string>

using namespace std;

class Matrix
{
	int x1, y1, x2, y2;
public:
	Matrix(int x1, int y1, int x2, int y2) { this->x1 = x1, this->y1 = y1, this->x2 = x2, this->y2 = y2; }
	Matrix() : Matrix(0, 0, 0, 0) {};

	/*void operator>>(int* arr)
	{
		arr[0] = x1;
		arr[1] = y1;
		arr[2] = x2;
		arr[3] = y2;
	};
	void operator << (int* arr)
	{
		x1 = arr[0];
		y1 = arr[1];
		x2 = arr[2];
		y2 = arr[3];
	}*/

	friend void operator>>(Matrix m,int* arr);
	friend void operator<<(Matrix& m, int* arr);

	void show()
	{
		cout << "Matrix = { " << x1 << ' ' << y1 << ' ' << x2 << ' ' << y2 << " }\n";
	}

};

void operator>>(Matrix m, int* arr)
{
	arr[0] = m.x1;
	arr[1] = m.y1;
	arr[2] = m.x2;
	arr[3] = m.y2;
}

void operator<<(Matrix& m, int* arr)
{
	m.x1 = arr[0];
	m.y1 = arr[1];
	m.x2 = arr[2];
	m.y2 = arr[3];
}


int main()
{
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = {1, 2, 3, 4}; // 2���� ����� 4 ���� ���� ��
	a >> x; // a�� �����Ҹ��迭 X������. x[]�� {4,3,2,1}
	b << y; // �迭 y�� ���� ���� b�� �� ���ҿ� ����
	for (int i = 0; i < 4; i++) cout << x[i] << ' '; // x[] ���
	cout << endl;
	b.show();
}


