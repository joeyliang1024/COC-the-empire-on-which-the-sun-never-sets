#include "pch.h"
#include "data_format.h"
#include "character.h"
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
