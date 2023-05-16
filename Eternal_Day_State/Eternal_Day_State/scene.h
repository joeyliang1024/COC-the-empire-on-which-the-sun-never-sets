#pragma once
#include "data_format.h"
//you should complete the function, ex: IsEnable() in .cpp file
class scene {
public:
	scene(char picture_path) {
		this->data_path[50] = picture_path;
	}
	char get_path();
	bool IsEnable();
	struct position get_position();
	//to extend more functions, you should write here
private:
	char data_path[50];
	size siz;
	position pos;
};