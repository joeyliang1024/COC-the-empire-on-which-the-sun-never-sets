#pragma once
#include "data_format.h"
//you should complete the function, ex: IsEnable() in .cpp file
class scene {
public:
	scene(char* picture_path) {
		this->data_path = picture_path;
	}
	char* get_path();
	struct position get_position();
	void edit_position(int posX, int posY);
	struct size get_size();
	void edit_size(int Width, int Height);
	bool IsEnable();
	//to extend more functions, you should write here
private:
	char* data_path;
	size siz;
	position pos;
};