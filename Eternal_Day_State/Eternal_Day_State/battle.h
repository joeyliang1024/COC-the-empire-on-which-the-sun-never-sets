#pragma once
#include "roll.h"

class battle {
public:
	int dmg; // ¶Ë®`­È
	roll character;
	roll enemy;
	// §ðÀ»:¿é¤J¶Ë®`¥[­È¡B¶Ë®`»ë¡B°«¼Þµ¥¯Å¡B¬O§_¬ï¨ë¡F¿é¥X¶Ë®`
	int attack(int DB, int Dmg, int Brawl, bool pierce, int Enemy_Brawl, int Enemy_Dmg) {
		srand(time(NULL));
		character.check(Brawl);
		enemy.check(Enemy_Brawl);

		if (DB <= 0) {
			db = DB;
		}
		else {
			db = rand() % DB + 1;
		}
		if (character.success >= enemy.success) {
			atk_success = true;
			if (character.success == 0) {
				dmg = 0;
			}
			if (character.success == 1 || character.success == 2) {
				dmg = rand() % Dmg + 1 + db;
			}
			else {
				if (pierce) {
					dmg = rand() % Dmg + 1 + Dmg + DB;
				}
				else {
					dmg = Dmg + DB;
				}
			}
			return dmg;
		}
		else {
			atk_success = false;
			dmg = rand() % Enemy_Dmg + 1;
		}
	}
private:
	bool atk_success;
	int db;
};