#pragma once
#include "roll.h"

class battle {
public:

	int dmg; // �ˮ`��
	roll character;
	roll enemy;

	// ����:��J�ˮ`�[�ȡB�ˮ`��B���޵��šB�O�_���F��X�ˮ`
	void attack(int DB, int Dmg, int Brawl, bool pierce, int Enemy_Brawl, int Enemy_Dmg) {
		
		// �H�����⪺���޻P�ĤH���������\��
		srand(time(NULL));
		character.check(Brawl);
		enemy.check(Enemy_Brawl);

		// �p�⨤��ˮ`�[��
		if (DB <= 0) {
			db = DB;
		}
		else {
			db = rand() % DB + 1;
		}

		// �������P���ު�����˩w
		// �������\
		if (character.success >= enemy.success) {
			atk_success = true;

			// �P�_���\�{��
			if (character.success == 0) {
				dmg = 0;
			}
			else if (character.success == 1 || character.success == 2) {
				dmg = rand() % Dmg + 1 + db;
			}
			else {

				// �P�_���ˮ`
				if (pierce) {
					dmg = rand() % Dmg + 1 + Dmg + DB;
				}
				else {
					dmg = Dmg + DB;
				}
			}
		}
		// �������\
		else {
			atk_success = false;
			dmg = rand() % Enemy_Dmg + 1;
		}
	}
	int evade(int Evade, int Enemy_Brawl, int Enemy_Dmg) {
		srand(time(NULL));
		character.check(Evade);
		enemy.check(Enemy_Brawl);

		if (character.success >= enemy.success) {

		}
	}

private:
	bool atk_success; // �����O�_���\
	int db; // DB�H�����G

};