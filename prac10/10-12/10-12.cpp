#include <iostream>
#include <random>
#include <vector>

using namespace std;

class Word
{
	string Kor;
	string Eng;
public:
	Word(string Kor, string Eng) { this->Kor = Kor; this->Eng = Eng; }

	string getKor() { return Kor; }
	string getEng() { return Eng; }
};


int main()
{



	cout << "���� ���� �׽�Ʈ�� �����մϴ�. 1~4 �� �ٸ� �Է½� �����մϴ�. \n";

	vector<Word> v;

	v.push_back(Word("��", "bear"));
	v.push_back(Word("�ŷ�", "trade"));
	v.push_back(Word("����", "emotion"));
	v.push_back(Word("�׸�", "painting"));
	v.push_back(Word("����", "animal"));
	v.push_back(Word("����", "photo"));
	v.push_back(Word("��ȸ", "social"));
	v.push_back(Word("���", "love"));
	v.push_back(Word("�Ʊ�", "baby"));
	v.push_back(Word("�ΰ�", "human"));
	v.push_back(Word("����", "doll"));

	random_device rd;
	mt19937 gen(rd());

	vector<Word> problems;

	
	
	while (true)
	{
		int n;
		cout << "���ֻ��� : 1, ���� �׽�Ʈ : 2, ���α׷�����:�׿�Ű >> ";
		cin >> n;
		
		

		if (n == 1)
		{
			cout << "���� �ܾ exit�� �Է��ϸ� �Է� ��\n";

			while (true)
			{

				string eng;
				cout << "���� >>";
				cin >> eng;

				if (eng == "exit") break;

				string kor;
				cout << "�ѱ� >>";
				cin >> kor;

				v.push_back(Word(kor, eng));
			}
			
		}
		else if (n == 2)
		{
			int* nums = new int[v.size()];
			while (true)
			{
				for (int i = 0; i < v.size(); ++i) nums[i] = 0;

				uniform_int_distribution<> dis(0, v.size() - 1);

				for (int i = 0; i < 4; i++)
				{
					int n = dis(gen);

					if (nums[n] == 0)
					{
						problems.push_back(v[n]);
						nums[n] = -1;
					}
					else
					{
						i--;
						continue;
					}
				}

				uniform_int_distribution<> dis1(0, 3);

				int correct = dis1(gen);

				cout << problems[correct].getEng() << "?\n";

				for (int i = 0; i < 4; i++)
				{
					cout << "(" << i + 1 << ") " << problems[i].getKor() << ' ';
				}

				cout << ":>";

				int answer;

				cin >> answer;
				if (answer == -1)
				{
					delete[] nums;
					break;
				}


				if (correct + 1 == answer)
				{
					cout << "Excellent !!" << '\n';
				}
				else
				{
					cout << "No. !!" << '\n';
				}
				problems.clear();
			}
		}
		else
		{
			return 0;
		}

		
	}

}