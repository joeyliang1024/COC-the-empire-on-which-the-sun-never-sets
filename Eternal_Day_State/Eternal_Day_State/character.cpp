#include "pch.h"
#include "data_format.h"
#include "character.h"
#include <cstring>
char* Character::get_path() {
	return this->data_path;
}
struct position Character::get_position() {
	return this->pos;
}
void Character::edit_position(int posX, int posY) {
	this->pos.x = posX;
	this->pos.y = posY;
};
struct size Character::get_size() {
	return this->size;
};
struct skill Player::get_skill() {
	return this->skill;
};
struct ability  Character::get_ability() {
	return this->ability;
};
void Character::assign_ability(struct ability Ability) {
	this->ability = Ability;
};
void Player::assign_skill(struct skill Skill) {
	this->skill = Skill;
};
void Character::edit_size(int Width, int Height) {
	this->size.width = Width;
	this->size.heigth = Height;
};
bool Character::IsEnable() {
	/*
	if () {
		return 0;
	}
	else{
		return 1;
	}
	*/
	return 0;
}
void Character::edit_ability(char* ability_to_edit, int change) {
	// 쩳쩑ⓒΞ좥폻ⓕ쫜짾:
	// player.edit_ability({ "HP" }, -2);
	if (strcmp(ability_to_edit, "STR") == 0) {
		this->ability.STR = this->ability.STR + change;
	}
	else if (strcmp(ability_to_edit, "DEX") == 0) {
		this->ability.DEX = this->ability.DEX + change;
	}
	else if (strcmp(ability_to_edit, "INT") == 0) {
		this->ability.INT = this->ability.INT + change;
	}
	else if (strcmp(ability_to_edit, "CON") == 0) {
		this->ability.CON = this->ability.CON + change;
	}
	else if (strcmp(ability_to_edit, "APP") == 0) {
		this->ability.APP = this->ability.APP + change;
	}
	else if (strcmp(ability_to_edit, "POW") == 0) {
		this->ability.POW = this->ability.POW + change;
	}
	else if (strcmp(ability_to_edit, "SIZ") == 0) {
		this->ability.SIZ = this->ability.SIZ + change;
	}
	else if (strcmp(ability_to_edit, "SAN") == 0) {
		this->ability.SAN = this->ability.SAN + change;
	}
	else if (strcmp(ability_to_edit, "EDU") == 0) {
		this->ability.EDU = this->ability.EDU + change;
	}
	else if (strcmp(ability_to_edit, "LUK") == 0) {
		this->ability.LUK = this->ability.LUK + change;
	}
	else if (strcmp(ability_to_edit, "HP") == 0) {
		this->ability.HP = ability.HP + change;
	}
	else if (strcmp(ability_to_edit, "MP") == 0) {
		this->ability.MP = this->ability.MP + change;
	}
	else if (strcmp(ability_to_edit, "DB") == 0) {
		this->ability.DB = this->ability.DB + change;
	}
	else if (strcmp(ability_to_edit, "DMG") == 0) {
		this->ability.DMG = this->ability.DMG + change;
	}
};
void Player::edit_skill(char* skill_to_edit, int change) {
	// 쩳쩑ⓒΞ좥폻ⓕ쫜짾:
	// player.edit_skill({ "HP" }, -2);
	if (strcmp(skill_to_edit, "Spot") == 0) {
		this->skill.Spot = this->skill.Spot + change;
	}
	else if (strcmp(skill_to_edit, "Listen") == 0) {
		this->skill.Listen = this->skill.Listen + change;
	}
	else if (strcmp(skill_to_edit, "Library") == 0) {
		this->skill.Library = this->skill.Library + change;
	}
	else if (strcmp(skill_to_edit, "Brawl") == 0) {
		this->skill.Brawl = this->skill.Brawl + change;
	}
	else if (strcmp(skill_to_edit, "Evade") == 0) {
		this->skill.Evade = this->skill.Evade + change;
	}
	else if (strcmp(skill_to_edit, "History") == 0) {
		this->skill.History = this->skill.History + change;
	}
	else if (strcmp(skill_to_edit, "Occult") == 0) {
		this->skill.Occult = this->skill.Occult + change;
	}
	else if (strcmp(skill_to_edit, "Psycology") == 0) {
		this->skill.Psycology = this->skill.Psycology + change;
	}
	else if (strcmp(skill_to_edit, "Biology") == 0) {
		this->skill.Biology = this->skill.Biology + change;
	}
	else if (strcmp(skill_to_edit, "Archaeology") == 0) {
		this->skill.Archaeology = this->skill.Archaeology + change;
	}
	else if (strcmp(skill_to_edit, "HP") == 0) {
		this->skill.Medicine = skill.Medicine + change;
	}
};
void Character::change_label_text(char* para_to_edit, System::Windows::Forms::Label^ label) {
	// 쩳쩑ⓒΞ좥폻ⓕ쫜짾:
	// player.change_label_text({ "HP" },HP);
	if (strcmp(para_to_edit, "STR") == 0) {
		label->Text = L"STR:" + this->ability.STR.ToString();
	}
	else if (strcmp(para_to_edit, "DEX") == 0) {
		label->Text = L"DEX:" + this->ability.DEX.ToString();
	}
	else if (strcmp(para_to_edit, "INT") == 0) {
		label->Text = L"INT:" + this->ability.INT.ToString();
	}
	else if (strcmp(para_to_edit, "CON") == 0) {
		label->Text = L"CON:" + this->ability.CON.ToString();
	}
	else if (strcmp(para_to_edit, "APP") == 0) {
		label->Text = L"APP:" + this->ability.APP.ToString();
	}
	else if (strcmp(para_to_edit, "POW") == 0) {
		label->Text = L"POW:" + this->ability.POW.ToString();
	}
	else if (strcmp(para_to_edit, "SIZ") == 0) {
		label->Text = L"SIZ:" + this->ability.SIZ.ToString();
	}
	else if (strcmp(para_to_edit, "SAN") == 0) {
		label->Text = L"SAN:" + this->ability.SAN.ToString();
	}
	else if (strcmp(para_to_edit, "EDU") == 0) {
		label->Text = L"EDU:" + this->ability.EDU.ToString();
	}
	else if (strcmp(para_to_edit, "LUK") == 0) {
		label->Text = L"LUK:" + this->ability.LUK.ToString();
	}
	else if (strcmp(para_to_edit, "HP") == 0) {
		label->Text = L"HP:" + this->ability.HP.ToString();
	}
	else if (strcmp(para_to_edit, "MP") == 0) {
		label->Text = L"MP:" + this->ability.MP.ToString();
	}
	else if (strcmp(para_to_edit, "DB") == 0) {
		label->Text = L"DB:" + this->ability.DB.ToString();
	}
	else if (strcmp(para_to_edit, "DMG") == 0) {
		label->Text = L"DMG:" + this->ability.DMG.ToString();
	}
};
void Player::skill_change_label_text(char* para_to_edit, System::Windows::Forms::Label^ label) {
	// 쩳쩑ⓒΞ좥폻ⓕ쫜짾:
	// player.change_label_text({ "HP" },HP);
	//skill
	if (strcmp(para_to_edit, "Spot") == 0) {
		label->Text = L"Spot:" + this->skill.Spot.ToString();
	}
	else if (strcmp(para_to_edit, "Listen") == 0) {
		label->Text = L"Listen:" + this->skill.Listen.ToString();
	}
	else if (strcmp(para_to_edit, "Library") == 0) {
		label->Text = L"Library:" + this->skill.Library.ToString();
	}
	else if (strcmp(para_to_edit, "Brawl") == 0) {
		label->Text = L"Brawl:" + this->skill.Brawl.ToString();
	}
	else if (strcmp(para_to_edit, "Evade") == 0) {
		label->Text = L"Evade:" + this->skill.Evade.ToString();
	}
	else if (strcmp(para_to_edit, "History") == 0) {
		label->Text = L"History:" + this->skill.History.ToString();
	}
	else if (strcmp(para_to_edit, "Occult") == 0) {
		label->Text = L"Occult:" + this->skill.Occult.ToString();
	}
	else if (strcmp(para_to_edit, "Psycology") == 0) {
		label->Text = L"Psycology:" + this->skill.Psycology.ToString();
	}
	else if (strcmp(para_to_edit, "Biology") == 0) {
		label->Text = L"Biology:" + this->skill.Biology.ToString();
	}
	else if (strcmp(para_to_edit, "Archaeology") == 0) {
		label->Text = L"Archaeology:" + this->skill.Archaeology.ToString();
	}
	else if (strcmp(para_to_edit, "Medicine") == 0) {
		label->Text = L"Medicine:" + this->skill.Medicine.ToString();
	}
};
bool Player::collsion(int ButtonX, int ButtonY) {
	float dis = (pos.x - ButtonX) * (pos.x - ButtonX) + (pos.y - ButtonY) * (pos.y - ButtonY);
	if (dis < 22500.0) {
		//collision
		return true;
	}
	else {
		return false;
	}
};