#pragma once
//Struct that you input the statue to create a character
struct Statue
{
	char name;
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

//The function that to create a character
Character Create_Character(Statue);