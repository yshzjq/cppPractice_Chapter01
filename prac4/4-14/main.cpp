#include <iostream>
#include <string>
#include <random>

using namespace std;

class Player
{
	string name;
public:
	Player(string name) { this->name = name; }
	string getName() { return name; }
};

class GamblinGame
{
	Player* players;
public:
	void GameStart();
};

void GamblinGame::GameStart()
{
	// �õ� 
	random_device rd;

	mt19937 gen(rd());
	uniform_int_distribution<> dis(0, RAND_MAX);
	//

	cout << " ***** ���� ������ �����մϴ�. *****\n";

	string player1, player2;

	cout << "ù��° ���� �̸�>>";
	cin >> player1;

	cout << "�ι�° ���� �̸�>>";
	cin >> player2;

	players = new Player[2]{player1,player2};

	int Turn = 0;

	int num[3];

	cin.ignore();

	while (true)
	{
		Turn %= 2;

		cout << players[Turn].getName() << ":<Enter>";

		getchar();

		cout << "\t\t\t";

		for (int i = 0; i < 3; i++)
		{
			num[i] = rand() % 3;
			cout << num[i];
			cout << '\t';
		}

		if (num[0] == num[1] && num[1] == num[2])
		{
			cout << players[Turn].getName() << "�� �¸�!!";
			break;
		}
		else
			cout << "�ƽ�����!\n";

		Turn++;
	}
}


int main()
{
	GamblinGame gamblingame;

	gamblingame.GameStart();
}

