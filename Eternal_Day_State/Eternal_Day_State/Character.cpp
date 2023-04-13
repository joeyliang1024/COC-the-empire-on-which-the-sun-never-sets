#include "Character.h"
#define _TEST_
#include "pch.h"
//Create a character from input statue
Character Create_Character(Statue Statue_Create) 
{
	Character Character_Create;
	Character_Create.Str = Statue_Create.Str;
	Character_Create.Con = Statue_Create.Con;
	Character_Create.Dex = Statue_Create.Dex;
	Character_Create.Pow = Statue_Create.Pow;
	Character_Create.App = Statue_Create.App;
	Character_Create.Int = Statue_Create.Int;
	Character_Create.Siz = Statue_Create.Siz;
	Character_Create.Edu = Statue_Create.Edu;
	Character_Create.Luk = Statue_Create.Luk;
	Character_Create.Hp = (Statue_Create.Siz + Statue_Create.Con) / 10;
	Character_Create.Mp = Statue_Create.Pow / 5;
	Character_Create.San = Statue_Create.Pow;
	//Determine DB
	int DB_Check = (Statue_Create.Str+ Statue_Create.Siz);
	if (DB_Check < 65) {
		Character_Create.DB = -2;
	}
	else if (65 <= DB_Check < 85) {
		Character_Create.DB = -1;
	}
	else if (85 <= DB_Check < 125) {
		Character_Create.DB = 0;
	}
	else if (125 <= DB_Check < 164) {
		Character_Create.DB = 4;
	}
	else{
		Character_Create.DB = 6;
	}
}
