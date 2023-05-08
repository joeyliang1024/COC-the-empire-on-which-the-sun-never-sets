#pragma once
struct position {
	int x;
	int y;
};
struct size {
	int width;
	int higth;
};
struct character {
	char name[30];
	int STR;
	int DEX;
	int CON;
	int APP;
	int POW;
	int SIZ;
	int SAN;
	int EDU;
	int LUCK;
	int HP;
	int MP;
	int DB;
};
struct items {
	char name[30];
	size siz;
	position pos;
	bool enable;
};
