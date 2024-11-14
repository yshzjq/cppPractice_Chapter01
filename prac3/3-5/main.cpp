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
	return dis(gen);

}

int Random::nextInRange(int min,int max)
{
	mt19937 gen(rd());
	uniform_int_distribution<> dis(min, max);
	return dis(gen);

}

int main()
{
	Random r;

	cout << "--0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++)
	{
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2���� " << "4 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}


