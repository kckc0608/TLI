#include "UpAndDownGame.h"
// static변수는 여기에서 미리 이렇게 초기화 해줘야 한다.
int UpAndDownGame::answer = -1;
int UpAndDownGame::row_range = 0;
int UpAndDownGame::high_range = 100;
int UpAndDownGame::num = 0;

void UpAndDownGame::CreateAnswer()
{
	srand((unsigned)time(0));
	answer = rand() % 100;
}

void UpAndDownGame::ShowRange()
{
	cout << "답은 " << row_range << "과 " << high_range << "사이에 있습니다." << endl;
}

void UpAndDownGame::GetAnswer(Player p)
{ 
	num = p.getAnswer(); 
}

void UpAndDownGame::StartGame()
{
	int turn = 0;
	cout << "Up & Down 게임을 시작합니다." << endl;
	CreateAnswer();

	Player player[2] = { Player("김인수"), Player("오은경") };

	while (true) {
		ShowRange();
		GetAnswer(player[turn]);
		if (num == answer) {
			cout << player[turn].getName() << "가 이겼습니다!!" << endl;
			break;
		}
		else if (num > answer && num < high_range)
			high_range = num;
		else if (num < answer && num > row_range)
			row_range = num;

		turn++;
		turn %= 2;
	}
}
