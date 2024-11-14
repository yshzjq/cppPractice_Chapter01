#include <iostream>
#include <random>
using namespace std;

class Random
{
	random_device rd;
public:
	int next();
	int nextInRange(int min, int max);
};

int Random::next()
{
	mt19937 gen(rd());
	uniform_int_distribution<> dis(0, RAND_MAX);

	int result;

	while (true)
	{
		result = dis(gen);
		if (result % 2 == 0) return result;
	}
}

int Random::nextInRange(int min, int max)
{
	mt19937 gen(rd());
	uniform_int_distribution<> dis(min, max);

	int result;

	while (true)
	{
		result = dis(gen);
		if (result % 2 == 1) return result;
	}

}

int main()
{
	Random r;

	cout << "--0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2���� " << "9 ������ ���� Ȧ�� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}


