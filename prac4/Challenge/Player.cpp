#include "Player.h"

void Player::SetPlayerCnt(int player_cnt)
{
	this->player_cnt = player_cnt;

	player_names = new string[player_cnt];

	SetPlayersNames();
}

void Player::SetPlayersNames()
{
	for (int i = 0; i < player_cnt; i++)
	{
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ ����>>";
		cin >> player_names[i];
	}
}

int Player::getPlayerCnt()
{
	return player_cnt;
}

string Player::getPlayerName(int playerNum)
{
	return player_names[playerNum];
}
