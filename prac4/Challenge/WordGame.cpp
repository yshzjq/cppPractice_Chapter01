#include "WordGame.h"

WordGame::WordGame()
{
	cout << "���� �ձ� ������ �����մϴ�\n";
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?";

	int player_cnt;

	cin >> player_cnt;

	player.SetPlayerCnt(player_cnt);
}

void WordGame::Start(string startWord)
{
	int playerTurnIdx = 0;
	int playerMaxIdx = player.getPlayerCnt();

	string givenWord = startWord;
	string ansWord;

	cout << "�����ϴ� �ܾ�� �ƹ��� �Դϴ�.\n";

	while (true)
	{
		cout << player.getPlayerName(playerTurnIdx) << ">>";

		cin >> ansWord;

		if (WordCheck(ansWord, givenWord))
		{
			playerTurnIdx++;
			playerTurnIdx %= playerMaxIdx;

			givenWord = ansWord;
			continue;
		}
		break;
	}

	// ���� �б� ����
	End(player.getPlayerName(playerTurnIdx));
}

bool WordGame::WordCheck(string answord, string checkWord)
{
	if (answord.at(0) == checkWord.at(checkWord.length() - 2) &&
		answord.at(1) == checkWord.at(checkWord.length() - 1))
	{
		return true;
	}

	return false;
}

void WordGame::End(string playerName)
{
	cout << playerName << "���� Ʋ�Ƚ��ϴ�.";
}
