#pragma once
#include "data_format.h"
//you should complete the function, ex: IsEnable() in .cpp file
class plaza_NPC {
public:
	size size;
	position pos;
	bool IsEnable();
private:
};

class Gawain {
public:
	Gawain() {
		gawain.STR = 80;
		//¸É§¹
	}
	size size;
	position pos;
	bool IsEnable();

private:
	character gawain;
};