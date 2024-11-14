#ifndef WORDGAME_H
#define WORDGAME_H

#include <iostream>
#include <string>

#include "Player.h"

using namespace std;

// �����ձ� ���� ��ü�� ��ϴ� Ŭ����
class WordGame
{
	Player player;
public:
	WordGame();

	void Start(string startWord);

	bool WordCheck(string ansWord,string checkWord);

	void End(string playerName);
};

#endif 