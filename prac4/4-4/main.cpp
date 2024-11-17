#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) { // ������
		size = n; p = new int[n]; // n�� ���� �迭�� ���� ����
	}
	void read(); // ���� �Ҵ���� ���� �迭
	void write(); // �����迭�� ȭ�鿡���
	int big(); // ���� �迭���� ���� ū �� ����
	~Sample(); // �ҿ���
};

void Sample::read()
{
	for (int i = 0; i < size; i++)
		cin >> p[i];
}

void Sample::write()
{
	for (int i = 0; i < size; i++) 
	{
		cout << p[i] << ' ';
	}
	cout << '\n';
}

int Sample::big()
{
	int biggest = p[0];

	for (int i = 1; i < size; i++)
	{
		if (biggest < p[i]) biggest = p[i];
	}

	return biggest;
}

Sample::~Sample()
{
	delete[] p;
}

int main() 
{
	Sample s(10); // 10�� ���� �迭�� ���� Sample ��ü ����
	s.read(); // Ű���忡�� ���� �迭 �б�
	s.write(); // �����迭���
	cout << "����ū���� " << s.big() << endl; // ����ū�����

	return 0;
}
