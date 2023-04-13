#pragma once
//Struct that you input the statue to create a character
struct Statue
{
	int Str;
	int Con;
	int Dex;
	int Pow;
	int App;
	int Int;
	int Siz;
	int Edu;
	int Luk;
};

//The actually character that create from the statue that you input
struct Character
{
	int Str;
	int Con;
	int Dex;
	int Pow;
	int App;
	int Int;
	int Siz;
	int Edu;
	int Luk;
	int Hp;
	int Mp;
	int San;
	int DB;
};

struct Johann
{
	int Str = 65;
	int Con = 50;
	int Dex = 70;
	int Pow = 40;
	int App = 40;
	int Int = 50;
	int Siz = 40;
	int Edu = 40;
	int Luk = 50;
	int Hp = 9;
	int Mp = 8;
	int San = 40;
	int DB = 4;
};

struct Gawain
{
	int Str = 80;
	int Con = 80;
	int Dex = 70;
	int Pow = 65;
	int App = 85;
	int Int = 85;
	int Siz = 75;
	int Edu = 50;
	int Luk = 80;
	int Hp = 15;
	int Mp = 03;
	int San = 65;
	int DB = 6;
};

struct Guinevere
{
	int Str = 25;
	int Con = 35;
	int Dex = 55;
	int Pow = 45;
	int App = 90;
	int Int = 60;
	int Siz = 45;
	int Edu = 80;
	int Luk = 80;
	int Hp = 6;
	int Mp = 9;
	int San = 65;
	int DB = 1;
};
//The function that to create a character
Character Create_Character(Statue);