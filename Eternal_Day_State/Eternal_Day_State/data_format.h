#pragma once
struct position {
	int x;
	int y;
};
struct size {
	int width;
	int heigth;
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
struct ability {
	int STR;
	int CON;
	int DEX;
	int POW;
	int APP;
	int EDU;
	int INT;
	int SIZ;
	int LUK;
	int SAN;
	int HP;
	int MP;
	int DB;
	int DMG;
};
struct skill {
	int Spot;
	int Listen;
	int Library;
	int Brawl;
	int Evade;
	int History;
	int Occult;
	int Psycology;
	int Biology;
	int Archaeology;
	int Medicine;
};