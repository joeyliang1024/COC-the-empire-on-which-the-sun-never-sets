#pragma once
#include "data_format.h"
class Character {
public:
	char* get_path();
	struct position get_position();
	void edit_position(int posX, int posY);
	struct size get_size();
	void edit_size(int Width, int Height);
	bool IsEnable();
	struct ability get_ability();
protected:
	char* data_path;
	ability ability;
	size size;
	position pos;
}; 
class Player:public Character {
public:
	Player(char* picture_path, int str, int dex, int Int, int con, int app, int pow, int siz, int san, int edu, int luck, int hp, int mp, int db, int spot, int listen, int library, int brawl, int evade, int history, int occult, int psycology, int biology, int archaeology, int medicine, int dmg) {
		this->data_path = picture_path;
		this->ability.STR = str;
		this->ability.DEX = dex;
		this->ability.INT = Int;
		this->ability.CON = con;
		this->ability.APP = app;
		this->ability.POW = pow;
		this->ability.SIZ = siz;
		this->ability.SAN = san;
		this->ability.EDU = edu;
		this->ability.LUK = luck;
		this->ability.HP = hp;
		this->ability.MP = mp;
		this->ability.DB = db;
		this->skill.Spot = spot;
		this->skill.Listen = listen;
		this->skill.Library = library;
		this->skill.Brawl = brawl;
		this->skill.Evade = evade;
		this->skill.History = history;
		this->skill.Occult = occult;
		this->skill.Psycology = psycology;
		this->skill.Biology = biology;
		this->skill.Archaeology = archaeology;
		this->skill.Medicine = medicine;
		this->ability.DMG = dmg;
	}
	bool collsion(int ButtonX, int ButtonY) {
		float dis = (pos.x - ButtonX) * (pos.x - ButtonX) + (pos.y - ButtonY) * (pos.y - ButtonY);
		if (dis < 100) {
			//collosion
			return true;
		}
		else{
			return false;
		}
	}
	struct skill get_skill();
private:
	skill skill;
};
class NPC :public Character {
public:
	NPC(char* picture_path, int str, int dex, int Int, int con, int app, int pow, int siz, int san, int edu, int luck, int hp, int mp, int db, int dmg) {
		this->ability.STR = str;
		this->ability.DEX = dex;
		this->ability.INT = Int;
		this->ability.CON = con;
		this->ability.APP = app;
		this->ability.POW = pow;
		this->ability.SIZ = siz;
		this->ability.SAN = san;
		this->ability.EDU = edu;
		this->ability.LUK = luck;
		this->ability.HP = hp;
		this->ability.MP = mp;
		this->ability.DB = db;
		this->ability.DMG = dmg;
	}
};