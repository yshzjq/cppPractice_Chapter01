#include <iostream>


using namespace std;

class Random {
public:
	// �׻� �ٸ� �������� �߻���Ű�� ���� seed�� �����ϴ� �Լ�
	static void seed() { srand((unsigned)time(0)); } // ���� ����
	static int nextInt(int min = 0, int max = 32767); // min�� max ������ ���� ���: ���� 
	static char nextAlphabet(); // ���� ���ĺ� ���� ����
	static double nextDouble(); // 0���� ũ�ų� ���� 1���� ���� ���� �Ǽ� ����
};

int Random::nextInt(int min, int max)
{
	return (rand()%(max-min + 1)) + min;
}

char Random::nextAlphabet()
{
	return (rand() % ('Z' - 'A' + 1)) + 'A';
}

double Random::nextDouble()
{
	return static_cast<double>(rand()) / RAND_MAX;
}

int main()
{
	Random random;

	cout << "1���� 100���� ������ ���� 10���� ����մϴ�\n";

	for (int i = 0; i < 10; i++)
	{
		cout << random.nextInt(1,100) << ' ';
	}

	cout << "\n���ĺ��� �����ϰ� 10���� ����մϴ�\n";

	for (int i = 0; i < 10; i++)
	{
		cout << random.nextAlphabet() << ' ';
	}

	cout << "\n������ �Ǽ��� 10���� ����մϴ�\n";

	for (int i = 0; i < 10; i++)
	{
		cout << random.nextDouble() << ' ';
	}

	return 0;
}

