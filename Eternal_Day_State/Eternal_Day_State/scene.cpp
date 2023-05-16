#include "pch.h"
#include "data_format.h"
#include "scene.h"

char scene::get_path() {
	return this->data_path[100];
}
struct position scene::get_position() {
	return this->pos;
}
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
