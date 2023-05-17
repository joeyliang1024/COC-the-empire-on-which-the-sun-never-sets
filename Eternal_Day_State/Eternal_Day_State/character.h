#pragma once
class NPC {
public:
	int STR;
	int CON;
	int DEX;
	int POW;
	int APP;
	int EDU;
	int INT;
	int SIZ;
	int LUK;
	int SAN;
	int HP;
	int MP;
	int DB;
};

class character {
public:
	int STR;
	int CON;
	int DEX;
	int POW;
	int APP;
	int EDU;
	int INT;
	int SIZ;
	int LUK;
	int SAN;
	int HP;
	int MP;
	int DB;
	int spot;
	int listen;
	int library;
	int brawl;
	int evade;
	int history;
	int occult;
	int psycology;
	int biology;
	int archaeology;
	int medicine;
};



void main() {
	NPC Johann;
	Johann.STR = 65;
	Johann.DEX = 70;
	Johann.INT = 50;
	Johann.CON = 50;
	Johann.APP = 40;
	Johann.POW = 40;
	Johann.SIZ = 40;
	Johann.SAN = 40;
	Johann.EDU = 40;
	Johann.LUK = 50;
	Johann.HP = 9;
	Johann.MP = 8;
	Johann.DB = 4;

	NPC Gawain;
	Gawain.STR = 80;
	Gawain.DEX = 70;
	Gawain.INT = 85;
	Gawain.CON = 80;
	Gawain.APP = 85;
	Gawain.POW = 65;
	Gawain.SIZ = 75;
	Gawain.SAN = 65;
	Gawain.EDU = 50;
	Gawain.LUK = 80;
	Gawain.HP = 15;
	Gawain.MP = 13;
	Gawain.DB = 6;

	NPC Guinvere;
	Guinvere.STR = 25;
	Guinvere.DEX = 55;
	Guinvere.INT = 60;
	Guinvere.CON = 35;
	Guinvere.APP = 90;
	Guinvere.POW = 45;
	Guinvere.SIZ = 45;
	Guinvere.SAN = 65;
	Guinvere.EDU = 80;
	Guinvere.LUK = 80;
	Guinvere.HP = 6;
	Guinvere.MP = 9;
	Guinvere.DB = -1;

	NPC Bedivere;
	NPC Arthur;

	character occultist;
	occultist.STR = 65;
	occultist.DEX = 80;
	occultist.INT = 60;
	occultist.CON = 55;
	occultist.APP = 45;
	occultist.POW = 45;
	occultist.SIZ = 50;
	occultist.SAN = 45;
	occultist.EDU = 60;
	occultist.LUK = 40;
	occultist.HP = 10;
	occultist.MP = 9;
	occultist.DB = 0;
	occultist.spot = 60;
	occultist.listen = 60;
	occultist.library = 60;
	occultist.brawl = 60;
	occultist.evade = 50;
	occultist.history = 50;
	occultist.occult = 80;
	occultist.psycology = 40;
	occultist.biology = 30;
	occultist.archaeology = 40;
	occultist.medicine = 40;

	character archaeologist;
	archaeologist.STR = 60;
	archaeologist.DEX = 55;
	archaeologist.INT = 80;
	archaeologist.CON = 45;
	archaeologist.APP = 45;
	archaeologist.POW = 65;
	archaeologist.SIZ = 65;
	archaeologist.SAN = 65;
	archaeologist.EDU = 80;
	archaeologist.LUK = 60;
	archaeologist.HP = 11;
	archaeologist.MP = 13;
	archaeologist.DB = 4;
	archaeologist.spot = 60;
	archaeologist.listen = 30;
	archaeologist.library = 80;
	archaeologist.brawl = 30;
	archaeologist.evade = 30;
	archaeologist.history = 80;
	archaeologist.occult = 50;
	archaeologist.psycology = 20;
	archaeologist.biology = 60;
	archaeologist.archaeology = 80;
	archaeologist.medicine = 20;

	character reporter;
	reporter.STR = 55;
	reporter.DEX = 80;
	reporter.INT = 45;
	reporter.CON = 65;
	reporter.APP = 60;
	reporter.POW = 45;
	reporter.SIZ = 70;
	reporter.SAN = 45;
	reporter.EDU = 40;
	reporter.LUK = 80;
	reporter.HP = 13;
	reporter.MP = 9;
	reporter.DB = 4;
	reporter.spot = 70;
	reporter.listen = 70;
	reporter.library = 50;
	reporter.brawl = 70;
	reporter.evade = 70;
	reporter.history = 50;
	reporter.occult = 40;
	reporter.psycology = 70;
	reporter.biology = 20;
	reporter.archaeology = 20;
	reporter.medicine = 50;
 }