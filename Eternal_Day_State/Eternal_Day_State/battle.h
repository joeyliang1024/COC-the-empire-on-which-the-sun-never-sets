#pragma once
#include "roll.h"

class battle {
public:
	int turn = 0;
	int dmg; // 傷害值
	roll character;
	roll enemy;
	bool atk_success; // 攻擊是否成功

	// 攻擊:輸入傷害加值、傷害骰、鬥毆等級、是否穿刺；輸出傷害
	void attack(int DB, int Dmg, int Brawl, bool pierce, int Enemy_Brawl, int Enemy_Dmg) {

		// 隨機角色的鬥毆與敵人的反擊成功度
		srand(time(NULL));
		character.check(Brawl);
		enemy.check(Enemy_Brawl);

		// 計算角色傷害加值
		if (DB <= 0) {
			db = DB;
		}
		else {
			db = rand() % DB + 1;
		}

		// 做反擊與鬥毆的對抗檢定
		// 攻擊成功
		if (character.success >= enemy.success) {
			atk_success = true;

			// 判斷成功程度
			if (character.success == 0) {
				dmg = 0;
			}
			else if (character.success == 1 || character.success == 2) {
				dmg = rand() % Dmg + 1 + db;
			}
			else {
				// 判斷穿刺傷害
				if (pierce) {
					dmg = rand() % Dmg + 1 + Dmg + DB;
				}
				else {
					dmg = Dmg + DB;
				}
			}
		}
		// 反擊成功
		else {
			atk_success = false;
			dmg = rand() % Enemy_Dmg + 1;
		}
	}
	// 閃避:輸入閃避等級、敵人鬥毆等級、敵人傷害骰；敵人傷害加成
	void evade(int Evade, int Enemy_Brawl, int Enemy_Dmg, int Enemy_DB) {
		// 隨機角色的閃避與敵人的鬥毆成功度
		srand(time(NULL));
		character.check(Evade);
		enemy.check(Enemy_Brawl);

		// 做閃避與鬥毆的對抗檢定
		if (character.success >= enemy.success) {
			atk_success = false;
		}
		else {
			atk_success = true;

			// 計算角色傷害加值
			if (Enemy_DB <= 0) {
				db = Enemy_DB;
			}
			else {
				db = rand() % Enemy_DB + 1;
			}

			// 判斷成功程度
			if (enemy.success == 0) {
				dmg = 0;
			}
			else if (enemy.success == 1 || enemy.success == 2) {
				dmg = rand() % Enemy_Dmg + 1 + db;
			}
			else {
				dmg = Enemy_Dmg + Enemy_DB;
			}
		}
	}

	// 反擊:輸入鬥毆等級、角色傷害骰、敵人鬥毆等級、敵人傷害骰；敵人傷害加成
	void counter_attack(int Brawl, int Dmg, int Enemy_Brawl, int Enemy_Dmg, int Enemy_DB) {
		// 隨機角色的閃避與敵人的鬥毆成功度
		srand(time(NULL));
		character.check(Brawl);
		enemy.check(Enemy_Brawl);

		// 做反擊與鬥毆的對抗檢定
		if (character.success > enemy.success) {
			atk_success = false;
			dmg = rand() % Dmg + 1;
		}
		else {
			atk_success = true;

			// 計算敵人傷害加值
			if (Enemy_DB <= 0) {
				db = Enemy_DB;
			}
			else {
				db = rand() % Enemy_DB + 1;
			}

			// 判斷成功程度
			if (enemy.success == 0) {
				dmg = 0;
			}
			else if (enemy.success == 1 || enemy.success == 2) {
				dmg = rand() % Enemy_Dmg + 1 + db;
			}
			else {
				dmg = Enemy_Dmg + Enemy_DB;
			}
		}
	}

private:
	
	int db; // DB隨機結果

};