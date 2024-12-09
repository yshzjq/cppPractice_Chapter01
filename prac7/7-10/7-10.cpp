#include <iostream>	
#include <string>

using namespace std;

class Statistics
{
	int* num;
	int idx = 0;
public:
	Statistics() { num = new int[100]; }
	~Statistics() { delete[] num; }

	Statistics(const Statistics& s) 
	{
		this->idx = s.idx;
		this->num = new int[100];
		for (int i = 0; i < idx; i++)
		{
			num[i] = s.num[i];
		}

	}

	/*bool operator!()
	{
		if (idx == 0) return true;
		return false;
	}
	Statistics& operator << (int x)
	{
		num[idx] = x;
		idx++;
		return *this;
	}
	void operator >> (int& x)
	{
		int avg = 0;

		for (int i = 0; i < idx; i++)
		{
			avg += num[i];
		}
		avg /= idx;
		x = avg;
	}
	void operator~()
	{
		for (int i = 0; i < idx; i++)
		{
			cout << num[i] << ' ';
		}
		cout << '\n';
	}*/

	friend bool operator!(Statistics& s);
	friend Statistics& operator << (Statistics& s, int x);
	friend void operator>>(Statistics& s, int& x);
	friend void operator~(Statistics s);
};

bool operator!(Statistics& s)
{
	if(s.idx == 0) return false;
	return true;
}

Statistics& operator<<(Statistics& s, int x)
{
	s.num[s.idx] = x;
	s.idx++;
	return s;

}

void operator>>(Statistics& s, int& avg)
{
	int sum = 0;
	for (int i = 0; i < s.idx; i++)
	{
		sum += s.num[i];
	}
	avg = sum / s.idx;
}

void operator~(Statistics s)
{
	for (int i = 0; i < s.idx; i++)
	{
		cout << s.num[i] << ' ';
	}
	cout << '\n';
}

int main()
{
	Statistics stat;
	if (!stat) cout << "���� ��� ����Ÿ�� �����ϴ�. " << endl;
	int x[5];
	cout << "5 ���� ������ �Է��϶�>>";
	for (int i = 0; i < 5; i++) cin >> x[i]; // x[i]�� �����Է�
	for (int i = 0; i < 5; i++) stat << x[i]; // x[i] ���� ��� ��ü�� �����Ѵ�.
	stat << 100 << 200; // 100, 200�� ��� ��ü�� �����Ѵ�.
	~stat; // ��� ����Ÿ�� ��� ����Ѵ�.
	int avg;
	stat >> avg; // ��� ��ü�κ��� ����� �޴´�.
	cout << "avg=" << avg << endl; // ���������Ѵ�

	return 0;
}

