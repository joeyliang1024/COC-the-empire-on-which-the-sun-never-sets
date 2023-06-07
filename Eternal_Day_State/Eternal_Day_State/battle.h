#pragma once
#include "roll.h"

class battle {
public:
	int turn = 0;
	int dmg; // �ˮ`��
	roll character;
	roll enemy;
	bool atk_success; // �����O�_���\

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
	// �{��:��J�{�׵��šB�ĤH���޵��šB�ĤH�ˮ`��F�ĤH�ˮ`�[��
	void evade(int Evade, int Enemy_Brawl, int Enemy_Dmg, int Enemy_DB) {
		// �H�����⪺�{�׻P�ĤH�����ަ��\��
		srand(time(NULL));
		character.check(Evade);
		enemy.check(Enemy_Brawl);

		// ���{�׻P���ު�����˩w
		if (character.success >= enemy.success) {
			atk_success = false;
		}
		else {
			atk_success = true;

			// �p�⨤��ˮ`�[��
			if (Enemy_DB <= 0) {
				db = Enemy_DB;
			}
			else {
				db = rand() % Enemy_DB + 1;
			}

			// �P�_���\�{��
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

	// ����:��J���޵��šB����ˮ`��B�ĤH���޵��šB�ĤH�ˮ`��F�ĤH�ˮ`�[��
	void counter_attack(int Brawl, int Dmg, int Enemy_Brawl, int Enemy_Dmg, int Enemy_DB) {
		// �H�����⪺�{�׻P�ĤH�����ަ��\��
		srand(time(NULL));
		character.check(Brawl);
		enemy.check(Enemy_Brawl);

		// �������P���ު�����˩w
		if (character.success > enemy.success) {
			atk_success = false;
			dmg = rand() % Dmg + 1;
		}
		else {
			atk_success = true;

			// �p��ĤH�ˮ`�[��
			if (Enemy_DB <= 0) {
				db = Enemy_DB;
			}
			else {
				db = rand() % Enemy_DB + 1;
			}

			// �P�_���\�{��
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
	
	int db; // DB�H�����G

};