#include "Game.h"
#include <string>
using namespace std;

Game::Game()
{
	human = new Human(0, 0);
	monster = new Monster(5, 4);
	food = new Food(8, 4);

	string winner;

	cout << "** Human의 Food 먹기 게임을 시작합니다. **" << endl;
	while (true) {
		showState();
		human->move();
		if (human->collide(food)) {
			winner = "Human";
			break;
		}
		else if (human->collide(monster)) {
			winner = "Monster";
			break;
		}

		monster->move();
		if (monster->collide(human)) {
			winner = "Monster";
			break;
		}

		food->move();
	}
	cout << winner << " is Winner!!" << endl;
}

void Game::showState()
{
	GameObject** objects = new GameObject * [3];
	objects[0] = (GameObject*)human;
	objects[1] = (GameObject*)monster;
	objects[2] = (GameObject*)food;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			bool isDraw = false;
			for (int k = 0; k < 3; k++) {
				if (objects[k]->getX() == j && objects[k]->getY() == i) {
					cout << objects[k]->getShape();
					isDraw = true;
					break;
				}
			}
			if (!isDraw)
				cout << '-';
		}
		cout << endl;
	}
}
