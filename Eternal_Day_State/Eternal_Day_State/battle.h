#pragma once
#include "roll.h"
#include "character.h"

class battle {
public:

	int dmg; // 傷害值
	roll character;
	roll enemy;

	// 攻擊:輸入傷害加值、傷害骰、鬥毆等級、是否穿刺；輸出傷害
	void attack(Player attacker, Player defender, bool pierce) {

		// 隨機角色的鬥毆與敵人的反擊成功度
		srand(time(NULL));
		character.check(attacker.get_skill().Brawl);
		enemy.check(defender.get_skill().Brawl);

		// 計算角色傷害加值
		if (attacker.get_ability().DB <= 0) {
			db = attacker.get_ability().DB;
		}
		else {
			db = rand() % attacker.get_ability().DB + 1;
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
				dmg = rand() % attacker.get_ability().DMG + 1 + db;
			}
			else {

				// 判斷穿刺傷害
				if (pierce) {
					dmg = rand() % attacker.get_ability().DMG + 1 + attacker.get_ability().DMG + attacker.get_ability().DB;
				}
				else {
					dmg = attacker.get_ability().DMG + attacker.get_ability().DB;
				}
			}
		}
		// 反擊成功
		else {
			atk_success = false;
			dmg = rand() % defender.get_ability().DB + 1;
		}
	}

	// 閃避:輸入閃避等級、敵人鬥毆等級、敵人傷害骰；敵人傷害加成
	int evade(Player attacker, Player defender) {
		// 隨機角色的閃避與敵人的鬥毆成功度
		srand(time(NULL));
		character.check(defender.get_skill().Evade);
		enemy.check(attacker.get_skill().Brawl);

		// 做閃避與鬥毆的對抗檢定
		if (character.success >= enemy.success) {
			atk_success = false;
		}
		else {
			atk_success = true;

			// 計算角色傷害加值
			if (attacker.get_ability().DB <= 0) {
				db = attacker.get_ability().DB;
			}
			else {
				db = rand() % attacker.get_ability().DB + 1;
			}

			// 判斷成功程度
			if (enemy.success == 0) {
				dmg = 0;
			}
			else if (enemy.success == 1 || enemy.success == 2) {
				dmg = rand() % attacker.get_ability().DMG + 1 + db;
			}
			else {
				dmg = attacker.get_ability().DMG + attacker.get_ability().DB;
			}
		}
	}

	// 反擊:輸入鬥毆等級、角色傷害骰、敵人鬥毆等級、敵人傷害骰；敵人傷害加成
	int Evade(Player attacker, Player defender) {
		// 隨機角色的閃避與敵人的鬥毆成功度
		srand(time(NULL));
		character.check(defender.get_skill().Brawl);
		enemy.check(attacker.get_skill().Brawl);

		// 做反擊與鬥毆的對抗檢定
		if (character.success > enemy.success) {
			atk_success = false;
			dmg = rand() % defender.get_ability().DMG + 1;
		}
		else {
			atk_success = true;

			// 計算敵人傷害加值
			if (attacker.get_ability().DB <= 0) {
				db = attacker.get_ability().DB;
			}
			else {
				db = rand() % attacker.get_ability().DB + 1;
			}

			// 判斷成功程度
			if (enemy.success == 0) {
				dmg = 0;
			}
			else if (enemy.success == 1 || enemy.success == 2) {
				dmg = rand() % attacker.get_ability().DMG + 1 + db;
			}
			else {
				dmg = attacker.get_ability().DMG + attacker.get_ability().DB;
			}
		}
	}

private:
	bool atk_success; // 攻擊是否成功
	int db; // DB隨機結果

};