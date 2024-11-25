#include <iostream>
#include <random>
#include <string>

using namespace std;

class UpAndDownGame
{
	static int num;
	static int up;
	static int down;

	static string player1;
	static string player2;

	static bool turn;

public:
	UpAndDownGame();
	void start();
};

UpAndDownGame::UpAndDownGame()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<> dis(0, 99);

	num = dis(gen);

}

int UpAndDownGame::up = 99;
int UpAndDownGame::down = 0;
int UpAndDownGame::num = 0;

string UpAndDownGame::player1 = "���μ�";
string UpAndDownGame::player2 = "������";

bool UpAndDownGame::turn = false;

void UpAndDownGame::start()
{
	cout << "������ �����մϴ�." << '\n';

	while (true)
	{
		cout << "���� " << down << "�� " << up << "���̿� �ֽ��ϴ�.\n";

		if (turn = !turn) cout << player1 << ">>";
		else cout << player2 << ">>";

		int n;

		cin >> n;

		if (num == n)
		{
			if(turn) cout << player1 << "�� �̰���ϴ�!!";
			else cout << player2 << "�� �̰���ϴ�!!";
			break;
		}
		else
		{
			if (num < n)
			{
				up = n;
			}
			else
			{
				down = n;
			}
		}
	}
}

int main()
{
	UpAndDownGame game;

	game.start();

	return 0;
}

