#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

// ������ ǥ���ϴ� Ŭ����
class Player
{
	int player_cnt;

	string player_name;
	string* player_names;
public:
	Player() { player_cnt = 0; }

	void SetPlayerCnt(int player_name);
	void SetPlayersNames();

	int getPlayerCnt();

	string getPlayerName(int playerNum);
};

#endif