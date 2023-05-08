#pragma once
#include "data_format.h"
//you should complete the function, ex: IsEnable() in .cpp file
class plaza {
public:
	char data_path[100];
	bool IsEnable();
	struct position get_position();
	//to extend more functions, you should write here
private:
	size siz;
	position pos;
};

