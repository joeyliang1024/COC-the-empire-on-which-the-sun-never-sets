#include "pch.h"
#include "data_format.h"
#include "scene.h"

char* scene::get_path() {
	return this->data_path;
}
struct position scene::get_position() {
	return this->pos;
}
void scene::edit_position(int posX, int posY) {
	this->pos.x = posX;
	this->pos.y = posY;
};
struct size scene::get_size() {
	return this->siz;
};
void scene::edit_size(int Width, int Height) {
	this->siz.width = Width;
	this->siz.heigth = Height;
};
bool scene::IsEnable() {
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
