#pragma once
#include <stdio.h>
#include <stdlib.h> /* 亂數相關函數 */
#include <time.h>   /* 時間相關函數 */
#include <string.h>

//宣告是否判定與結果
int Observe_Signpost_Count = 9;
int Observe_Sundial_Count = 9;
int Observe_Stranger_Plazza_Count = 9;

class roll {
public:
	int success; // 判定結果(0: 失敗, 1: 成功, 2:困難成功, 3:極難成功)
	int rolling; // 擲骰結果
	// Check Category: 判定名稱(EX:觀察判定), Successful Rate: 判定成功率
	void check(int Successful_Rate) {
		// 產生亂數 
		srand(time(NULL));
		rolling = rand() % 100 + 1;

		// 確認判定是否成功
		if (rolling > Successful_Rate) {
			success = 0;
		}
		else if (rolling <= Successful_Rate/5) {
			success = 3;
		}
		else if (rolling <= Successful_Rate / 2) {
			success = 2;
		}
		else {
			success = 1;
		}
	}
};