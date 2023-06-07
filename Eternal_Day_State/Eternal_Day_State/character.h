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
	void assign_ability(struct ability Ability);
	void edit_ability(char* ability_to_edit, int change);
	void change_label_text(char* para_to_edit, System::Windows::Forms::Label^ label);
protected:
	char* data_path;
	ability ability;
	size size;
	position pos;
};
class Player :public Character {
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
	bool collsion(int ButtonX, int ButtonY);
	struct skill get_skill();
	void assign_skill(struct skill Skill);
	void edit_skill(char* skill_to_edit, int change);
	void skill_change_label_text(char* para_to_edit, System::Windows::Forms::Label^ label);
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