#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

#include "data_format.h"
#include "scene.h"
#include "character.h"
//#include "character.h"
#include "battle.h"
#include "roll.h"
#define WIDTH 1024
#define HEIGHT 960
int system_counter = 0;
int continue_button_count = 0;
char place[20]; //地點判定
char whatchat[20];
int sun_count = 29;

roll dice;
battle Battle;
//character object
NPC Johann({ "www//pic//picture//Johann.png" }, 65, 70, 50, 50, 40, 40, 40, 40, 40, 50, 9, 8, 4, 3);
NPC Gawain({ "www//pic//picture//Gawain.png" }, 80, 70, 85, 80, 85, 65, 75, 65, 50, 80, 15, 13, 6, 3);
NPC Guinevere({ "www//pic//picture//Guinevere.png" }, 25, 55, 60, 35, 90, 45, 45, 45, 80, 80, 6, 9, -1, 3);
NPC Bedivere({ "www//pic//picture//Bedivere.png" }, 95, 95, 60, 95, 95, 40, 80, 40, 50, 50, 17, 8, 6, 3);
Player Arthur({ "www//pic//picture//Arthur.png" }, 75, 85, 55, 60, 75, 55, 75, 40, 40, 50, 13, 11, 4, 90, 50, 50, 90, 50, 50, 40, 70, 20, 20, 50, 3);
Player player({ "www//pic//picture//Arthur.png" }, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
Player occultist({ "www//pic//picture//Arthur.png" }, 65, 80, 60, 55, 45, 45, 50, 45, 60, 40, 10, 9, 0, 60, 60, 60, 60, 50, 50, 80, 40, 30, 40, 40, 3);
Player archaeologist({ "www//pic//picture//Arthur.png" }, 60, 55, 82, 45, 45, 65, 65, 65, 80, 60, 11, 13, 4, 60, 30, 80, 30, 30, 80, 50, 20, 60, 80, 20, 3);
Player reporter({ "www//pic//picture//Arthur.png" }, 55, 80, 45, 65, 60, 45, 70, 45, 40, 80, 12, 9, 4, 70, 70, 50, 70, 70, 50, 40, 70, 20, 20, 50, 3);
Player monster({ "www//pic//picture//servent.png" }, 200, 200, 245, 265, 260, 245, 270, 245, 240, 280, 20, 29, 4, 40, 10, 50, 40, 10, 50, 40, 70, 20, 20, 50, 3);


//background object
scene back_ground({ "www//pic//background//cover.png" });
scene lead_in({ "www//pic//background//lead_in.png" });
scene Inn_Lobby({ "www//pic//background//Inn_Lobby.png" });
scene Inn_Outside({ "www//pic//background//Inn_Outside.png" });
scene Inn_Room({ "www//pic//background//Inn_Room.png" });
scene Lake_Mary({ "www//pic//background//Lake_Mary.png" });
scene Library_Inside({ "www//pic//background//Library_Inside.png" });
scene Library_Outside({ "www//pic//background//Library_Outside.png" });
scene Market({ "www//pic//background//Market.png" });
scene Palace_Inside({ "www//pic//background//Palace_Inside.png" });
scene Palace_Outside({ "www//pic//background//Palace_Outside.png" });
scene Plazza({ "www//pic//background//Plazza.png" });
scene Prison_1F({ "www//pic//background//Prison_1F.png" });
scene Prison_2F({ "www//pic//background//Prison_2F.png" });
scene Prison_Outside({ "www//pic//background//Prison_Outside.png" });
scene Restaurant_Inside({ "www//pic//background//Restaurant_Inside.png" });
scene Restaurant_Outside({ "www//pic//background//Restaurant_Outside.png" });
scene Sewer({ "www//pic//background//Sewer.png" });
scene Sewer_Altar({ "www//pic//background//Sewer_Altar.png" });
scene Sewer_Moon_State({ "www//pic//background//Sewer_Moon_State.png" });
scene Sewer_Outlet({ "www//pic//background//Sewer_Outlet.png" });
scene Sewer_Secret_Door({ "www//pic//background//Sewer_Secret_Door.png" });
scene Map({ "www//pic//picture//Map.png" });
scene Servent({ "www//pic//picture//servent.png" });
scene dead({ "www//pic//background//dead.png" });
scene ending({ "www//pic//background//ending.png" });

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		int init_san;
		int speed = 20;
		bool START_GAME = 0;
		bool END_GAME = 0;
		bool backpack_open_or_close = 0;
		bool moveLeft, moveRight, moveUp, moveDown;
		int HP_value_progressBar, MP_value_progressBar, SAN_value_progressBar;
		bool rolling_pin_bought = 0;
		bool knife_bought = 0;
		bool rope_bought = 0;
		bool hammer_bought = 0;
		bool meat_bought = 0;
		bool sandwitch_bought = 0;
		bool potato_bought = 0;
		bool heart_count = 0;
		bool sword_count = 0;
		int meat_count = 0;
		int potato_count = 0;
		int sandwitch_count = 0;
		bool ash_count = 0;
		bool dragon_heart_hold, dragon_blood_hold;
		bool carry_Guinevere, carry_Bedivere, carry_Lancelot;
		bool last_fight_win = 0;
		bool last_fight_start = 0;
		int end_game_continue_count = 0;
		bool talk_to_Lancelot_click = 0;

	private: System::Windows::Forms::Button^ counterattack_button;
	private: System::Windows::Forms::Button^ evade_button;
	private: System::Windows::Forms::Button^ attack_button;

	private: System::Windows::Forms::Button^ Library_Library_In;

	private: System::Windows::Forms::Button^ Spot_Library_In;

	private: System::Windows::Forms::Button^ Secret_To_Sewer;
	private: System::Windows::Forms::Button^ Secret_To_Prison;


	private: System::Windows::Forms::PictureBox^ background;
	private: System::Windows::Forms::TextBox^ introduction_textBox;

	private: System::Windows::Forms::PictureBox^ menu;


	private: System::Windows::Forms::PictureBox^ item_pic;
	private: System::Windows::Forms::TextBox^ manual_text;
	private: System::Windows::Forms::Label^ character_name;
	private: System::Windows::Forms::Label^ STR;
	private: System::Windows::Forms::Label^ player_power_text;
	private: System::Windows::Forms::ProgressBar^ Sun;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ DEX;
	private: System::Windows::Forms::Label^ INT;
	private: System::Windows::Forms::Label^ CON;
	private: System::Windows::Forms::Label^ APP;
	private: System::Windows::Forms::Label^ POW;
	private: System::Windows::Forms::Label^ SIZ;
	private: System::Windows::Forms::Label^ DB;
	private: System::Windows::Forms::Label^ EDU;
	private: System::Windows::Forms::Label^ LUK;
	private: System::Windows::Forms::Label^ HP;
	private: System::Windows::Forms::Label^ MP;
	private: System::Windows::Forms::Label^ SPOT;
	private: System::Windows::Forms::Label^ LISTEN;
	private: System::Windows::Forms::Label^ LIBRARY;
	private: System::Windows::Forms::Label^ BRAWL;
	private: System::Windows::Forms::Label^ EVADE;
	private: System::Windows::Forms::Label^ SAN;
	private: System::Windows::Forms::Label^ HISTORY;
	private: System::Windows::Forms::Label^ OCCULT;
	private: System::Windows::Forms::Label^ ARCHAEOLOGY;
	private: System::Windows::Forms::Label^ PSYCOLOGY;
	private: System::Windows::Forms::Label^ BIOLOGY;
	private: System::Windows::Forms::Label^ MEDICINE;
	private: System::Windows::Forms::ProgressBar^ HP_progressBar;
	private: System::Windows::Forms::PictureBox^ monster_pic;
	private: System::Windows::Forms::ProgressBar^ MP_progressBar;
	private: System::Windows::Forms::ProgressBar^ SAN_progressBar;
	private: System::Windows::Forms::Panel^ status_panel;
	private: System::Windows::Forms::Button^ Sewer_To_Secret;
	private: System::Windows::Forms::Button^ Prison_To_Secret;
	private: System::Windows::Forms::Button^ Prison1_To_Prison2;
	private: System::Windows::Forms::Button^ Prison2_To_Prison1;
	private: System::Windows::Forms::PictureBox^ NPCArthur;
	private: System::Windows::Forms::PictureBox^ NPCBedivere;
	private: System::Windows::Forms::PictureBox^ NPCGuinevere;
	private: System::Windows::Forms::PictureBox^ NPCGawain;
	private: System::Windows::Forms::PictureBox^ NPCLancelot;
	private: System::Windows::Forms::Button^ workshop_buy_knife;



	private: System::Windows::Forms::Button^ workshop_buy_rolling_pin;
	private: System::Windows::Forms::Button^ workshop_buy_rope;

	private: System::Windows::Forms::Button^ workshop_buy_hammer;
	private: System::Windows::Forms::Button^ snackbar_buy_potato;

	private: System::Windows::Forms::Button^ snackbar_buy_sandwitch;
	private: System::Windows::Forms::Button^ snackbar_buy_meat;
	private: System::Windows::Forms::Button^ leave_workshop;
	private: System::Windows::Forms::Button^ leave_snackbar;
	private: System::Windows::Forms::Button^ take_heart;
	private: System::Windows::Forms::Button^ fight_with_aurther;
	private: System::Windows::Forms::Button^ choice_archeology;


private: System::Windows::Forms::Button^ choice_leave;
private: System::Windows::Forms::Button^ hit_aurther_again;
private: System::Windows::Forms::Button^ final_end_game_button;
private: System::Windows::Forms::Button^ hard_check;
private: System::Windows::Forms::Button^ end_game_continue;
private: System::Windows::Forms::Button^ swallow_heart;
private: System::Windows::Forms::Button^ observe_swirl;
private: System::Windows::Forms::Button^ go_into_swirl;
private: System::Windows::Forms::Button^ spot_altar;
private: System::Windows::Forms::Button^ show_sword;
private: System::Windows::Forms::Button^ use_ash;
private: System::Windows::Forms::Button^ talk_to_Guinevere;
private: System::Windows::Forms::Button^ Guinevere_dialog_1;
private: System::Windows::Forms::Button^ Guinevere_dialog_2;
private: System::Windows::Forms::Button^ talk_to_Lancelot;
private: System::Windows::Forms::Button^ Lancelot_dialog_4;
private: System::Windows::Forms::Button^ Lancelot_dialog_3;
private: System::Windows::Forms::Button^ Lancelot_dialog_2;
private: System::Windows::Forms::Button^ Lancelot_dialog_1;











	public:
	private: System::Windows::Forms::Button^ Spot_Prison_Out;
	public:

	public:

	public:

	public:

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
		bool ProcessCmdKey(Message% msg, Keys keyData) override
		{
			if (keyData == Keys::Up && player_motion->Location.Y > 180)
			{
				// Move the picture box up
				player_motion->Location = System::Drawing::Point(player_motion->Location.X, player_motion->Location.Y - speed);
				return true;
			}
			else if (keyData == Keys::Down && player_motion->Location.Y < 670)
			{
				// Move the picture box down
				player_motion->Location = System::Drawing::Point(player_motion->Location.X, player_motion->Location.Y + speed);
				return true;
			}
			else if (keyData == Keys::Left && player_motion->Location.X > 0)
			{
				// Move the picture box left
				player_motion->Location = System::Drawing::Point(player_motion->Location.X - speed, player_motion->Location.Y);
				return true;
			}
			else if (keyData == Keys::Right && player_motion->Location.X < 970)
			{
				// Move the picture box right
				player_motion->Location = System::Drawing::Point(player_motion->Location.X + speed, player_motion->Location.Y);
				return true;
			}

			return Form::ProcessCmdKey(msg, keyData);

		}
	private: System::Windows::Forms::Button^ Sewer_Intersection_Library;
	private: System::Windows::Forms::Button^ Sewer_Intersection_Prison;
	private: System::Windows::Forms::Button^ Sewer_Intersection_Lake;
	private: System::Windows::Forms::Button^ Sewer_Lake_Intersection;
	private: System::Windows::Forms::Button^ chat_stranger_plazza;
	private: System::Windows::Forms::Button^ chatbox_4;
	private: System::Windows::Forms::Button^ chatbox_3;
	private: System::Windows::Forms::ListView^ backpack_items_listView;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ Ask_Wagain;
	private: System::Windows::Forms::Button^ Order;
	private: System::Windows::Forms::Button^ diner;
	private: System::Windows::Forms::Button^ studio;
	private: System::Windows::Forms::Button^ Observe_Inn;
	private: System::Windows::Forms::Button^ Psychology_Lake1;
	private: System::Windows::Forms::Button^ Psychology_Lake2;

	private: System::Windows::Forms::Button^ Go_To_Restaurant;
	private: System::Windows::Forms::Button^ Go_Out_Restaurant;



	private: System::Windows::Forms::Button^ Observe_Signpost;
	private: System::Windows::Forms::Button^ item_button;

	private: System::Windows::Forms::Button^ chatbox_1;
	private: System::Windows::Forms::Button^ chatbox_2;
	private: System::Windows::Forms::Button^ Observe_Sundial;
	private: System::Windows::Forms::Button^ listen_stranger_plazza;
	private: System::Windows::Forms::PictureBox^ player_motion;
	private: System::Windows::Forms::Button^ start;
	private: System::Windows::Forms::Button^ manual;

	private: System::Windows::Forms::Button^ back_to_home;
	private: System::Windows::Forms::Button^ archaeologist_button;
	private: System::Windows::Forms::Button^ reporter_button;
	private: System::Windows::Forms::Button^ occultist_button;
	private: System::Windows::Forms::Label^ chose_character_text;
	private: System::Windows::Forms::Button^ backpack;
	private: System::Windows::Forms::Panel^ backpack_panel;





	private: System::Windows::Forms::TextBox^ dialog_text;

	private: System::Windows::Forms::Button^ san_check_button;
	private: System::Windows::Forms::Button^ continue_button;
	private: System::Windows::Forms::Button^ signpost;
	private: System::Windows::Forms::Button^ sundial;
	private: System::Windows::Forms::Button^ Plazza_To_Inn;
	private: System::Windows::Forms::Button^ Plazza_To_Prison;
	private: System::Windows::Forms::Button^ Go_In_Inn;
	private: System::Windows::Forms::Button^ Go_Out_Inn;
	private: System::Windows::Forms::Button^ Go_In_Room;
	private: System::Windows::Forms::Button^ Go_Out_Room;
	private: System::Windows::Forms::Button^ Inn_To_Plazza;
	private: System::Windows::Forms::Button^ Inn_To_Market;
	private: System::Windows::Forms::Button^ Market_To_Restaurant;
	private: System::Windows::Forms::Button^ Market_To_Inn;
	private: System::Windows::Forms::Button^ Restaurant_To_Market;
	private: System::Windows::Forms::Button^ Restaurant_To_Prison;
	private: System::Windows::Forms::Button^ Prison_To_Restaurant;
	private: System::Windows::Forms::Button^ Prison_To_Plazza;
	private: System::Windows::Forms::Button^ Inn_To_IntersectionRight;
	private: System::Windows::Forms::Button^ IntersectionRight_To_Library;
	private: System::Windows::Forms::Button^ IntersectionRight_To_Inn;
	private: System::Windows::Forms::Button^ IntersectionRight_To_Palace;
	private: System::Windows::Forms::Button^ Palace_To_IntersectionRight;
	private: System::Windows::Forms::Button^ Library_To_IntersectionRight;
	private: System::Windows::Forms::Button^ Prison_To_IntersectionLeft;
	private: System::Windows::Forms::Button^ IntersectionLeft_To_Prison;
	private: System::Windows::Forms::Button^ IntersectionLeft_To_Library;
	private: System::Windows::Forms::Button^ Library_To_IntersectionLeft;
	private: System::Windows::Forms::Button^ IntersectionLeft_To_Lake;
	private: System::Windows::Forms::Button^ Lake_To_IntersectionLeft;
	private: System::Windows::Forms::Button^ Go_In_Palace;
	private: System::Windows::Forms::Button^ Go_In_Library;
	private: System::Windows::Forms::Button^ Go_Out_Library;
	private: System::Windows::Forms::Button^ Plazza_To_Sewer;
	private: System::Windows::Forms::Button^ Inn_To_Sewer;
	private: System::Windows::Forms::Button^ Market_To_Sewer;
	private: System::Windows::Forms::Button^ Restaurant_To_Sewer;
	private: System::Windows::Forms::Button^ Library_To_Sewer;
	private: System::Windows::Forms::Button^ Lake_To_Sewer;
	private: System::Windows::Forms::Button^ Sewer_To_Plazza;
	private: System::Windows::Forms::Button^ Sewer_To_Inn;
	private: System::Windows::Forms::Button^ Sewer_To_Market;
	private: System::Windows::Forms::Button^ Sewer_To_Restaurant;
	private: System::Windows::Forms::Button^ Sewer_To_Library;
	private: System::Windows::Forms::Button^ Sewer_Plazza_Inn;
	private: System::Windows::Forms::Button^ Sewer_Inn_Outlet;
	private: System::Windows::Forms::Button^ Sewer_Outlet_Market;
	private: System::Windows::Forms::Button^ Sewer_Market_Restaurant;
	private: System::Windows::Forms::Button^ Sewer_Restaurant_Prison;
	private: System::Windows::Forms::Button^ Sewer_Prison_Plazza;
	private: System::Windows::Forms::Button^ Sewer_Plazza_Prison;
	private: System::Windows::Forms::Button^ Sewer_Prison_Restaurant;
	private: System::Windows::Forms::Button^ Sewer_Restaurant_Market;
	private: System::Windows::Forms::Button^ Sewer_Market_Outlet;
	private: System::Windows::Forms::Button^ Sewer_Outlet_Inn;
	private: System::Windows::Forms::Button^ Sewer_Inn_Plazza;
	private: System::Windows::Forms::Button^ Sewer_Prison_Intersection;
	private: System::Windows::Forms::Button^ Sewer_Library_Intersection;
	private: System::Windows::Forms::Button^ Sewer_Library_Inn;
	private: System::Windows::Forms::Button^ Sewer_Inn_Library;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->backpack_items_listView = (gcnew System::Windows::Forms::ListView());
			this->start = (gcnew System::Windows::Forms::Button());
			this->manual = (gcnew System::Windows::Forms::Button());
			this->back_to_home = (gcnew System::Windows::Forms::Button());
			this->archaeologist_button = (gcnew System::Windows::Forms::Button());
			this->reporter_button = (gcnew System::Windows::Forms::Button());
			this->occultist_button = (gcnew System::Windows::Forms::Button());
			this->chose_character_text = (gcnew System::Windows::Forms::Label());
			this->backpack = (gcnew System::Windows::Forms::Button());
			this->backpack_panel = (gcnew System::Windows::Forms::Panel());
			this->Lancelot_dialog_4 = (gcnew System::Windows::Forms::Button());
			this->Lancelot_dialog_3 = (gcnew System::Windows::Forms::Button());
			this->Lancelot_dialog_2 = (gcnew System::Windows::Forms::Button());
			this->Lancelot_dialog_1 = (gcnew System::Windows::Forms::Button());
			this->Guinevere_dialog_2 = (gcnew System::Windows::Forms::Button());
			this->Guinevere_dialog_1 = (gcnew System::Windows::Forms::Button());
			this->final_end_game_button = (gcnew System::Windows::Forms::Button());
			this->end_game_continue = (gcnew System::Windows::Forms::Button());
			this->hard_check = (gcnew System::Windows::Forms::Button());
			this->hit_aurther_again = (gcnew System::Windows::Forms::Button());
			this->fight_with_aurther = (gcnew System::Windows::Forms::Button());
			this->choice_archeology = (gcnew System::Windows::Forms::Button());
			this->choice_leave = (gcnew System::Windows::Forms::Button());
			this->leave_workshop = (gcnew System::Windows::Forms::Button());
			this->leave_snackbar = (gcnew System::Windows::Forms::Button());
			this->snackbar_buy_sandwitch = (gcnew System::Windows::Forms::Button());
			this->snackbar_buy_meat = (gcnew System::Windows::Forms::Button());
			this->snackbar_buy_potato = (gcnew System::Windows::Forms::Button());
			this->workshop_buy_knife = (gcnew System::Windows::Forms::Button());
			this->workshop_buy_rolling_pin = (gcnew System::Windows::Forms::Button());
			this->workshop_buy_rope = (gcnew System::Windows::Forms::Button());
			this->workshop_buy_hammer = (gcnew System::Windows::Forms::Button());
			this->chatbox_4 = (gcnew System::Windows::Forms::Button());
			this->chatbox_3 = (gcnew System::Windows::Forms::Button());
			this->chatbox_2 = (gcnew System::Windows::Forms::Button());
			this->Observe_Sundial = (gcnew System::Windows::Forms::Button());
			this->chatbox_1 = (gcnew System::Windows::Forms::Button());
			this->item_button = (gcnew System::Windows::Forms::Button());
			this->Observe_Signpost = (gcnew System::Windows::Forms::Button());
			this->Psychology_Lake1 = (gcnew System::Windows::Forms::Button());
			this->san_check_button = (gcnew System::Windows::Forms::Button());
			this->continue_button = (gcnew System::Windows::Forms::Button());
			this->dialog_text = (gcnew System::Windows::Forms::TextBox());
			this->item_pic = (gcnew System::Windows::Forms::PictureBox());
			this->manual_text = (gcnew System::Windows::Forms::TextBox());
			this->Secret_To_Prison = (gcnew System::Windows::Forms::Button());
			this->Inn_To_Market = (gcnew System::Windows::Forms::Button());
			this->Plazza_To_Inn = (gcnew System::Windows::Forms::Button());
			this->IntersectionLeft_To_Library = (gcnew System::Windows::Forms::Button());
			this->Market_To_Restaurant = (gcnew System::Windows::Forms::Button());
			this->signpost = (gcnew System::Windows::Forms::Button());
			this->sundial = (gcnew System::Windows::Forms::Button());
			this->Plazza_To_Prison = (gcnew System::Windows::Forms::Button());
			this->Go_In_Inn = (gcnew System::Windows::Forms::Button());
			this->Go_Out_Inn = (gcnew System::Windows::Forms::Button());
			this->Go_In_Room = (gcnew System::Windows::Forms::Button());
			this->Go_Out_Room = (gcnew System::Windows::Forms::Button());
			this->Inn_To_Plazza = (gcnew System::Windows::Forms::Button());
			this->Market_To_Inn = (gcnew System::Windows::Forms::Button());
			this->Restaurant_To_Market = (gcnew System::Windows::Forms::Button());
			this->Restaurant_To_Prison = (gcnew System::Windows::Forms::Button());
			this->Prison_To_Restaurant = (gcnew System::Windows::Forms::Button());
			this->Prison_To_Plazza = (gcnew System::Windows::Forms::Button());
			this->Inn_To_IntersectionRight = (gcnew System::Windows::Forms::Button());
			this->IntersectionRight_To_Library = (gcnew System::Windows::Forms::Button());
			this->IntersectionRight_To_Inn = (gcnew System::Windows::Forms::Button());
			this->IntersectionRight_To_Palace = (gcnew System::Windows::Forms::Button());
			this->Palace_To_IntersectionRight = (gcnew System::Windows::Forms::Button());
			this->Library_To_IntersectionRight = (gcnew System::Windows::Forms::Button());
			this->Prison_To_IntersectionLeft = (gcnew System::Windows::Forms::Button());
			this->IntersectionLeft_To_Prison = (gcnew System::Windows::Forms::Button());
			this->Library_To_IntersectionLeft = (gcnew System::Windows::Forms::Button());
			this->IntersectionLeft_To_Lake = (gcnew System::Windows::Forms::Button());
			this->Lake_To_IntersectionLeft = (gcnew System::Windows::Forms::Button());
			this->Go_In_Palace = (gcnew System::Windows::Forms::Button());
			this->Go_In_Library = (gcnew System::Windows::Forms::Button());
			this->Go_Out_Library = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Ask_Wagain = (gcnew System::Windows::Forms::Button());
			this->Order = (gcnew System::Windows::Forms::Button());
			this->diner = (gcnew System::Windows::Forms::Button());
			this->studio = (gcnew System::Windows::Forms::Button());
			this->Observe_Inn = (gcnew System::Windows::Forms::Button());
			this->Psychology_Lake2 = (gcnew System::Windows::Forms::Button());
			this->Go_To_Restaurant = (gcnew System::Windows::Forms::Button());
			this->Go_Out_Restaurant = (gcnew System::Windows::Forms::Button());
			this->listen_stranger_plazza = (gcnew System::Windows::Forms::Button());
			this->player_motion = (gcnew System::Windows::Forms::PictureBox());
			this->Plazza_To_Sewer = (gcnew System::Windows::Forms::Button());
			this->Inn_To_Sewer = (gcnew System::Windows::Forms::Button());
			this->Market_To_Sewer = (gcnew System::Windows::Forms::Button());
			this->Restaurant_To_Sewer = (gcnew System::Windows::Forms::Button());
			this->Library_To_Sewer = (gcnew System::Windows::Forms::Button());
			this->Lake_To_Sewer = (gcnew System::Windows::Forms::Button());
			this->Sewer_To_Plazza = (gcnew System::Windows::Forms::Button());
			this->Sewer_To_Inn = (gcnew System::Windows::Forms::Button());
			this->Sewer_To_Market = (gcnew System::Windows::Forms::Button());
			this->Sewer_To_Restaurant = (gcnew System::Windows::Forms::Button());
			this->Sewer_To_Library = (gcnew System::Windows::Forms::Button());
			this->Sewer_Plazza_Inn = (gcnew System::Windows::Forms::Button());
			this->Sewer_Inn_Outlet = (gcnew System::Windows::Forms::Button());
			this->Sewer_Outlet_Market = (gcnew System::Windows::Forms::Button());
			this->Sewer_Market_Restaurant = (gcnew System::Windows::Forms::Button());
			this->Sewer_Restaurant_Prison = (gcnew System::Windows::Forms::Button());
			this->Sewer_Prison_Plazza = (gcnew System::Windows::Forms::Button());
			this->Sewer_Plazza_Prison = (gcnew System::Windows::Forms::Button());
			this->Sewer_Prison_Restaurant = (gcnew System::Windows::Forms::Button());
			this->Sewer_Restaurant_Market = (gcnew System::Windows::Forms::Button());
			this->Sewer_Market_Outlet = (gcnew System::Windows::Forms::Button());
			this->Sewer_Outlet_Inn = (gcnew System::Windows::Forms::Button());
			this->Sewer_Inn_Plazza = (gcnew System::Windows::Forms::Button());
			this->Sewer_Prison_Intersection = (gcnew System::Windows::Forms::Button());
			this->Sewer_Library_Intersection = (gcnew System::Windows::Forms::Button());
			this->Sewer_Library_Inn = (gcnew System::Windows::Forms::Button());
			this->Sewer_Inn_Library = (gcnew System::Windows::Forms::Button());
			this->Sewer_Intersection_Library = (gcnew System::Windows::Forms::Button());
			this->Sewer_Intersection_Prison = (gcnew System::Windows::Forms::Button());
			this->Sewer_Intersection_Lake = (gcnew System::Windows::Forms::Button());
			this->Sewer_Lake_Intersection = (gcnew System::Windows::Forms::Button());
			this->chat_stranger_plazza = (gcnew System::Windows::Forms::Button());
			this->Spot_Prison_Out = (gcnew System::Windows::Forms::Button());
			this->counterattack_button = (gcnew System::Windows::Forms::Button());
			this->evade_button = (gcnew System::Windows::Forms::Button());
			this->attack_button = (gcnew System::Windows::Forms::Button());
			this->Library_Library_In = (gcnew System::Windows::Forms::Button());
			this->Spot_Library_In = (gcnew System::Windows::Forms::Button());
			this->Secret_To_Sewer = (gcnew System::Windows::Forms::Button());
			this->background = (gcnew System::Windows::Forms::PictureBox());
			this->introduction_textBox = (gcnew System::Windows::Forms::TextBox());
			this->menu = (gcnew System::Windows::Forms::PictureBox());
			this->character_name = (gcnew System::Windows::Forms::Label());
			this->STR = (gcnew System::Windows::Forms::Label());
			this->player_power_text = (gcnew System::Windows::Forms::Label());
			this->Sun = (gcnew System::Windows::Forms::ProgressBar());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->DEX = (gcnew System::Windows::Forms::Label());
			this->INT = (gcnew System::Windows::Forms::Label());
			this->CON = (gcnew System::Windows::Forms::Label());
			this->APP = (gcnew System::Windows::Forms::Label());
			this->POW = (gcnew System::Windows::Forms::Label());
			this->SIZ = (gcnew System::Windows::Forms::Label());
			this->DB = (gcnew System::Windows::Forms::Label());
			this->EDU = (gcnew System::Windows::Forms::Label());
			this->LUK = (gcnew System::Windows::Forms::Label());
			this->HP = (gcnew System::Windows::Forms::Label());
			this->MP = (gcnew System::Windows::Forms::Label());
			this->SPOT = (gcnew System::Windows::Forms::Label());
			this->LISTEN = (gcnew System::Windows::Forms::Label());
			this->LIBRARY = (gcnew System::Windows::Forms::Label());
			this->BRAWL = (gcnew System::Windows::Forms::Label());
			this->EVADE = (gcnew System::Windows::Forms::Label());
			this->SAN = (gcnew System::Windows::Forms::Label());
			this->HISTORY = (gcnew System::Windows::Forms::Label());
			this->OCCULT = (gcnew System::Windows::Forms::Label());
			this->ARCHAEOLOGY = (gcnew System::Windows::Forms::Label());
			this->PSYCOLOGY = (gcnew System::Windows::Forms::Label());
			this->BIOLOGY = (gcnew System::Windows::Forms::Label());
			this->MEDICINE = (gcnew System::Windows::Forms::Label());
			this->HP_progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->monster_pic = (gcnew System::Windows::Forms::PictureBox());
			this->MP_progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->SAN_progressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->status_panel = (gcnew System::Windows::Forms::Panel());
			this->Sewer_To_Secret = (gcnew System::Windows::Forms::Button());
			this->Prison_To_Secret = (gcnew System::Windows::Forms::Button());
			this->Prison1_To_Prison2 = (gcnew System::Windows::Forms::Button());
			this->Prison2_To_Prison1 = (gcnew System::Windows::Forms::Button());
			this->NPCArthur = (gcnew System::Windows::Forms::PictureBox());
			this->NPCBedivere = (gcnew System::Windows::Forms::PictureBox());
			this->NPCGuinevere = (gcnew System::Windows::Forms::PictureBox());
			this->NPCGawain = (gcnew System::Windows::Forms::PictureBox());
			this->NPCLancelot = (gcnew System::Windows::Forms::PictureBox());
			this->take_heart = (gcnew System::Windows::Forms::Button());
			this->swallow_heart = (gcnew System::Windows::Forms::Button());
			this->observe_swirl = (gcnew System::Windows::Forms::Button());
			this->go_into_swirl = (gcnew System::Windows::Forms::Button());
			this->spot_altar = (gcnew System::Windows::Forms::Button());
			this->show_sword = (gcnew System::Windows::Forms::Button());
			this->use_ash = (gcnew System::Windows::Forms::Button());
			this->talk_to_Guinevere = (gcnew System::Windows::Forms::Button());
			this->talk_to_Lancelot = (gcnew System::Windows::Forms::Button());
			this->backpack_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player_motion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->monster_pic))->BeginInit();
			this->status_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NPCArthur))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NPCBedivere))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NPCGuinevere))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NPCGawain))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NPCLancelot))->BeginInit();
			this->SuspendLayout();
			// 
			// backpack_items_listView
			// 
			this->backpack_items_listView->GridLines = true;
			this->backpack_items_listView->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->backpack_items_listView->HideSelection = false;
			this->backpack_items_listView->Location = System::Drawing::Point(511, 600);
			this->backpack_items_listView->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->backpack_items_listView->Name = L"backpack_items_listView";
			this->backpack_items_listView->Size = System::Drawing::Size(512, 120);
			this->backpack_items_listView->TabIndex = 44;
			this->backpack_items_listView->UseCompatibleStateImageBehavior = false;
			this->backpack_items_listView->View = System::Windows::Forms::View::Details;
			this->backpack_items_listView->Visible = false;
			this->backpack_items_listView->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::backpack_item_listView_SelectedIndexChanged);
			// 
			// start
			// 
			this->start->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->start->Location = System::Drawing::Point(704, 725);
			this->start->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(128, 64);
			this->start->TabIndex = 0;
			this->start->Text = L"Start";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &Form1::start_Click);
			// 
			// manual
			// 
			this->manual->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->manual->Location = System::Drawing::Point(192, 725);
			this->manual->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->manual->Name = L"manual";
			this->manual->Size = System::Drawing::Size(128, 64);
			this->manual->TabIndex = 1;
			this->manual->Text = L"Manual";
			this->manual->UseVisualStyleBackColor = true;
			this->manual->Click += gcnew System::EventHandler(this, &Form1::manual_Click);
			// 
			// back_to_home
			// 
			this->back_to_home->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_to_home->Location = System::Drawing::Point(192, 725);
			this->back_to_home->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->back_to_home->Name = L"back_to_home";
			this->back_to_home->Size = System::Drawing::Size(128, 64);
			this->back_to_home->TabIndex = 3;
			this->back_to_home->Text = L"Back to Home";
			this->back_to_home->UseVisualStyleBackColor = true;
			this->back_to_home->Visible = false;
			this->back_to_home->Click += gcnew System::EventHandler(this, &Form1::back_to_home_Click);
			// 
			// archaeologist_button
			// 
			this->archaeologist_button->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->archaeologist_button->Location = System::Drawing::Point(192, 480);
			this->archaeologist_button->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->archaeologist_button->Name = L"archaeologist_button";
			this->archaeologist_button->Size = System::Drawing::Size(128, 64);
			this->archaeologist_button->TabIndex = 5;
			this->archaeologist_button->Text = L"考古學家";
			this->archaeologist_button->UseVisualStyleBackColor = true;
			this->archaeologist_button->Visible = false;
			this->archaeologist_button->Click += gcnew System::EventHandler(this, &Form1::archaeologist_button_Click);
			// 
			// reporter_button
			// 
			this->reporter_button->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->reporter_button->Location = System::Drawing::Point(704, 480);
			this->reporter_button->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->reporter_button->Name = L"reporter_button";
			this->reporter_button->Size = System::Drawing::Size(128, 64);
			this->reporter_button->TabIndex = 6;
			this->reporter_button->Text = L"戰地記者";
			this->reporter_button->UseVisualStyleBackColor = true;
			this->reporter_button->Visible = false;
			this->reporter_button->Click += gcnew System::EventHandler(this, &Form1::reporter_button_Click);
			// 
			// occultist_button
			// 
			this->occultist_button->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->occultist_button->Location = System::Drawing::Point(448, 480);
			this->occultist_button->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->occultist_button->Name = L"occultist_button";
			this->occultist_button->Size = System::Drawing::Size(128, 64);
			this->occultist_button->TabIndex = 7;
			this->occultist_button->Text = L"神祕學家";
			this->occultist_button->UseVisualStyleBackColor = true;
			this->occultist_button->Visible = false;
			this->occultist_button->Click += gcnew System::EventHandler(this, &Form1::occultist_button_Click);
			// 
			// chose_character_text
			// 
			this->chose_character_text->AutoSize = true;
			this->chose_character_text->Font = (gcnew System::Drawing::Font(L"標楷體", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->chose_character_text->Location = System::Drawing::Point(343, 290);
			this->chose_character_text->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->chose_character_text->Name = L"chose_character_text";
			this->chose_character_text->Size = System::Drawing::Size(363, 48);
			this->chose_character_text->TabIndex = 8;
			this->chose_character_text->Text = L"請選擇開局角色";
			this->chose_character_text->Visible = false;
			// 
			// backpack
			// 
			this->backpack->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->backpack->Font = (gcnew System::Drawing::Font(L"標楷體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->backpack->Location = System::Drawing::Point(826, 132);
			this->backpack->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->backpack->Name = L"backpack";
			this->backpack->Size = System::Drawing::Size(192, 96);
			this->backpack->TabIndex = 9;
			this->backpack->Text = L"背包";
			this->backpack->UseVisualStyleBackColor = false;
			this->backpack->Visible = false;
			this->backpack->Click += gcnew System::EventHandler(this, &Form1::backpack_Click);
			// 
			// backpack_panel
			// 
			this->backpack_panel->Controls->Add(this->Lancelot_dialog_4);
			this->backpack_panel->Controls->Add(this->Lancelot_dialog_3);
			this->backpack_panel->Controls->Add(this->Lancelot_dialog_2);
			this->backpack_panel->Controls->Add(this->Lancelot_dialog_1);
			this->backpack_panel->Controls->Add(this->Guinevere_dialog_2);
			this->backpack_panel->Controls->Add(this->Guinevere_dialog_1);
			this->backpack_panel->Controls->Add(this->final_end_game_button);
			this->backpack_panel->Controls->Add(this->end_game_continue);
			this->backpack_panel->Controls->Add(this->hard_check);
			this->backpack_panel->Controls->Add(this->hit_aurther_again);
			this->backpack_panel->Controls->Add(this->fight_with_aurther);
			this->backpack_panel->Controls->Add(this->choice_archeology);
			this->backpack_panel->Controls->Add(this->choice_leave);
			this->backpack_panel->Controls->Add(this->leave_workshop);
			this->backpack_panel->Controls->Add(this->leave_snackbar);
			this->backpack_panel->Controls->Add(this->snackbar_buy_sandwitch);
			this->backpack_panel->Controls->Add(this->snackbar_buy_meat);
			this->backpack_panel->Controls->Add(this->snackbar_buy_potato);
			this->backpack_panel->Controls->Add(this->workshop_buy_knife);
			this->backpack_panel->Controls->Add(this->workshop_buy_rolling_pin);
			this->backpack_panel->Controls->Add(this->workshop_buy_rope);
			this->backpack_panel->Controls->Add(this->workshop_buy_hammer);
			this->backpack_panel->Controls->Add(this->chatbox_4);
			this->backpack_panel->Controls->Add(this->chatbox_3);
			this->backpack_panel->Controls->Add(this->chatbox_2);
			this->backpack_panel->Controls->Add(this->Observe_Sundial);
			this->backpack_panel->Controls->Add(this->chatbox_1);
			this->backpack_panel->Controls->Add(this->item_button);
			this->backpack_panel->Controls->Add(this->Observe_Signpost);
			this->backpack_panel->Controls->Add(this->Psychology_Lake1);
			this->backpack_panel->Controls->Add(this->backpack);
			this->backpack_panel->Controls->Add(this->san_check_button);
			this->backpack_panel->Controls->Add(this->continue_button);
			this->backpack_panel->Controls->Add(this->dialog_text);
			this->backpack_panel->Location = System::Drawing::Point(0, 720);
			this->backpack_panel->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->backpack_panel->Name = L"backpack_panel";
			this->backpack_panel->Size = System::Drawing::Size(1024, 240);
			this->backpack_panel->TabIndex = 10;
			this->backpack_panel->Visible = false;
			// 
			// Lancelot_dialog_4
			// 
			this->Lancelot_dialog_4->Location = System::Drawing::Point(335, 198);
			this->Lancelot_dialog_4->Name = L"Lancelot_dialog_4";
			this->Lancelot_dialog_4->Size = System::Drawing::Size(300, 30);
			this->Lancelot_dialog_4->TabIndex = 84;
			this->Lancelot_dialog_4->Text = L"下水道的水是從哪裡排出的:";
			this->Lancelot_dialog_4->UseVisualStyleBackColor = true;
			this->Lancelot_dialog_4->Visible = false;
			this->Lancelot_dialog_4->Click += gcnew System::EventHandler(this, &Form1::Lancelot_dialog_4_Click);
			// 
			// Lancelot_dialog_3
			// 
			this->Lancelot_dialog_3->Location = System::Drawing::Point(20, 198);
			this->Lancelot_dialog_3->Name = L"Lancelot_dialog_3";
			this->Lancelot_dialog_3->Size = System::Drawing::Size(300, 30);
			this->Lancelot_dialog_3->TabIndex = 83;
			this->Lancelot_dialog_3->Text = L"剛剛遇見的怪物是甚麼";
			this->Lancelot_dialog_3->UseVisualStyleBackColor = true;
			this->Lancelot_dialog_3->Visible = false;
			this->Lancelot_dialog_3->Click += gcnew System::EventHandler(this, &Form1::Lancelot_dialog_3_Click);
			// 
			// Lancelot_dialog_2
			// 
			this->Lancelot_dialog_2->Location = System::Drawing::Point(335, 162);
			this->Lancelot_dialog_2->Name = L"Lancelot_dialog_2";
			this->Lancelot_dialog_2->Size = System::Drawing::Size(300, 30);
			this->Lancelot_dialog_2->TabIndex = 82;
			this->Lancelot_dialog_2->Text = L"月城是甚麼";
			this->Lancelot_dialog_2->UseVisualStyleBackColor = true;
			this->Lancelot_dialog_2->Visible = false;
			this->Lancelot_dialog_2->Click += gcnew System::EventHandler(this, &Form1::Lancelot_dialog_2_Click);
			// 
			// Lancelot_dialog_1
			// 
			this->Lancelot_dialog_1->Location = System::Drawing::Point(20, 162);
			this->Lancelot_dialog_1->Name = L"Lancelot_dialog_1";
			this->Lancelot_dialog_1->Size = System::Drawing::Size(300, 30);
			this->Lancelot_dialog_1->TabIndex = 81;
			this->Lancelot_dialog_1->Text = L"清醒者是甚麼";
			this->Lancelot_dialog_1->UseVisualStyleBackColor = true;
			this->Lancelot_dialog_1->Visible = false;
			this->Lancelot_dialog_1->Click += gcnew System::EventHandler(this, &Form1::Lancelot_dialog_1_Click);
			// 
			// Guinevere_dialog_2
			// 
			this->Guinevere_dialog_2->Location = System::Drawing::Point(335, 198);
			this->Guinevere_dialog_2->Name = L"Guinevere_dialog_2";
			this->Guinevere_dialog_2->Size = System::Drawing::Size(300, 30);
			this->Guinevere_dialog_2->TabIndex = 80;
			this->Guinevere_dialog_2->Text = L"選項二";
			this->Guinevere_dialog_2->UseVisualStyleBackColor = true;
			this->Guinevere_dialog_2->Visible = false;
			this->Guinevere_dialog_2->Click += gcnew System::EventHandler(this, &Form1::Guinevere_dialog_2_Click);
			// 
			// Guinevere_dialog_1
			// 
			this->Guinevere_dialog_1->Location = System::Drawing::Point(20, 198);
			this->Guinevere_dialog_1->Name = L"Guinevere_dialog_1";
			this->Guinevere_dialog_1->Size = System::Drawing::Size(300, 30);
			this->Guinevere_dialog_1->TabIndex = 79;
			this->Guinevere_dialog_1->Text = L"選項一";
			this->Guinevere_dialog_1->UseVisualStyleBackColor = true;
			this->Guinevere_dialog_1->Visible = false;
			this->Guinevere_dialog_1->Click += gcnew System::EventHandler(this, &Form1::Guinevere_dialog_1_Click);
			// 
			// final_end_game_button
			// 
			this->final_end_game_button->BackColor = System::Drawing::Color::PaleGreen;
			this->final_end_game_button->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->final_end_game_button->Location = System::Drawing::Point(826, 24);
			this->final_end_game_button->Name = L"final_end_game_button";
			this->final_end_game_button->Size = System::Drawing::Size(192, 103);
			this->final_end_game_button->TabIndex = 78;
			this->final_end_game_button->Text = L"結束遊戲";
			this->final_end_game_button->UseVisualStyleBackColor = false;
			this->final_end_game_button->Visible = false;
			this->final_end_game_button->Click += gcnew System::EventHandler(this, &Form1::final_end_game_button_Click);
			// 
			// end_game_continue
			// 
			this->end_game_continue->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->end_game_continue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->end_game_continue->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->end_game_continue->Location = System::Drawing::Point(826, 80);
			this->end_game_continue->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->end_game_continue->Name = L"end_game_continue";
			this->end_game_continue->Size = System::Drawing::Size(92, 46);
			this->end_game_continue->TabIndex = 77;
			this->end_game_continue->Text = L"Continue";
			this->end_game_continue->UseVisualStyleBackColor = false;
			this->end_game_continue->Visible = false;
			this->end_game_continue->Click += gcnew System::EventHandler(this, &Form1::end_game_continue_Click);
			// 
			// hard_check
			// 
			this->hard_check->Location = System::Drawing::Point(826, 49);
			this->hard_check->Name = L"hard_check";
			this->hard_check->Size = System::Drawing::Size(192, 45);
			this->hard_check->TabIndex = 76;
			this->hard_check->Text = L"困難敏捷判定";
			this->hard_check->UseVisualStyleBackColor = true;
			this->hard_check->Visible = false;
			this->hard_check->Click += gcnew System::EventHandler(this, &Form1::hard_check_Click);
			// 
			// hit_aurther_again
			// 
			this->hit_aurther_again->Location = System::Drawing::Point(569, 80);
			this->hit_aurther_again->Name = L"hit_aurther_again";
			this->hit_aurther_again->Size = System::Drawing::Size(237, 30);
			this->hit_aurther_again->TabIndex = 75;
			this->hit_aurther_again->Text = L"為亞瑟補上最後一擊";
			this->hit_aurther_again->UseVisualStyleBackColor = true;
			this->hit_aurther_again->Visible = false;
			this->hit_aurther_again->Click += gcnew System::EventHandler(this, &Form1::hit_aurther_again_Click);
			// 
			// fight_with_aurther
			// 
			this->fight_with_aurther->Location = System::Drawing::Point(873, 49);
			this->fight_with_aurther->Name = L"fight_with_aurther";
			this->fight_with_aurther->Size = System::Drawing::Size(92, 45);
			this->fight_with_aurther->TabIndex = 74;
			this->fight_with_aurther->Text = L"戰鬥";
			this->fight_with_aurther->UseVisualStyleBackColor = true;
			this->fight_with_aurther->Visible = false;
			this->fight_with_aurther->Click += gcnew System::EventHandler(this, &Form1::fight_with_aurther_Click);
			// 
			// choice_archeology
			// 
			this->choice_archeology->Location = System::Drawing::Point(289, 80);
			this->choice_archeology->Name = L"choice_archeology";
			this->choice_archeology->Size = System::Drawing::Size(237, 30);
			this->choice_archeology->TabIndex = 73;
			this->choice_archeology->Text = L"為了考古學!!!";
			this->choice_archeology->UseVisualStyleBackColor = true;
			this->choice_archeology->Visible = false;
			this->choice_archeology->Click += gcnew System::EventHandler(this, &Form1::choice_archeology_Click);
			// 
			// choice_leave
			// 
			this->choice_leave->Location = System::Drawing::Point(12, 80);
			this->choice_leave->Name = L"choice_leave";
			this->choice_leave->Size = System::Drawing::Size(237, 30);
			this->choice_leave->TabIndex = 72;
			this->choice_leave->Text = L"我只是想離開這個世界";
			this->choice_leave->UseVisualStyleBackColor = true;
			this->choice_leave->Visible = false;
			this->choice_leave->Click += gcnew System::EventHandler(this, &Form1::choice_leave_Click);
			// 
			// leave_workshop
			// 
			this->leave_workshop->Location = System::Drawing::Point(650, 162);
			this->leave_workshop->Name = L"leave_workshop";
			this->leave_workshop->Size = System::Drawing::Size(150, 66);
			this->leave_workshop->TabIndex = 71;
			this->leave_workshop->Text = L"離開工具店";
			this->leave_workshop->UseVisualStyleBackColor = true;
			this->leave_workshop->Visible = false;
			this->leave_workshop->Click += gcnew System::EventHandler(this, &Form1::leave_workshop_Click);
			// 
			// leave_snackbar
			// 
			this->leave_snackbar->Location = System::Drawing::Point(649, 162);
			this->leave_snackbar->Name = L"leave_snackbar";
			this->leave_snackbar->Size = System::Drawing::Size(150, 66);
			this->leave_snackbar->TabIndex = 70;
			this->leave_snackbar->Text = L"離開小吃店";
			this->leave_snackbar->UseVisualStyleBackColor = true;
			this->leave_snackbar->Visible = false;
			this->leave_snackbar->Click += gcnew System::EventHandler(this, &Form1::leave_snackbar_Click);
			// 
			// snackbar_buy_sandwitch
			// 
			this->snackbar_buy_sandwitch->Location = System::Drawing::Point(20, 162);
			this->snackbar_buy_sandwitch->Name = L"snackbar_buy_sandwitch";
			this->snackbar_buy_sandwitch->Size = System::Drawing::Size(300, 30);
			this->snackbar_buy_sandwitch->TabIndex = 69;
			this->snackbar_buy_sandwitch->Text = L"購買三明治";
			this->snackbar_buy_sandwitch->UseVisualStyleBackColor = true;
			this->snackbar_buy_sandwitch->Visible = false;
			this->snackbar_buy_sandwitch->Click += gcnew System::EventHandler(this, &Form1::snackbar_buy_sandwitch_Click);
			// 
			// snackbar_buy_meat
			// 
			this->snackbar_buy_meat->Location = System::Drawing::Point(335, 162);
			this->snackbar_buy_meat->Name = L"snackbar_buy_meat";
			this->snackbar_buy_meat->Size = System::Drawing::Size(300, 30);
			this->snackbar_buy_meat->TabIndex = 68;
			this->snackbar_buy_meat->Text = L"購買肉串";
			this->snackbar_buy_meat->UseVisualStyleBackColor = true;
			this->snackbar_buy_meat->Visible = false;
			this->snackbar_buy_meat->Click += gcnew System::EventHandler(this, &Form1::snackbar_buy_meat_Click);
			// 
			// snackbar_buy_potato
			// 
			this->snackbar_buy_potato->Location = System::Drawing::Point(20, 198);
			this->snackbar_buy_potato->Name = L"snackbar_buy_potato";
			this->snackbar_buy_potato->Size = System::Drawing::Size(300, 30);
			this->snackbar_buy_potato->TabIndex = 63;
			this->snackbar_buy_potato->Text = L"購買ㄇㄌㄐ";
			this->snackbar_buy_potato->UseVisualStyleBackColor = true;
			this->snackbar_buy_potato->Visible = false;
			this->snackbar_buy_potato->Click += gcnew System::EventHandler(this, &Form1::snackbar_buy_potato_Click);
			// 
			// workshop_buy_knife
			// 
			this->workshop_buy_knife->Location = System::Drawing::Point(335, 162);
			this->workshop_buy_knife->Name = L"workshop_buy_knife";
			this->workshop_buy_knife->Size = System::Drawing::Size(300, 30);
			this->workshop_buy_knife->TabIndex = 67;
			this->workshop_buy_knife->Text = L"購買水果刀";
			this->workshop_buy_knife->UseVisualStyleBackColor = true;
			this->workshop_buy_knife->Visible = false;
			this->workshop_buy_knife->Click += gcnew System::EventHandler(this, &Form1::workshop_buy_knife_Click);
			// 
			// workshop_buy_rolling_pin
			// 
			this->workshop_buy_rolling_pin->Location = System::Drawing::Point(20, 162);
			this->workshop_buy_rolling_pin->Name = L"workshop_buy_rolling_pin";
			this->workshop_buy_rolling_pin->Size = System::Drawing::Size(300, 30);
			this->workshop_buy_rolling_pin->TabIndex = 66;
			this->workshop_buy_rolling_pin->Text = L"購買稈麵棍";
			this->workshop_buy_rolling_pin->UseVisualStyleBackColor = true;
			this->workshop_buy_rolling_pin->Visible = false;
			this->workshop_buy_rolling_pin->Click += gcnew System::EventHandler(this, &Form1::workshop_buy_rolling_pin_Click);
			// 
			// workshop_buy_rope
			// 
			this->workshop_buy_rope->Location = System::Drawing::Point(335, 198);
			this->workshop_buy_rope->Name = L"workshop_buy_rope";
			this->workshop_buy_rope->Size = System::Drawing::Size(300, 30);
			this->workshop_buy_rope->TabIndex = 65;
			this->workshop_buy_rope->Text = L"購買麻繩";
			this->workshop_buy_rope->UseVisualStyleBackColor = true;
			this->workshop_buy_rope->Visible = false;
			this->workshop_buy_rope->Click += gcnew System::EventHandler(this, &Form1::workshop_buy_rope_Click);
			// 
			// workshop_buy_hammer
			// 
			this->workshop_buy_hammer->Location = System::Drawing::Point(20, 198);
			this->workshop_buy_hammer->Name = L"workshop_buy_hammer";
			this->workshop_buy_hammer->Size = System::Drawing::Size(300, 30);
			this->workshop_buy_hammer->TabIndex = 64;
			this->workshop_buy_hammer->Text = L"購買槌子";
			this->workshop_buy_hammer->UseVisualStyleBackColor = true;
			this->workshop_buy_hammer->Visible = false;
			this->workshop_buy_hammer->Click += gcnew System::EventHandler(this, &Form1::workshop_buy_hammer_Click);
			// 
			// chatbox_4
			// 
			this->chatbox_4->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->chatbox_4->Location = System::Drawing::Point(335, 198);
			this->chatbox_4->Name = L"chatbox_4";
			this->chatbox_4->Size = System::Drawing::Size(300, 30);
			this->chatbox_4->TabIndex = 62;
			this->chatbox_4->Text = L"chatbox4";
			this->chatbox_4->UseVisualStyleBackColor = true;
			this->chatbox_4->Visible = false;
			this->chatbox_4->Click += gcnew System::EventHandler(this, &Form1::chatbox_4_Click);
			// 
			// chatbox_3
			// 
			this->chatbox_3->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->chatbox_3->Location = System::Drawing::Point(335, 162);
			this->chatbox_3->Name = L"chatbox_3";
			this->chatbox_3->Size = System::Drawing::Size(300, 30);
			this->chatbox_3->TabIndex = 61;
			this->chatbox_3->Text = L"chatbox3";
			this->chatbox_3->UseVisualStyleBackColor = true;
			this->chatbox_3->Visible = false;
			this->chatbox_3->Click += gcnew System::EventHandler(this, &Form1::chatbox_3_Click);
			// 
			// chatbox_2
			// 
			this->chatbox_2->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->chatbox_2->Location = System::Drawing::Point(20, 198);
			this->chatbox_2->Name = L"chatbox_2";
			this->chatbox_2->Size = System::Drawing::Size(300, 30);
			this->chatbox_2->TabIndex = 60;
			this->chatbox_2->Text = L"chatbox2";
			this->chatbox_2->UseVisualStyleBackColor = true;
			this->chatbox_2->Visible = false;
			this->chatbox_2->Click += gcnew System::EventHandler(this, &Form1::chatbox_2_Click);
			// 
			// Observe_Sundial
			// 
			this->Observe_Sundial->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Observe_Sundial->Location = System::Drawing::Point(926, 24);
			this->Observe_Sundial->Name = L"Observe_Sundial";
			this->Observe_Sundial->Size = System::Drawing::Size(92, 46);
			this->Observe_Sundial->TabIndex = 18;
			this->Observe_Sundial->Text = L"觀察  日晷";
			this->Observe_Sundial->UseVisualStyleBackColor = true;
			this->Observe_Sundial->Visible = false;
			this->Observe_Sundial->Click += gcnew System::EventHandler(this, &Form1::Observe_Sundial_Click);
			// 
			// chatbox_1
			// 
			this->chatbox_1->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->chatbox_1->Location = System::Drawing::Point(20, 162);
			this->chatbox_1->Name = L"chatbox_1";
			this->chatbox_1->Size = System::Drawing::Size(300, 30);
			this->chatbox_1->TabIndex = 59;
			this->chatbox_1->Text = L"chatbox1";
			this->chatbox_1->UseVisualStyleBackColor = true;
			this->chatbox_1->Visible = false;
			this->chatbox_1->Click += gcnew System::EventHandler(this, &Form1::chatbox_1_Click);
			// 
			// item_button
			// 
			this->item_button->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->item_button->Location = System::Drawing::Point(926, 80);
			this->item_button->Name = L"item_button";
			this->item_button->Size = System::Drawing::Size(92, 46);
			this->item_button->TabIndex = 17;
			this->item_button->Text = L"物品";
			this->item_button->UseVisualStyleBackColor = true;
			this->item_button->Visible = false;
			this->item_button->Click += gcnew System::EventHandler(this, &Form1::item_Click);
			// 
			// Observe_Signpost
			// 
			this->Observe_Signpost->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Observe_Signpost->Location = System::Drawing::Point(926, 24);
			this->Observe_Signpost->Name = L"Observe_Signpost";
			this->Observe_Signpost->Size = System::Drawing::Size(92, 46);
			this->Observe_Signpost->TabIndex = 16;
			this->Observe_Signpost->Text = L"觀察  路標";
			this->Observe_Signpost->UseVisualStyleBackColor = true;
			this->Observe_Signpost->Visible = false;
			this->Observe_Signpost->Click += gcnew System::EventHandler(this, &Form1::Observe_Signpost_Click);
			// 
			// Psychology_Lake1
			// 
			this->Psychology_Lake1->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Psychology_Lake1->Location = System::Drawing::Point(926, 24);
			this->Psychology_Lake1->Name = L"Psychology_Lake1";
			this->Psychology_Lake1->Size = System::Drawing::Size(92, 46);
			this->Psychology_Lake1->TabIndex = 15;
			this->Psychology_Lake1->Text = L"心理學";
			this->Psychology_Lake1->UseVisualStyleBackColor = true;
			this->Psychology_Lake1->Visible = false;
			this->Psychology_Lake1->Click += gcnew System::EventHandler(this, &Form1::Psychology_Lake1_Click);
			// 
			// san_check_button
			// 
			this->san_check_button->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->san_check_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->san_check_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->san_check_button->Location = System::Drawing::Point(826, 24);
			this->san_check_button->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->san_check_button->Name = L"san_check_button";
			this->san_check_button->Size = System::Drawing::Size(92, 46);
			this->san_check_button->TabIndex = 13;
			this->san_check_button->Text = L"San Check";
			this->san_check_button->UseVisualStyleBackColor = false;
			this->san_check_button->Visible = false;
			this->san_check_button->Click += gcnew System::EventHandler(this, &Form1::san_check_button_Click);
			// 
			// continue_button
			// 
			this->continue_button->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->continue_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->continue_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->continue_button->Location = System::Drawing::Point(826, 80);
			this->continue_button->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->continue_button->Name = L"continue_button";
			this->continue_button->Size = System::Drawing::Size(92, 46);
			this->continue_button->TabIndex = 14;
			this->continue_button->Text = L"Continue";
			this->continue_button->UseVisualStyleBackColor = false;
			this->continue_button->Visible = false;
			this->continue_button->Click += gcnew System::EventHandler(this, &Form1::continue_button_Click);
			// 
			// dialog_text
			// 
			this->dialog_text->Enabled = false;
			this->dialog_text->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->dialog_text->Location = System::Drawing::Point(0, 0);
			this->dialog_text->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->dialog_text->Multiline = true;
			this->dialog_text->Name = L"dialog_text";
			this->dialog_text->Size = System::Drawing::Size(820, 240);
			this->dialog_text->TabIndex = 12;
			this->dialog_text->Visible = false;
			this->dialog_text->TextChanged += gcnew System::EventHandler(this, &Form1::dialog_text_TextChanged);
			// 
			// item_pic
			// 
			this->item_pic->Location = System::Drawing::Point(0, 180);
			this->item_pic->Name = L"item_pic";
			this->item_pic->Size = System::Drawing::Size(1024, 540);
			this->item_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->item_pic->TabIndex = 58;
			this->item_pic->TabStop = false;
			this->item_pic->Visible = false;
			this->item_pic->Click += gcnew System::EventHandler(this, &Form1::item_pic_Click);
			// 
			// manual_text
			// 
			this->manual_text->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->manual_text->Location = System::Drawing::Point(0, 184);
			this->manual_text->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->manual_text->Multiline = true;
			this->manual_text->Name = L"manual_text";
			this->manual_text->ReadOnly = true;
			this->manual_text->Size = System::Drawing::Size(1024, 537);
			this->manual_text->TabIndex = 2;
			this->manual_text->Text = L"此遊戲規則為COC第七版規則簡化後的結果，若對完整COC第七版規則感興趣可在Google上搜尋悠子大大寫的CoC 7e規則筆記。此遊戲建立在玩家的選擇和骰子點數上，每個場景內會出現多個選項可以選擇角色現在要做的事。此遊戲建立在玩家的選擇和骰子點數上，每個場景內會出現多個選項可以選擇角色現在要做的事。\r\n判定規則:若要進行有一定困難度的行動則要進行技能判定，假設角色技能為60，技能判定為骰一個百面骰而結果小於60時行動成功，反之則失敗，若是做此事有劣勢則有減易，反之有增易，一個判定一場遊戲只能進行一次。\r\n瘋狂規則:若san值(理智值):降低5會陷入瘋狂狀態，瘋狂狀態將會對角色的某些行動造成影響。戰鬥規則:此劇本存在戰鬥可能，戰鬥規則為回合制戰鬥一般攻擊傷害為1-3+DB，DB為身體素質造成的傷害加成。\r\n1.攻擊方宣告攻擊，而防守方宣告閃避或反擊。\r\n2.攻擊行動:骰一個骰子，若<=12極限成功、<=30困難成功、<=60成功，else失敗\r\n3.閃避或反擊行動: 骰一個骰子，若<=12極限成功、<=30困難成功、<=60成功，else失敗\r\n4.若宣告閃避，且閃避成功等級與攻擊成功等級相同:成功閃避了攻擊若宣告反擊，且反擊成功等級比攻擊成功等級高一級:成功反擊若攻擊大失敗: 造成未知不良後果若失敗:攻擊失敗若成功、困難成功:造成傷害若極限成功、大成功:造成最大攻擊力傷害若閃避、反擊大失敗: 造成未知不良後果\r\n5.其中一方生命值歸零時戰鬥結束";
			this->manual_text->Visible = false;
			this->manual_text->Click += gcnew System::EventHandler(this, &Form1::manual_text_Click);
			// 
			// Secret_To_Prison
			// 
			this->Secret_To_Prison->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Secret_To_Prison->Location = System::Drawing::Point(496, 200);
			this->Secret_To_Prison->Name = L"Secret_To_Prison";
			this->Secret_To_Prison->Size = System::Drawing::Size(64, 32);
			this->Secret_To_Prison->TabIndex = 32;
			this->Secret_To_Prison->Text = L"往監獄";
			this->Secret_To_Prison->UseVisualStyleBackColor = true;
			this->Secret_To_Prison->Visible = false;
			this->Secret_To_Prison->Click += gcnew System::EventHandler(this, &Form1::Secret_To_Prison_Click);
			// 
			// Inn_To_Market
			// 
			this->Inn_To_Market->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Inn_To_Market->Location = System::Drawing::Point(938, 512);
			this->Inn_To_Market->Margin = System::Windows::Forms::Padding(2);
			this->Inn_To_Market->Name = L"Inn_To_Market";
			this->Inn_To_Market->Size = System::Drawing::Size(64, 32);
			this->Inn_To_Market->TabIndex = 22;
			this->Inn_To_Market->Text = L"往市場";
			this->Inn_To_Market->UseVisualStyleBackColor = true;
			this->Inn_To_Market->Visible = false;
			this->Inn_To_Market->Click += gcnew System::EventHandler(this, &Form1::Inn_To_Market_Click);
			// 
			// Plazza_To_Inn
			// 
			this->Plazza_To_Inn->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Plazza_To_Inn->Location = System::Drawing::Point(938, 512);
			this->Plazza_To_Inn->Margin = System::Windows::Forms::Padding(2);
			this->Plazza_To_Inn->Name = L"Plazza_To_Inn";
			this->Plazza_To_Inn->Size = System::Drawing::Size(64, 32);
			this->Plazza_To_Inn->TabIndex = 15;
			this->Plazza_To_Inn->Text = L"往旅店";
			this->Plazza_To_Inn->UseVisualStyleBackColor = true;
			this->Plazza_To_Inn->Visible = false;
			this->Plazza_To_Inn->Click += gcnew System::EventHandler(this, &Form1::Plazza_To_Inn_Click);
			// 
			// IntersectionLeft_To_Library
			// 
			this->IntersectionLeft_To_Library->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->IntersectionLeft_To_Library->Location = System::Drawing::Point(938, 512);
			this->IntersectionLeft_To_Library->Margin = System::Windows::Forms::Padding(2);
			this->IntersectionLeft_To_Library->Name = L"IntersectionLeft_To_Library";
			this->IntersectionLeft_To_Library->Size = System::Drawing::Size(64, 32);
			this->IntersectionLeft_To_Library->TabIndex = 37;
			this->IntersectionLeft_To_Library->Text = L"往圖書館";
			this->IntersectionLeft_To_Library->UseVisualStyleBackColor = true;
			this->IntersectionLeft_To_Library->Visible = false;
			this->IntersectionLeft_To_Library->Click += gcnew System::EventHandler(this, &Form1::IntersectionLeft_To_Library_Click);
			// 
			// Market_To_Restaurant
			// 
			this->Market_To_Restaurant->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Market_To_Restaurant->Location = System::Drawing::Point(938, 512);
			this->Market_To_Restaurant->Margin = System::Windows::Forms::Padding(2);
			this->Market_To_Restaurant->Name = L"Market_To_Restaurant";
			this->Market_To_Restaurant->Size = System::Drawing::Size(64, 32);
			this->Market_To_Restaurant->TabIndex = 23;
			this->Market_To_Restaurant->Text = L"往餐廳";
			this->Market_To_Restaurant->UseVisualStyleBackColor = true;
			this->Market_To_Restaurant->Visible = false;
			this->Market_To_Restaurant->Click += gcnew System::EventHandler(this, &Form1::Market_To_Restaurant_Click);
			// 
			// signpost
			// 
			this->signpost->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->signpost->Location = System::Drawing::Point(681, 274);
			this->signpost->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->signpost->Name = L"signpost";
			this->signpost->Size = System::Drawing::Size(96, 64);
			this->signpost->TabIndex = 13;
			this->signpost->Text = L"路標";
			this->signpost->UseVisualStyleBackColor = true;
			this->signpost->Visible = false;
			this->signpost->Click += gcnew System::EventHandler(this, &Form1::signpost_Click);
			// 
			// sundial
			// 
			this->sundial->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->sundial->Location = System::Drawing::Point(466, 408);
			this->sundial->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->sundial->Name = L"sundial";
			this->sundial->Size = System::Drawing::Size(96, 64);
			this->sundial->TabIndex = 14;
			this->sundial->Text = L"日晷";
			this->sundial->UseVisualStyleBackColor = true;
			this->sundial->Visible = false;
			this->sundial->Click += gcnew System::EventHandler(this, &Form1::sundial_Click);
			// 
			// Plazza_To_Prison
			// 
			this->Plazza_To_Prison->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Plazza_To_Prison->Location = System::Drawing::Point(16, 512);
			this->Plazza_To_Prison->Margin = System::Windows::Forms::Padding(2);
			this->Plazza_To_Prison->Name = L"Plazza_To_Prison";
			this->Plazza_To_Prison->Size = System::Drawing::Size(64, 32);
			this->Plazza_To_Prison->TabIndex = 16;
			this->Plazza_To_Prison->Text = L"往監獄";
			this->Plazza_To_Prison->UseVisualStyleBackColor = true;
			this->Plazza_To_Prison->Visible = false;
			this->Plazza_To_Prison->Click += gcnew System::EventHandler(this, &Form1::Plazza_To_Prison_Click);
			// 
			// Go_In_Inn
			// 
			this->Go_In_Inn->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Go_In_Inn->Location = System::Drawing::Point(396, 365);
			this->Go_In_Inn->Margin = System::Windows::Forms::Padding(2);
			this->Go_In_Inn->Name = L"Go_In_Inn";
			this->Go_In_Inn->Size = System::Drawing::Size(96, 64);
			this->Go_In_Inn->TabIndex = 17;
			this->Go_In_Inn->Text = L"進旅館";
			this->Go_In_Inn->UseVisualStyleBackColor = true;
			this->Go_In_Inn->Visible = false;
			this->Go_In_Inn->Click += gcnew System::EventHandler(this, &Form1::Go_In_Inn_Click);
			// 
			// Go_Out_Inn
			// 
			this->Go_Out_Inn->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Go_Out_Inn->Location = System::Drawing::Point(396, 293);
			this->Go_Out_Inn->Margin = System::Windows::Forms::Padding(2);
			this->Go_Out_Inn->Name = L"Go_Out_Inn";
			this->Go_Out_Inn->Size = System::Drawing::Size(96, 64);
			this->Go_Out_Inn->TabIndex = 18;
			this->Go_Out_Inn->Text = L"出旅館";
			this->Go_Out_Inn->UseVisualStyleBackColor = true;
			this->Go_Out_Inn->Visible = false;
			this->Go_Out_Inn->Click += gcnew System::EventHandler(this, &Form1::Go_Out_Inn_Click);
			// 
			// Go_In_Room
			// 
			this->Go_In_Room->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Go_In_Room->Location = System::Drawing::Point(562, 293);
			this->Go_In_Room->Margin = System::Windows::Forms::Padding(2);
			this->Go_In_Room->Name = L"Go_In_Room";
			this->Go_In_Room->Size = System::Drawing::Size(96, 64);
			this->Go_In_Room->TabIndex = 19;
			this->Go_In_Room->Text = L"進房間";
			this->Go_In_Room->UseVisualStyleBackColor = true;
			this->Go_In_Room->Visible = false;
			this->Go_In_Room->Click += gcnew System::EventHandler(this, &Form1::Go_In_Room_Click);
			// 
			// Go_Out_Room
			// 
			this->Go_Out_Room->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Go_Out_Room->Location = System::Drawing::Point(562, 367);
			this->Go_Out_Room->Margin = System::Windows::Forms::Padding(2);
			this->Go_Out_Room->Name = L"Go_Out_Room";
			this->Go_Out_Room->Size = System::Drawing::Size(96, 64);
			this->Go_Out_Room->TabIndex = 20;
			this->Go_Out_Room->Text = L"出房間";
			this->Go_Out_Room->UseVisualStyleBackColor = true;
			this->Go_Out_Room->Visible = false;
			this->Go_Out_Room->Click += gcnew System::EventHandler(this, &Form1::Go_Out_Room_Click);
			// 
			// Inn_To_Plazza
			// 
			this->Inn_To_Plazza->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Inn_To_Plazza->Location = System::Drawing::Point(480, 667);
			this->Inn_To_Plazza->Margin = System::Windows::Forms::Padding(2);
			this->Inn_To_Plazza->Name = L"Inn_To_Plazza";
			this->Inn_To_Plazza->Size = System::Drawing::Size(80, 32);
			this->Inn_To_Plazza->TabIndex = 21;
			this->Inn_To_Plazza->Text = L"往廣場";
			this->Inn_To_Plazza->UseVisualStyleBackColor = true;
			this->Inn_To_Plazza->Visible = false;
			this->Inn_To_Plazza->Click += gcnew System::EventHandler(this, &Form1::Inn_To_Plazza_Click);
			// 
			// Market_To_Inn
			// 
			this->Market_To_Inn->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Market_To_Inn->Location = System::Drawing::Point(16, 512);
			this->Market_To_Inn->Margin = System::Windows::Forms::Padding(2);
			this->Market_To_Inn->Name = L"Market_To_Inn";
			this->Market_To_Inn->Size = System::Drawing::Size(64, 32);
			this->Market_To_Inn->TabIndex = 24;
			this->Market_To_Inn->Text = L"往旅店";
			this->Market_To_Inn->UseVisualStyleBackColor = true;
			this->Market_To_Inn->Visible = false;
			this->Market_To_Inn->Click += gcnew System::EventHandler(this, &Form1::Market_To_Inn_Click);
			// 
			// Restaurant_To_Market
			// 
			this->Restaurant_To_Market->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Restaurant_To_Market->Location = System::Drawing::Point(16, 512);
			this->Restaurant_To_Market->Margin = System::Windows::Forms::Padding(2);
			this->Restaurant_To_Market->Name = L"Restaurant_To_Market";
			this->Restaurant_To_Market->Size = System::Drawing::Size(63, 32);
			this->Restaurant_To_Market->TabIndex = 25;
			this->Restaurant_To_Market->Text = L"往市場";
			this->Restaurant_To_Market->UseVisualStyleBackColor = true;
			this->Restaurant_To_Market->Visible = false;
			this->Restaurant_To_Market->Click += gcnew System::EventHandler(this, &Form1::Restaurant_To_Market_Click);
			// 
			// Restaurant_To_Prison
			// 
			this->Restaurant_To_Prison->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Restaurant_To_Prison->Location = System::Drawing::Point(480, 667);
			this->Restaurant_To_Prison->Margin = System::Windows::Forms::Padding(2);
			this->Restaurant_To_Prison->Name = L"Restaurant_To_Prison";
			this->Restaurant_To_Prison->Size = System::Drawing::Size(80, 32);
			this->Restaurant_To_Prison->TabIndex = 26;
			this->Restaurant_To_Prison->Text = L"往監獄";
			this->Restaurant_To_Prison->UseVisualStyleBackColor = true;
			this->Restaurant_To_Prison->Visible = false;
			this->Restaurant_To_Prison->Click += gcnew System::EventHandler(this, &Form1::Restaurant_To_Prison_Click);
			// 
			// Prison_To_Restaurant
			// 
			this->Prison_To_Restaurant->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Prison_To_Restaurant->Location = System::Drawing::Point(16, 512);
			this->Prison_To_Restaurant->Margin = System::Windows::Forms::Padding(2);
			this->Prison_To_Restaurant->Name = L"Prison_To_Restaurant";
			this->Prison_To_Restaurant->Size = System::Drawing::Size(64, 32);
			this->Prison_To_Restaurant->TabIndex = 27;
			this->Prison_To_Restaurant->Text = L"往餐廳";
			this->Prison_To_Restaurant->UseVisualStyleBackColor = true;
			this->Prison_To_Restaurant->Visible = false;
			this->Prison_To_Restaurant->Click += gcnew System::EventHandler(this, &Form1::Prison_To_Restaurant_Click);
			// 
			// Prison_To_Plazza
			// 
			this->Prison_To_Plazza->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Prison_To_Plazza->Location = System::Drawing::Point(480, 667);
			this->Prison_To_Plazza->Margin = System::Windows::Forms::Padding(2);
			this->Prison_To_Plazza->Name = L"Prison_To_Plazza";
			this->Prison_To_Plazza->Size = System::Drawing::Size(80, 32);
			this->Prison_To_Plazza->TabIndex = 28;
			this->Prison_To_Plazza->Text = L"往廣場";
			this->Prison_To_Plazza->UseVisualStyleBackColor = true;
			this->Prison_To_Plazza->Visible = false;
			this->Prison_To_Plazza->Click += gcnew System::EventHandler(this, &Form1::Prison_To_Plazza_Click);
			// 
			// Inn_To_IntersectionRight
			// 
			this->Inn_To_IntersectionRight->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Inn_To_IntersectionRight->Location = System::Drawing::Point(16, 512);
			this->Inn_To_IntersectionRight->Margin = System::Windows::Forms::Padding(2);
			this->Inn_To_IntersectionRight->Name = L"Inn_To_IntersectionRight";
			this->Inn_To_IntersectionRight->Size = System::Drawing::Size(63, 32);
			this->Inn_To_IntersectionRight->TabIndex = 29;
			this->Inn_To_IntersectionRight->Text = L"往路口";
			this->Inn_To_IntersectionRight->UseVisualStyleBackColor = true;
			this->Inn_To_IntersectionRight->Visible = false;
			this->Inn_To_IntersectionRight->Click += gcnew System::EventHandler(this, &Form1::Inn_To_IntersectionRight_Click);
			// 
			// IntersectionRight_To_Library
			// 
			this->IntersectionRight_To_Library->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->IntersectionRight_To_Library->Location = System::Drawing::Point(480, 200);
			this->IntersectionRight_To_Library->Margin = System::Windows::Forms::Padding(2);
			this->IntersectionRight_To_Library->Name = L"IntersectionRight_To_Library";
			this->IntersectionRight_To_Library->Size = System::Drawing::Size(64, 32);
			this->IntersectionRight_To_Library->TabIndex = 30;
			this->IntersectionRight_To_Library->Text = L"往圖書館";
			this->IntersectionRight_To_Library->UseVisualStyleBackColor = true;
			this->IntersectionRight_To_Library->Visible = false;
			this->IntersectionRight_To_Library->Click += gcnew System::EventHandler(this, &Form1::IntersectionRight_To_Library_Click);
			// 
			// IntersectionRight_To_Inn
			// 
			this->IntersectionRight_To_Inn->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->IntersectionRight_To_Inn->Location = System::Drawing::Point(480, 667);
			this->IntersectionRight_To_Inn->Margin = System::Windows::Forms::Padding(2);
			this->IntersectionRight_To_Inn->Name = L"IntersectionRight_To_Inn";
			this->IntersectionRight_To_Inn->Size = System::Drawing::Size(80, 32);
			this->IntersectionRight_To_Inn->TabIndex = 31;
			this->IntersectionRight_To_Inn->Text = L"往旅店";
			this->IntersectionRight_To_Inn->UseVisualStyleBackColor = true;
			this->IntersectionRight_To_Inn->Visible = false;
			this->IntersectionRight_To_Inn->Click += gcnew System::EventHandler(this, &Form1::IntersectionRight_To_Inn_Click);
			// 
			// IntersectionRight_To_Palace
			// 
			this->IntersectionRight_To_Palace->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->IntersectionRight_To_Palace->Location = System::Drawing::Point(938, 512);
			this->IntersectionRight_To_Palace->Margin = System::Windows::Forms::Padding(2);
			this->IntersectionRight_To_Palace->Name = L"IntersectionRight_To_Palace";
			this->IntersectionRight_To_Palace->Size = System::Drawing::Size(64, 32);
			this->IntersectionRight_To_Palace->TabIndex = 32;
			this->IntersectionRight_To_Palace->Text = L"往宮殿";
			this->IntersectionRight_To_Palace->UseVisualStyleBackColor = true;
			this->IntersectionRight_To_Palace->Visible = false;
			this->IntersectionRight_To_Palace->Click += gcnew System::EventHandler(this, &Form1::IntersectionRight_To_Palace_Click);
			// 
			// Palace_To_IntersectionRight
			// 
			this->Palace_To_IntersectionRight->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Palace_To_IntersectionRight->Location = System::Drawing::Point(600, 220);
			this->Palace_To_IntersectionRight->Margin = System::Windows::Forms::Padding(2);
			this->Palace_To_IntersectionRight->Name = L"Palace_To_IntersectionRight";
			this->Palace_To_IntersectionRight->Size = System::Drawing::Size(96, 64);
			this->Palace_To_IntersectionRight->TabIndex = 33;
			this->Palace_To_IntersectionRight->Text = L"往回走";
			this->Palace_To_IntersectionRight->UseVisualStyleBackColor = true;
			this->Palace_To_IntersectionRight->Visible = false;
			this->Palace_To_IntersectionRight->Click += gcnew System::EventHandler(this, &Form1::Palace_To_IntersectionRight_Click);
			// 
			// Library_To_IntersectionRight
			// 
			this->Library_To_IntersectionRight->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Library_To_IntersectionRight->Location = System::Drawing::Point(938, 512);
			this->Library_To_IntersectionRight->Margin = System::Windows::Forms::Padding(2);
			this->Library_To_IntersectionRight->Name = L"Library_To_IntersectionRight";
			this->Library_To_IntersectionRight->Size = System::Drawing::Size(64, 32);
			this->Library_To_IntersectionRight->TabIndex = 34;
			this->Library_To_IntersectionRight->Text = L"往路口";
			this->Library_To_IntersectionRight->UseVisualStyleBackColor = true;
			this->Library_To_IntersectionRight->Visible = false;
			this->Library_To_IntersectionRight->Click += gcnew System::EventHandler(this, &Form1::Library_To_IntersectionRight_Click);
			// 
			// Prison_To_IntersectionLeft
			// 
			this->Prison_To_IntersectionLeft->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Prison_To_IntersectionLeft->Location = System::Drawing::Point(938, 512);
			this->Prison_To_IntersectionLeft->Margin = System::Windows::Forms::Padding(2);
			this->Prison_To_IntersectionLeft->Name = L"Prison_To_IntersectionLeft";
			this->Prison_To_IntersectionLeft->Size = System::Drawing::Size(64, 32);
			this->Prison_To_IntersectionLeft->TabIndex = 35;
			this->Prison_To_IntersectionLeft->Text = L"往路口";
			this->Prison_To_IntersectionLeft->UseVisualStyleBackColor = true;
			this->Prison_To_IntersectionLeft->Visible = false;
			this->Prison_To_IntersectionLeft->Click += gcnew System::EventHandler(this, &Form1::Prison_To_IntersectionLeft_Click);
			// 
			// IntersectionLeft_To_Prison
			// 
			this->IntersectionLeft_To_Prison->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->IntersectionLeft_To_Prison->Location = System::Drawing::Point(480, 667);
			this->IntersectionLeft_To_Prison->Margin = System::Windows::Forms::Padding(2);
			this->IntersectionLeft_To_Prison->Name = L"IntersectionLeft_To_Prison";
			this->IntersectionLeft_To_Prison->Size = System::Drawing::Size(64, 32);
			this->IntersectionLeft_To_Prison->TabIndex = 36;
			this->IntersectionLeft_To_Prison->Text = L"往監獄";
			this->IntersectionLeft_To_Prison->UseVisualStyleBackColor = true;
			this->IntersectionLeft_To_Prison->Visible = false;
			this->IntersectionLeft_To_Prison->Click += gcnew System::EventHandler(this, &Form1::IntersectionLeft_To_Prison_Click);
			// 
			// Library_To_IntersectionLeft
			// 
			this->Library_To_IntersectionLeft->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Library_To_IntersectionLeft->Location = System::Drawing::Point(16, 512);
			this->Library_To_IntersectionLeft->Margin = System::Windows::Forms::Padding(2);
			this->Library_To_IntersectionLeft->Name = L"Library_To_IntersectionLeft";
			this->Library_To_IntersectionLeft->Size = System::Drawing::Size(64, 32);
			this->Library_To_IntersectionLeft->TabIndex = 38;
			this->Library_To_IntersectionLeft->Text = L"往路口";
			this->Library_To_IntersectionLeft->UseVisualStyleBackColor = true;
			this->Library_To_IntersectionLeft->Visible = false;
			this->Library_To_IntersectionLeft->Click += gcnew System::EventHandler(this, &Form1::Library_To_IntersectionLeft_Click);
			// 
			// IntersectionLeft_To_Lake
			// 
			this->IntersectionLeft_To_Lake->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->IntersectionLeft_To_Lake->Location = System::Drawing::Point(16, 512);
			this->IntersectionLeft_To_Lake->Margin = System::Windows::Forms::Padding(2);
			this->IntersectionLeft_To_Lake->Name = L"IntersectionLeft_To_Lake";
			this->IntersectionLeft_To_Lake->Size = System::Drawing::Size(64, 32);
			this->IntersectionLeft_To_Lake->TabIndex = 39;
			this->IntersectionLeft_To_Lake->Text = L"往湖";
			this->IntersectionLeft_To_Lake->UseVisualStyleBackColor = true;
			this->IntersectionLeft_To_Lake->Visible = false;
			this->IntersectionLeft_To_Lake->Click += gcnew System::EventHandler(this, &Form1::IntersectionLeft_To_Lake_Click);
			// 
			// Lake_To_IntersectionLeft
			// 
			this->Lake_To_IntersectionLeft->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Lake_To_IntersectionLeft->Location = System::Drawing::Point(396, 220);
			this->Lake_To_IntersectionLeft->Margin = System::Windows::Forms::Padding(2);
			this->Lake_To_IntersectionLeft->Name = L"Lake_To_IntersectionLeft";
			this->Lake_To_IntersectionLeft->Size = System::Drawing::Size(96, 64);
			this->Lake_To_IntersectionLeft->TabIndex = 40;
			this->Lake_To_IntersectionLeft->Text = L"往回走";
			this->Lake_To_IntersectionLeft->UseVisualStyleBackColor = true;
			this->Lake_To_IntersectionLeft->Visible = false;
			this->Lake_To_IntersectionLeft->Click += gcnew System::EventHandler(this, &Form1::Lake_To_IntersectionLeft_Click);
			// 
			// Go_In_Palace
			// 
			this->Go_In_Palace->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Go_In_Palace->Location = System::Drawing::Point(480, 256);
			this->Go_In_Palace->Margin = System::Windows::Forms::Padding(2);
			this->Go_In_Palace->Name = L"Go_In_Palace";
			this->Go_In_Palace->Size = System::Drawing::Size(96, 64);
			this->Go_In_Palace->TabIndex = 41;
			this->Go_In_Palace->Text = L"進宮殿";
			this->Go_In_Palace->UseVisualStyleBackColor = true;
			this->Go_In_Palace->Visible = false;
			this->Go_In_Palace->Click += gcnew System::EventHandler(this, &Form1::Go_In_Palace_Click);
			// 
			// Go_In_Library
			// 
			this->Go_In_Library->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Go_In_Library->Location = System::Drawing::Point(396, 256);
			this->Go_In_Library->Margin = System::Windows::Forms::Padding(2);
			this->Go_In_Library->Name = L"Go_In_Library";
			this->Go_In_Library->Size = System::Drawing::Size(96, 64);
			this->Go_In_Library->TabIndex = 42;
			this->Go_In_Library->Text = L"進圖書館";
			this->Go_In_Library->UseVisualStyleBackColor = true;
			this->Go_In_Library->Visible = false;
			this->Go_In_Library->Click += gcnew System::EventHandler(this, &Form1::Go_In_Library_Click);
			// 
			// Go_Out_Library
			// 
			this->Go_Out_Library->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Go_Out_Library->Location = System::Drawing::Point(562, 256);
			this->Go_Out_Library->Margin = System::Windows::Forms::Padding(2);
			this->Go_Out_Library->Name = L"Go_Out_Library";
			this->Go_Out_Library->Size = System::Drawing::Size(96, 64);
			this->Go_Out_Library->TabIndex = 43;
			this->Go_Out_Library->Text = L"出圖書館";
			this->Go_Out_Library->UseVisualStyleBackColor = true;
			this->Go_Out_Library->Visible = false;
			this->Go_Out_Library->Click += gcnew System::EventHandler(this, &Form1::Go_Out_Library_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Ask_Wagain
			// 
			this->Ask_Wagain->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Ask_Wagain->Location = System::Drawing::Point(695, 651);
			this->Ask_Wagain->Name = L"Ask_Wagain";
			this->Ask_Wagain->Size = System::Drawing::Size(96, 64);
			this->Ask_Wagain->TabIndex = 46;
			this->Ask_Wagain->Text = L"詢問瓦格恩";
			this->Ask_Wagain->UseVisualStyleBackColor = true;
			this->Ask_Wagain->Visible = false;
			this->Ask_Wagain->Click += gcnew System::EventHandler(this, &Form1::Ask_Wagain_Click);
			// 
			// Order
			// 
			this->Order->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Order->Location = System::Drawing::Point(562, 404);
			this->Order->Name = L"Order";
			this->Order->Size = System::Drawing::Size(96, 64);
			this->Order->TabIndex = 48;
			this->Order->Text = L"點餐";
			this->Order->UseVisualStyleBackColor = true;
			this->Order->Visible = false;
			this->Order->Click += gcnew System::EventHandler(this, &Form1::Order_Click);
			// 
			// diner
			// 
			this->diner->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->diner->Location = System::Drawing::Point(316, 365);
			this->diner->Name = L"diner";
			this->diner->Size = System::Drawing::Size(96, 64);
			this->diner->TabIndex = 49;
			this->diner->Text = L"小吃部";
			this->diner->UseVisualStyleBackColor = true;
			this->diner->Visible = false;
			this->diner->Click += gcnew System::EventHandler(this, &Form1::diner_Click);
			// 
			// studio
			// 
			this->studio->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->studio->Location = System::Drawing::Point(642, 367);
			this->studio->Name = L"studio";
			this->studio->Size = System::Drawing::Size(96, 64);
			this->studio->TabIndex = 50;
			this->studio->Text = L"工具店";
			this->studio->UseVisualStyleBackColor = true;
			this->studio->Visible = false;
			this->studio->Click += gcnew System::EventHandler(this, &Form1::studio_Click);
			// 
			// Observe_Inn
			// 
			this->Observe_Inn->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Observe_Inn->Location = System::Drawing::Point(480, 442);
			this->Observe_Inn->Name = L"Observe_Inn";
			this->Observe_Inn->Size = System::Drawing::Size(96, 64);
			this->Observe_Inn->TabIndex = 52;
			this->Observe_Inn->Text = L"觀察旅店";
			this->Observe_Inn->UseVisualStyleBackColor = true;
			this->Observe_Inn->Visible = false;
			this->Observe_Inn->Click += gcnew System::EventHandler(this, &Form1::Observe_Inn_Click);
			// 
			// Psychology_Lake2
			// 
			this->Psychology_Lake2->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Psychology_Lake2->Location = System::Drawing::Point(562, 443);
			this->Psychology_Lake2->Name = L"Psychology_Lake2";
			this->Psychology_Lake2->Size = System::Drawing::Size(96, 64);
			this->Psychology_Lake2->TabIndex = 54;
			this->Psychology_Lake2->Text = L"心理學";
			this->Psychology_Lake2->UseVisualStyleBackColor = true;
			this->Psychology_Lake2->Visible = false;
			this->Psychology_Lake2->Click += gcnew System::EventHandler(this, &Form1::Psychology_Lake2_Click);
			// 
			// Go_To_Restaurant
			// 
			this->Go_To_Restaurant->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Go_To_Restaurant->Location = System::Drawing::Point(316, 404);
			this->Go_To_Restaurant->Name = L"Go_To_Restaurant";
			this->Go_To_Restaurant->Size = System::Drawing::Size(96, 64);
			this->Go_To_Restaurant->TabIndex = 56;
			this->Go_To_Restaurant->Text = L"進餐廳";
			this->Go_To_Restaurant->Visible = false;
			this->Go_To_Restaurant->Click += gcnew System::EventHandler(this, &Form1::Go_To_Restaurant_Click);
			// 
			// Go_Out_Restaurant
			// 
			this->Go_Out_Restaurant->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Go_Out_Restaurant->Location = System::Drawing::Point(642, 405);
			this->Go_Out_Restaurant->Name = L"Go_Out_Restaurant";
			this->Go_Out_Restaurant->Size = System::Drawing::Size(96, 64);
			this->Go_Out_Restaurant->TabIndex = 57;
			this->Go_Out_Restaurant->Text = L"出餐廳";
			this->Go_Out_Restaurant->UseVisualStyleBackColor = true;
			this->Go_Out_Restaurant->Visible = false;
			this->Go_Out_Restaurant->Click += gcnew System::EventHandler(this, &Form1::Go_Out_Restaurant_Click);
			// 
			// listen_stranger_plazza
			// 
			this->listen_stranger_plazza->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->listen_stranger_plazza->Location = System::Drawing::Point(593, 651);
			this->listen_stranger_plazza->Name = L"listen_stranger_plazza";
			this->listen_stranger_plazza->Size = System::Drawing::Size(96, 64);
			this->listen_stranger_plazza->TabIndex = 59;
			this->listen_stranger_plazza->Text = L"聆聽老人 聊天";
			this->listen_stranger_plazza->UseVisualStyleBackColor = true;
			this->listen_stranger_plazza->Visible = false;
			this->listen_stranger_plazza->Click += gcnew System::EventHandler(this, &Form1::listen_stranger_plazza_Click);
			// 
			// player_motion
			// 
			this->player_motion->Location = System::Drawing::Point(635, 456);
			this->player_motion->Name = L"player_motion";
			this->player_motion->Size = System::Drawing::Size(54, 50);
			this->player_motion->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player_motion->TabIndex = 60;
			this->player_motion->TabStop = false;
			this->player_motion->Visible = false;
			// 
			// Plazza_To_Sewer
			// 
			this->Plazza_To_Sewer->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Plazza_To_Sewer->Location = System::Drawing::Point(34, 206);
			this->Plazza_To_Sewer->Name = L"Plazza_To_Sewer";
			this->Plazza_To_Sewer->Size = System::Drawing::Size(96, 64);
			this->Plazza_To_Sewer->TabIndex = 61;
			this->Plazza_To_Sewer->Text = L"進下水道";
			this->Plazza_To_Sewer->UseVisualStyleBackColor = true;
			this->Plazza_To_Sewer->Visible = false;
			this->Plazza_To_Sewer->Click += gcnew System::EventHandler(this, &Form1::Plazza_To_Sewer_Click);
			// 
			// Inn_To_Sewer
			// 
			this->Inn_To_Sewer->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Inn_To_Sewer->Location = System::Drawing::Point(34, 206);
			this->Inn_To_Sewer->Name = L"Inn_To_Sewer";
			this->Inn_To_Sewer->Size = System::Drawing::Size(96, 64);
			this->Inn_To_Sewer->TabIndex = 62;
			this->Inn_To_Sewer->Text = L"進下水道";
			this->Inn_To_Sewer->UseVisualStyleBackColor = true;
			this->Inn_To_Sewer->Visible = false;
			this->Inn_To_Sewer->Click += gcnew System::EventHandler(this, &Form1::Inn_To_Sewer_Click);
			// 
			// Market_To_Sewer
			// 
			this->Market_To_Sewer->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Market_To_Sewer->Location = System::Drawing::Point(34, 206);
			this->Market_To_Sewer->Name = L"Market_To_Sewer";
			this->Market_To_Sewer->Size = System::Drawing::Size(96, 64);
			this->Market_To_Sewer->TabIndex = 63;
			this->Market_To_Sewer->Text = L"進下水道";
			this->Market_To_Sewer->UseVisualStyleBackColor = true;
			this->Market_To_Sewer->Visible = false;
			this->Market_To_Sewer->Click += gcnew System::EventHandler(this, &Form1::Market_To_Sewer_Click);
			// 
			// Restaurant_To_Sewer
			// 
			this->Restaurant_To_Sewer->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Restaurant_To_Sewer->Location = System::Drawing::Point(34, 206);
			this->Restaurant_To_Sewer->Name = L"Restaurant_To_Sewer";
			this->Restaurant_To_Sewer->Size = System::Drawing::Size(96, 64);
			this->Restaurant_To_Sewer->TabIndex = 64;
			this->Restaurant_To_Sewer->Text = L"進下水道";
			this->Restaurant_To_Sewer->UseVisualStyleBackColor = true;
			this->Restaurant_To_Sewer->Visible = false;
			this->Restaurant_To_Sewer->Click += gcnew System::EventHandler(this, &Form1::Restaurant_To_Sewer_Click);
			// 
			// Library_To_Sewer
			// 
			this->Library_To_Sewer->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Library_To_Sewer->Location = System::Drawing::Point(34, 206);
			this->Library_To_Sewer->Name = L"Library_To_Sewer";
			this->Library_To_Sewer->Size = System::Drawing::Size(96, 64);
			this->Library_To_Sewer->TabIndex = 65;
			this->Library_To_Sewer->Text = L"進下水道";
			this->Library_To_Sewer->UseVisualStyleBackColor = true;
			this->Library_To_Sewer->Visible = false;
			this->Library_To_Sewer->Click += gcnew System::EventHandler(this, &Form1::Library_To_Sewer_Click);
			// 
			// Lake_To_Sewer
			// 
			this->Lake_To_Sewer->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Lake_To_Sewer->Location = System::Drawing::Point(34, 206);
			this->Lake_To_Sewer->Name = L"Lake_To_Sewer";
			this->Lake_To_Sewer->Size = System::Drawing::Size(96, 64);
			this->Lake_To_Sewer->TabIndex = 67;
			this->Lake_To_Sewer->Text = L"進下水道";
			this->Lake_To_Sewer->UseVisualStyleBackColor = true;
			this->Lake_To_Sewer->Visible = false;
			this->Lake_To_Sewer->Click += gcnew System::EventHandler(this, &Form1::Lake_To_Sewer_Click);
			// 
			// Sewer_To_Plazza
			// 
			this->Sewer_To_Plazza->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_To_Plazza->Location = System::Drawing::Point(681, 223);
			this->Sewer_To_Plazza->Name = L"Sewer_To_Plazza";
			this->Sewer_To_Plazza->Size = System::Drawing::Size(96, 64);
			this->Sewer_To_Plazza->TabIndex = 68;
			this->Sewer_To_Plazza->Text = L"回廣場";
			this->Sewer_To_Plazza->UseVisualStyleBackColor = true;
			this->Sewer_To_Plazza->Visible = false;
			this->Sewer_To_Plazza->Click += gcnew System::EventHandler(this, &Form1::Sewer_To_Plazza_Click);
			// 
			// Sewer_To_Inn
			// 
			this->Sewer_To_Inn->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_To_Inn->Location = System::Drawing::Point(681, 223);
			this->Sewer_To_Inn->Name = L"Sewer_To_Inn";
			this->Sewer_To_Inn->Size = System::Drawing::Size(96, 64);
			this->Sewer_To_Inn->TabIndex = 69;
			this->Sewer_To_Inn->Text = L"回酒館";
			this->Sewer_To_Inn->UseVisualStyleBackColor = true;
			this->Sewer_To_Inn->Visible = false;
			this->Sewer_To_Inn->Click += gcnew System::EventHandler(this, &Form1::Sewer_To_Inn_Click);
			// 
			// Sewer_To_Market
			// 
			this->Sewer_To_Market->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_To_Market->Location = System::Drawing::Point(681, 223);
			this->Sewer_To_Market->Name = L"Sewer_To_Market";
			this->Sewer_To_Market->Size = System::Drawing::Size(96, 64);
			this->Sewer_To_Market->TabIndex = 70;
			this->Sewer_To_Market->Text = L"回市場";
			this->Sewer_To_Market->UseVisualStyleBackColor = true;
			this->Sewer_To_Market->Visible = false;
			this->Sewer_To_Market->Click += gcnew System::EventHandler(this, &Form1::Sewer_To_Market_Click);
			// 
			// Sewer_To_Restaurant
			// 
			this->Sewer_To_Restaurant->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_To_Restaurant->Location = System::Drawing::Point(681, 223);
			this->Sewer_To_Restaurant->Name = L"Sewer_To_Restaurant";
			this->Sewer_To_Restaurant->Size = System::Drawing::Size(96, 64);
			this->Sewer_To_Restaurant->TabIndex = 71;
			this->Sewer_To_Restaurant->Text = L"回餐廳";
			this->Sewer_To_Restaurant->UseVisualStyleBackColor = true;
			this->Sewer_To_Restaurant->Visible = false;
			this->Sewer_To_Restaurant->Click += gcnew System::EventHandler(this, &Form1::Sewer_To_Restaurant_Click);
			// 
			// Sewer_To_Library
			// 
			this->Sewer_To_Library->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_To_Library->Location = System::Drawing::Point(681, 223);
			this->Sewer_To_Library->Name = L"Sewer_To_Library";
			this->Sewer_To_Library->Size = System::Drawing::Size(96, 64);
			this->Sewer_To_Library->TabIndex = 72;
			this->Sewer_To_Library->Text = L"回圖書館";
			this->Sewer_To_Library->UseVisualStyleBackColor = true;
			this->Sewer_To_Library->Visible = false;
			this->Sewer_To_Library->Click += gcnew System::EventHandler(this, &Form1::Sewer_To_Library_Click);
			// 
			// Sewer_Plazza_Inn
			// 
			this->Sewer_Plazza_Inn->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Plazza_Inn->Location = System::Drawing::Point(938, 512);
			this->Sewer_Plazza_Inn->Name = L"Sewer_Plazza_Inn";
			this->Sewer_Plazza_Inn->Size = System::Drawing::Size(64, 32);
			this->Sewer_Plazza_Inn->TabIndex = 73;
			this->Sewer_Plazza_Inn->Text = L"->";
			this->Sewer_Plazza_Inn->UseVisualStyleBackColor = true;
			this->Sewer_Plazza_Inn->Visible = false;
			this->Sewer_Plazza_Inn->Click += gcnew System::EventHandler(this, &Form1::Sewer_Plazza_Inn_Click);
			// 
			// Sewer_Inn_Outlet
			// 
			this->Sewer_Inn_Outlet->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Inn_Outlet->Location = System::Drawing::Point(938, 512);
			this->Sewer_Inn_Outlet->Name = L"Sewer_Inn_Outlet";
			this->Sewer_Inn_Outlet->Size = System::Drawing::Size(64, 32);
			this->Sewer_Inn_Outlet->TabIndex = 74;
			this->Sewer_Inn_Outlet->Text = L"->";
			this->Sewer_Inn_Outlet->UseVisualStyleBackColor = true;
			this->Sewer_Inn_Outlet->Visible = false;
			this->Sewer_Inn_Outlet->Click += gcnew System::EventHandler(this, &Form1::Sewer_Inn_Outlet_Click);
			// 
			// Sewer_Outlet_Market
			// 
			this->Sewer_Outlet_Market->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Outlet_Market->Location = System::Drawing::Point(16, 512);
			this->Sewer_Outlet_Market->Name = L"Sewer_Outlet_Market";
			this->Sewer_Outlet_Market->Size = System::Drawing::Size(64, 32);
			this->Sewer_Outlet_Market->TabIndex = 75;
			this->Sewer_Outlet_Market->Text = L"<-";
			this->Sewer_Outlet_Market->UseVisualStyleBackColor = true;
			this->Sewer_Outlet_Market->Visible = false;
			this->Sewer_Outlet_Market->Click += gcnew System::EventHandler(this, &Form1::Sewer_Outlet_Market_Click);
			// 
			// Sewer_Market_Restaurant
			// 
			this->Sewer_Market_Restaurant->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Market_Restaurant->Location = System::Drawing::Point(16, 512);
			this->Sewer_Market_Restaurant->Name = L"Sewer_Market_Restaurant";
			this->Sewer_Market_Restaurant->Size = System::Drawing::Size(64, 32);
			this->Sewer_Market_Restaurant->TabIndex = 76;
			this->Sewer_Market_Restaurant->Text = L"<-";
			this->Sewer_Market_Restaurant->UseVisualStyleBackColor = true;
			this->Sewer_Market_Restaurant->Visible = false;
			this->Sewer_Market_Restaurant->Click += gcnew System::EventHandler(this, &Form1::Sewer_Market_Restaurant_Click);
			// 
			// Sewer_Restaurant_Prison
			// 
			this->Sewer_Restaurant_Prison->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Restaurant_Prison->Location = System::Drawing::Point(16, 512);
			this->Sewer_Restaurant_Prison->Name = L"Sewer_Restaurant_Prison";
			this->Sewer_Restaurant_Prison->Size = System::Drawing::Size(64, 32);
			this->Sewer_Restaurant_Prison->TabIndex = 77;
			this->Sewer_Restaurant_Prison->Text = L"<-";
			this->Sewer_Restaurant_Prison->UseVisualStyleBackColor = true;
			this->Sewer_Restaurant_Prison->Visible = false;
			this->Sewer_Restaurant_Prison->Click += gcnew System::EventHandler(this, &Form1::Sewer_Restaurant_Prison_Click);
			// 
			// Sewer_Prison_Plazza
			// 
			this->Sewer_Prison_Plazza->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Prison_Plazza->Location = System::Drawing::Point(480, 667);
			this->Sewer_Prison_Plazza->Name = L"Sewer_Prison_Plazza";
			this->Sewer_Prison_Plazza->Size = System::Drawing::Size(64, 32);
			this->Sewer_Prison_Plazza->TabIndex = 78;
			this->Sewer_Prison_Plazza->Text = L"↓";
			this->Sewer_Prison_Plazza->UseVisualStyleBackColor = true;
			this->Sewer_Prison_Plazza->Visible = false;
			this->Sewer_Prison_Plazza->Click += gcnew System::EventHandler(this, &Form1::Sewer_Prison_Plazza_Click);
			// 
			// Sewer_Plazza_Prison
			// 
			this->Sewer_Plazza_Prison->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Plazza_Prison->Location = System::Drawing::Point(16, 512);
			this->Sewer_Plazza_Prison->Name = L"Sewer_Plazza_Prison";
			this->Sewer_Plazza_Prison->Size = System::Drawing::Size(64, 32);
			this->Sewer_Plazza_Prison->TabIndex = 79;
			this->Sewer_Plazza_Prison->Text = L"<-";
			this->Sewer_Plazza_Prison->UseVisualStyleBackColor = true;
			this->Sewer_Plazza_Prison->Visible = false;
			this->Sewer_Plazza_Prison->Click += gcnew System::EventHandler(this, &Form1::Sewer_Plazza_Prison_Click);
			// 
			// Sewer_Prison_Restaurant
			// 
			this->Sewer_Prison_Restaurant->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Prison_Restaurant->Location = System::Drawing::Point(16, 512);
			this->Sewer_Prison_Restaurant->Name = L"Sewer_Prison_Restaurant";
			this->Sewer_Prison_Restaurant->Size = System::Drawing::Size(64, 32);
			this->Sewer_Prison_Restaurant->TabIndex = 80;
			this->Sewer_Prison_Restaurant->Text = L"<-";
			this->Sewer_Prison_Restaurant->UseVisualStyleBackColor = true;
			this->Sewer_Prison_Restaurant->Visible = false;
			this->Sewer_Prison_Restaurant->Click += gcnew System::EventHandler(this, &Form1::Sewer_Prison_Restaurant_Click);
			// 
			// Sewer_Restaurant_Market
			// 
			this->Sewer_Restaurant_Market->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Restaurant_Market->Location = System::Drawing::Point(938, 512);
			this->Sewer_Restaurant_Market->Name = L"Sewer_Restaurant_Market";
			this->Sewer_Restaurant_Market->Size = System::Drawing::Size(64, 32);
			this->Sewer_Restaurant_Market->TabIndex = 81;
			this->Sewer_Restaurant_Market->Text = L"->";
			this->Sewer_Restaurant_Market->UseVisualStyleBackColor = true;
			this->Sewer_Restaurant_Market->Visible = false;
			this->Sewer_Restaurant_Market->Click += gcnew System::EventHandler(this, &Form1::Sewer_Restaurant_Market_Click);
			// 
			// Sewer_Market_Outlet
			// 
			this->Sewer_Market_Outlet->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Market_Outlet->Location = System::Drawing::Point(938, 512);
			this->Sewer_Market_Outlet->Name = L"Sewer_Market_Outlet";
			this->Sewer_Market_Outlet->Size = System::Drawing::Size(64, 32);
			this->Sewer_Market_Outlet->TabIndex = 82;
			this->Sewer_Market_Outlet->Text = L"->";
			this->Sewer_Market_Outlet->UseVisualStyleBackColor = true;
			this->Sewer_Market_Outlet->Visible = false;
			this->Sewer_Market_Outlet->Click += gcnew System::EventHandler(this, &Form1::Sewer_Market_Outlet_Click);
			// 
			// Sewer_Outlet_Inn
			// 
			this->Sewer_Outlet_Inn->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Outlet_Inn->Location = System::Drawing::Point(480, 200);
			this->Sewer_Outlet_Inn->Name = L"Sewer_Outlet_Inn";
			this->Sewer_Outlet_Inn->Size = System::Drawing::Size(64, 32);
			this->Sewer_Outlet_Inn->TabIndex = 83;
			this->Sewer_Outlet_Inn->Text = L"↑";
			this->Sewer_Outlet_Inn->UseVisualStyleBackColor = true;
			this->Sewer_Outlet_Inn->Visible = false;
			this->Sewer_Outlet_Inn->Click += gcnew System::EventHandler(this, &Form1::Sewer_Outlet_Inn_Click);
			// 
			// Sewer_Inn_Plazza
			// 
			this->Sewer_Inn_Plazza->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Inn_Plazza->Location = System::Drawing::Point(16, 512);
			this->Sewer_Inn_Plazza->Name = L"Sewer_Inn_Plazza";
			this->Sewer_Inn_Plazza->Size = System::Drawing::Size(64, 32);
			this->Sewer_Inn_Plazza->TabIndex = 84;
			this->Sewer_Inn_Plazza->Text = L"<-";
			this->Sewer_Inn_Plazza->UseVisualStyleBackColor = true;
			this->Sewer_Inn_Plazza->Visible = false;
			this->Sewer_Inn_Plazza->Click += gcnew System::EventHandler(this, &Form1::Sewer_Inn_Plazza_Click);
			// 
			// Sewer_Prison_Intersection
			// 
			this->Sewer_Prison_Intersection->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Prison_Intersection->Location = System::Drawing::Point(938, 512);
			this->Sewer_Prison_Intersection->Name = L"Sewer_Prison_Intersection";
			this->Sewer_Prison_Intersection->Size = System::Drawing::Size(64, 32);
			this->Sewer_Prison_Intersection->TabIndex = 85;
			this->Sewer_Prison_Intersection->Text = L"->";
			this->Sewer_Prison_Intersection->UseVisualStyleBackColor = true;
			this->Sewer_Prison_Intersection->Visible = false;
			this->Sewer_Prison_Intersection->Click += gcnew System::EventHandler(this, &Form1::Sewer_Prison_Intersection_Click);
			// 
			// Sewer_Library_Intersection
			// 
			this->Sewer_Library_Intersection->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Library_Intersection->Location = System::Drawing::Point(16, 512);
			this->Sewer_Library_Intersection->Name = L"Sewer_Library_Intersection";
			this->Sewer_Library_Intersection->Size = System::Drawing::Size(64, 32);
			this->Sewer_Library_Intersection->TabIndex = 86;
			this->Sewer_Library_Intersection->Text = L"<-";
			this->Sewer_Library_Intersection->UseVisualStyleBackColor = true;
			this->Sewer_Library_Intersection->Visible = false;
			this->Sewer_Library_Intersection->Click += gcnew System::EventHandler(this, &Form1::Sewer_Library_Intersection_Click);
			// 
			// Sewer_Library_Inn
			// 
			this->Sewer_Library_Inn->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Library_Inn->Location = System::Drawing::Point(938, 512);
			this->Sewer_Library_Inn->Name = L"Sewer_Library_Inn";
			this->Sewer_Library_Inn->Size = System::Drawing::Size(64, 32);
			this->Sewer_Library_Inn->TabIndex = 87;
			this->Sewer_Library_Inn->Text = L"->";
			this->Sewer_Library_Inn->UseVisualStyleBackColor = true;
			this->Sewer_Library_Inn->Visible = false;
			this->Sewer_Library_Inn->Click += gcnew System::EventHandler(this, &Form1::Sewer_Library_Inn_Click);
			// 
			// Sewer_Inn_Library
			// 
			this->Sewer_Inn_Library->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Inn_Library->Location = System::Drawing::Point(480, 200);
			this->Sewer_Inn_Library->Name = L"Sewer_Inn_Library";
			this->Sewer_Inn_Library->Size = System::Drawing::Size(64, 32);
			this->Sewer_Inn_Library->TabIndex = 88;
			this->Sewer_Inn_Library->Text = L"↑";
			this->Sewer_Inn_Library->UseVisualStyleBackColor = true;
			this->Sewer_Inn_Library->Visible = false;
			this->Sewer_Inn_Library->Click += gcnew System::EventHandler(this, &Form1::Sewer_Inn_Library_Click);
			// 
			// Sewer_Intersection_Library
			// 
			this->Sewer_Intersection_Library->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Intersection_Library->Location = System::Drawing::Point(938, 512);
			this->Sewer_Intersection_Library->Name = L"Sewer_Intersection_Library";
			this->Sewer_Intersection_Library->Size = System::Drawing::Size(64, 32);
			this->Sewer_Intersection_Library->TabIndex = 89;
			this->Sewer_Intersection_Library->Text = L"->";
			this->Sewer_Intersection_Library->UseVisualStyleBackColor = true;
			this->Sewer_Intersection_Library->Visible = false;
			this->Sewer_Intersection_Library->Click += gcnew System::EventHandler(this, &Form1::Sewer_Intersection_Library_Click);
			// 
			// Sewer_Intersection_Prison
			// 
			this->Sewer_Intersection_Prison->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Intersection_Prison->Location = System::Drawing::Point(480, 667);
			this->Sewer_Intersection_Prison->Name = L"Sewer_Intersection_Prison";
			this->Sewer_Intersection_Prison->Size = System::Drawing::Size(64, 32);
			this->Sewer_Intersection_Prison->TabIndex = 90;
			this->Sewer_Intersection_Prison->Text = L"↓";
			this->Sewer_Intersection_Prison->UseVisualStyleBackColor = true;
			this->Sewer_Intersection_Prison->Visible = false;
			this->Sewer_Intersection_Prison->Click += gcnew System::EventHandler(this, &Form1::Sewer_Intersection_Prison_Click);
			// 
			// Sewer_Intersection_Lake
			// 
			this->Sewer_Intersection_Lake->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Intersection_Lake->Location = System::Drawing::Point(16, 512);
			this->Sewer_Intersection_Lake->Name = L"Sewer_Intersection_Lake";
			this->Sewer_Intersection_Lake->Size = System::Drawing::Size(64, 32);
			this->Sewer_Intersection_Lake->TabIndex = 91;
			this->Sewer_Intersection_Lake->Text = L"<-";
			this->Sewer_Intersection_Lake->UseVisualStyleBackColor = true;
			this->Sewer_Intersection_Lake->Visible = false;
			this->Sewer_Intersection_Lake->Click += gcnew System::EventHandler(this, &Form1::Sewer_Intersection_Lake_Click);
			// 
			// Sewer_Lake_Intersection
			// 
			this->Sewer_Lake_Intersection->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_Lake_Intersection->Location = System::Drawing::Point(480, 667);
			this->Sewer_Lake_Intersection->Name = L"Sewer_Lake_Intersection";
			this->Sewer_Lake_Intersection->Size = System::Drawing::Size(64, 32);
			this->Sewer_Lake_Intersection->TabIndex = 92;
			this->Sewer_Lake_Intersection->Text = L"↓";
			this->Sewer_Lake_Intersection->UseVisualStyleBackColor = true;
			this->Sewer_Lake_Intersection->Visible = false;
			this->Sewer_Lake_Intersection->Click += gcnew System::EventHandler(this, &Form1::Sewer_Lake_Intersection_Click);
			// 
			// chat_stranger_plazza
			// 
			this->chat_stranger_plazza->Font = (gcnew System::Drawing::Font(L"標楷體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chat_stranger_plazza->Location = System::Drawing::Point(593, 575);
			this->chat_stranger_plazza->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->chat_stranger_plazza->Name = L"chat_stranger_plazza";
			this->chat_stranger_plazza->Size = System::Drawing::Size(96, 64);
			this->chat_stranger_plazza->TabIndex = 93;
			this->chat_stranger_plazza->Text = L"與老人談話";
			this->chat_stranger_plazza->UseVisualStyleBackColor = true;
			this->chat_stranger_plazza->Visible = false;
			this->chat_stranger_plazza->Click += gcnew System::EventHandler(this, &Form1::chat_stranger_plazza_Click);
			// 
			// Spot_Prison_Out
			// 
			this->Spot_Prison_Out->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Spot_Prison_Out->Location = System::Drawing::Point(593, 651);
			this->Spot_Prison_Out->Name = L"Spot_Prison_Out";
			this->Spot_Prison_Out->Size = System::Drawing::Size(96, 64);
			this->Spot_Prison_Out->TabIndex = 94;
			this->Spot_Prison_Out->Text = L"觀察建築";
			this->Spot_Prison_Out->UseVisualStyleBackColor = true;
			this->Spot_Prison_Out->Visible = false;
			this->Spot_Prison_Out->Click += gcnew System::EventHandler(this, &Form1::Spot_Prison_Out_Click);
			// 
			// counterattack_button
			// 
			this->counterattack_button->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->counterattack_button->Location = System::Drawing::Point(869, 528);
			this->counterattack_button->Name = L"counterattack_button";
			this->counterattack_button->Size = System::Drawing::Size(96, 64);
			this->counterattack_button->TabIndex = 96;
			this->counterattack_button->Text = L"反擊";
			this->counterattack_button->UseVisualStyleBackColor = true;
			this->counterattack_button->Visible = false;
			this->counterattack_button->Click += gcnew System::EventHandler(this, &Form1::counterattack_button_Click);
			// 
			// evade_button
			// 
			this->evade_button->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->evade_button->Location = System::Drawing::Point(869, 378);
			this->evade_button->Name = L"evade_button";
			this->evade_button->Size = System::Drawing::Size(96, 64);
			this->evade_button->TabIndex = 97;
			this->evade_button->Text = L"閃避";
			this->evade_button->UseVisualStyleBackColor = true;
			this->evade_button->Visible = false;
			this->evade_button->Click += gcnew System::EventHandler(this, &Form1::evade_button_Click);
			// 
			// attack_button
			// 
			this->attack_button->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->attack_button->Location = System::Drawing::Point(869, 220);
			this->attack_button->Name = L"attack_button";
			this->attack_button->Size = System::Drawing::Size(96, 64);
			this->attack_button->TabIndex = 98;
			this->attack_button->Text = L"攻擊";
			this->attack_button->UseVisualStyleBackColor = true;
			this->attack_button->Visible = false;
			this->attack_button->Click += gcnew System::EventHandler(this, &Form1::attack_button_Click);
			// 
			// Library_Library_In
			// 
			this->Library_Library_In->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Library_Library_In->Location = System::Drawing::Point(695, 651);
			this->Library_Library_In->Name = L"Library_Library_In";
			this->Library_Library_In->Size = System::Drawing::Size(96, 64);
			this->Library_Library_In->TabIndex = 100;
			this->Library_Library_In->Text = L"尋找書籍";
			this->Library_Library_In->UseVisualStyleBackColor = true;
			this->Library_Library_In->Visible = false;
			this->Library_Library_In->Click += gcnew System::EventHandler(this, &Form1::Library_Library_In_Click);
			// 
			// Spot_Library_In
			// 
			this->Spot_Library_In->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Spot_Library_In->Location = System::Drawing::Point(593, 650);
			this->Spot_Library_In->Name = L"Spot_Library_In";
			this->Spot_Library_In->Size = System::Drawing::Size(96, 64);
			this->Spot_Library_In->TabIndex = 101;
			this->Spot_Library_In->Text = L"觀察圖書館";
			this->Spot_Library_In->UseVisualStyleBackColor = true;
			this->Spot_Library_In->Visible = false;
			this->Spot_Library_In->Click += gcnew System::EventHandler(this, &Form1::Spot_Library_In_Click);
			// 
			// Secret_To_Sewer
			// 
			this->Secret_To_Sewer->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Secret_To_Sewer->Location = System::Drawing::Point(480, 667);
			this->Secret_To_Sewer->Name = L"Secret_To_Sewer";
			this->Secret_To_Sewer->Size = System::Drawing::Size(64, 32);
			this->Secret_To_Sewer->TabIndex = 103;
			this->Secret_To_Sewer->Text = L"回月城";
			this->Secret_To_Sewer->UseVisualStyleBackColor = true;
			this->Secret_To_Sewer->Visible = false;
			this->Secret_To_Sewer->Click += gcnew System::EventHandler(this, &Form1::Secret_To_Sewer_Click);
			// 
			// background
			// 
			this->background->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->background->Location = System::Drawing::Point(0, 180);
			this->background->Name = L"background";
			this->background->Size = System::Drawing::Size(1024, 540);
			this->background->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->background->TabIndex = 55;
			this->background->TabStop = false;
			this->background->Visible = false;
			this->background->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click_1);
			// 
			// introduction_textBox
			// 
			this->introduction_textBox->BackColor = System::Drawing::SystemColors::Info;
			this->introduction_textBox->Enabled = false;
			this->introduction_textBox->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->introduction_textBox->Location = System::Drawing::Point(0, 181);
			this->introduction_textBox->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->introduction_textBox->Multiline = true;
			this->introduction_textBox->Name = L"introduction_textBox";
			this->introduction_textBox->Size = System::Drawing::Size(1024, 540);
			this->introduction_textBox->TabIndex = 12;
			this->introduction_textBox->Visible = false;
			this->introduction_textBox->TextChanged += gcnew System::EventHandler(this, &Form1::introduction_textBox_TextChanged);
			// 
			// menu
			// 
			this->menu->Location = System::Drawing::Point(0, 0);
			this->menu->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(1024, 960);
			this->menu->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->menu->TabIndex = 45;
			this->menu->TabStop = false;
			this->menu->Click += gcnew System::EventHandler(this, &Form1::pictureBox1_Click);
			// 
			// character_name
			// 
			this->character_name->AutoSize = true;
			this->character_name->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold));
			this->character_name->Location = System::Drawing::Point(4, 4);
			this->character_name->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->character_name->Name = L"character_name";
			this->character_name->Size = System::Drawing::Size(126, 16);
			this->character_name->TabIndex = 1;
			this->character_name->Text = L"選擇的角色職業";
			this->character_name->Visible = false;
			// 
			// STR
			// 
			this->STR->AutoSize = true;
			this->STR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->STR->Location = System::Drawing::Point(5, 30);
			this->STR->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->STR->Name = L"STR";
			this->STR->Size = System::Drawing::Size(40, 19);
			this->STR->TabIndex = 0;
			this->STR->Text = L"STR";
			this->STR->Visible = false;
			// 
			// player_power_text
			// 
			this->player_power_text->AutoSize = true;
			this->player_power_text->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold));
			this->player_power_text->Location = System::Drawing::Point(132, 4);
			this->player_power_text->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->player_power_text->Name = L"player_power_text";
			this->player_power_text->Size = System::Drawing::Size(101, 16);
			this->player_power_text->TabIndex = 2;
			this->player_power_text->Text = L"角色能力值:";
			this->player_power_text->Visible = false;
			// 
			// Sun
			// 
			this->Sun->ForeColor = System::Drawing::Color::OrangeRed;
			this->Sun->Location = System::Drawing::Point(815, 10);
			this->Sun->Maximum = 5;
			this->Sun->Name = L"Sun";
			this->Sun->Size = System::Drawing::Size(150, 30);
			this->Sun->TabIndex = 3;
			this->Sun->Visible = false;
			this->Sun->Click += gcnew System::EventHandler(this, &Form1::Sun_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox1->Location = System::Drawing::Point(975, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(40, 33);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"東";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox2->Location = System::Drawing::Point(650, 10);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(156, 33);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"太陽位置: 西";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// DEX
			// 
			this->DEX->AutoSize = true;
			this->DEX->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DEX->Location = System::Drawing::Point(5, 60);
			this->DEX->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->DEX->Name = L"DEX";
			this->DEX->Size = System::Drawing::Size(42, 19);
			this->DEX->TabIndex = 6;
			this->DEX->Text = L"DEX";
			this->DEX->Visible = false;
			// 
			// INT
			// 
			this->INT->AutoSize = true;
			this->INT->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->INT->Location = System::Drawing::Point(5, 90);
			this->INT->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->INT->Name = L"INT";
			this->INT->Size = System::Drawing::Size(37, 19);
			this->INT->TabIndex = 7;
			this->INT->Text = L"INT";
			this->INT->Visible = false;
			// 
			// CON
			// 
			this->CON->AutoSize = true;
			this->CON->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CON->Location = System::Drawing::Point(5, 120);
			this->CON->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->CON->Name = L"CON";
			this->CON->Size = System::Drawing::Size(44, 19);
			this->CON->TabIndex = 8;
			this->CON->Text = L"CON";
			this->CON->Visible = false;
			// 
			// APP
			// 
			this->APP->AutoSize = true;
			this->APP->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->APP->Location = System::Drawing::Point(5, 150);
			this->APP->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->APP->Name = L"APP";
			this->APP->Size = System::Drawing::Size(38, 19);
			this->APP->TabIndex = 9;
			this->APP->Text = L"APP";
			this->APP->Visible = false;
			// 
			// POW
			// 
			this->POW->AutoSize = true;
			this->POW->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->POW->Location = System::Drawing::Point(85, 30);
			this->POW->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->POW->Name = L"POW";
			this->POW->Size = System::Drawing::Size(45, 19);
			this->POW->TabIndex = 10;
			this->POW->Text = L"POW";
			this->POW->Visible = false;
			// 
			// SIZ
			// 
			this->SIZ->AutoSize = true;
			this->SIZ->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->SIZ->Location = System::Drawing::Point(85, 90);
			this->SIZ->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->SIZ->Name = L"SIZ";
			this->SIZ->Size = System::Drawing::Size(33, 19);
			this->SIZ->TabIndex = 11;
			this->SIZ->Text = L"SIZ";
			this->SIZ->Visible = false;
			// 
			// DB
			// 
			this->DB->AutoSize = true;
			this->DB->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->DB->Location = System::Drawing::Point(85, 60);
			this->DB->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->DB->Name = L"DB";
			this->DB->Size = System::Drawing::Size(32, 19);
			this->DB->TabIndex = 12;
			this->DB->Text = L"DB";
			this->DB->Visible = false;
			// 
			// EDU
			// 
			this->EDU->AutoSize = true;
			this->EDU->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->EDU->Location = System::Drawing::Point(85, 120);
			this->EDU->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->EDU->Name = L"EDU";
			this->EDU->Size = System::Drawing::Size(42, 19);
			this->EDU->TabIndex = 13;
			this->EDU->Text = L"EDU";
			this->EDU->Visible = false;
			// 
			// LUK
			// 
			this->LUK->AutoSize = true;
			this->LUK->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->LUK->Location = System::Drawing::Point(85, 150);
			this->LUK->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->LUK->Name = L"LUK";
			this->LUK->Size = System::Drawing::Size(42, 19);
			this->LUK->TabIndex = 14;
			this->LUK->Text = L"LUK";
			this->LUK->Visible = false;
			// 
			// HP
			// 
			this->HP->AutoSize = true;
			this->HP->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HP->Location = System::Drawing::Point(654, 64);
			this->HP->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->HP->Name = L"HP";
			this->HP->Size = System::Drawing::Size(40, 24);
			this->HP->TabIndex = 15;
			this->HP->Text = L"HP";
			this->HP->Visible = false;
			// 
			// MP
			// 
			this->MP->AutoSize = true;
			this->MP->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MP->Location = System::Drawing::Point(654, 101);
			this->MP->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->MP->Name = L"MP";
			this->MP->Size = System::Drawing::Size(40, 23);
			this->MP->TabIndex = 16;
			this->MP->Text = L"MP";
			this->MP->Visible = false;
			// 
			// SPOT
			// 
			this->SPOT->AutoSize = true;
			this->SPOT->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->SPOT->Location = System::Drawing::Point(189, 30);
			this->SPOT->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->SPOT->Name = L"SPOT";
			this->SPOT->Size = System::Drawing::Size(39, 19);
			this->SPOT->TabIndex = 17;
			this->SPOT->Text = L"Spot";
			this->SPOT->Visible = false;
			// 
			// LISTEN
			// 
			this->LISTEN->AutoSize = true;
			this->LISTEN->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->LISTEN->Location = System::Drawing::Point(189, 60);
			this->LISTEN->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->LISTEN->Name = L"LISTEN";
			this->LISTEN->Size = System::Drawing::Size(51, 19);
			this->LISTEN->TabIndex = 18;
			this->LISTEN->Text = L"Listen";
			this->LISTEN->Visible = false;
			// 
			// LIBRARY
			// 
			this->LIBRARY->AutoSize = true;
			this->LIBRARY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->LIBRARY->Location = System::Drawing::Point(189, 90);
			this->LIBRARY->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->LIBRARY->Name = L"LIBRARY";
			this->LIBRARY->Size = System::Drawing::Size(59, 19);
			this->LIBRARY->TabIndex = 19;
			this->LIBRARY->Text = L"Library";
			this->LIBRARY->Visible = false;
			// 
			// BRAWL
			// 
			this->BRAWL->AutoSize = true;
			this->BRAWL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->BRAWL->Location = System::Drawing::Point(189, 120);
			this->BRAWL->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->BRAWL->Name = L"BRAWL";
			this->BRAWL->Size = System::Drawing::Size(48, 19);
			this->BRAWL->TabIndex = 20;
			this->BRAWL->Text = L"Brawl";
			this->BRAWL->Visible = false;
			// 
			// EVADE
			// 
			this->EVADE->AutoSize = true;
			this->EVADE->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->EVADE->Location = System::Drawing::Point(189, 150);
			this->EVADE->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->EVADE->Name = L"EVADE";
			this->EVADE->Size = System::Drawing::Size(51, 19);
			this->EVADE->TabIndex = 21;
			this->EVADE->Text = L"Evade";
			this->EVADE->Visible = false;
			// 
			// SAN
			// 
			this->SAN->AutoSize = true;
			this->SAN->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SAN->Location = System::Drawing::Point(645, 138);
			this->SAN->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->SAN->Name = L"SAN";
			this->SAN->Size = System::Drawing::Size(49, 23);
			this->SAN->TabIndex = 22;
			this->SAN->Text = L"SAN";
			this->SAN->Visible = false;
			// 
			// HISTORY
			// 
			this->HISTORY->AutoSize = true;
			this->HISTORY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->HISTORY->Location = System::Drawing::Point(313, 60);
			this->HISTORY->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->HISTORY->Name = L"HISTORY";
			this->HISTORY->Size = System::Drawing::Size(59, 19);
			this->HISTORY->TabIndex = 23;
			this->HISTORY->Text = L"History";
			this->HISTORY->Visible = false;
			// 
			// OCCULT
			// 
			this->OCCULT->AutoSize = true;
			this->OCCULT->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->OCCULT->Location = System::Drawing::Point(313, 150);
			this->OCCULT->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->OCCULT->Name = L"OCCULT";
			this->OCCULT->Size = System::Drawing::Size(52, 19);
			this->OCCULT->TabIndex = 24;
			this->OCCULT->Text = L"Occult";
			this->OCCULT->Visible = false;
			// 
			// ARCHAEOLOGY
			// 
			this->ARCHAEOLOGY->AutoSize = true;
			this->ARCHAEOLOGY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->ARCHAEOLOGY->Location = System::Drawing::Point(313, 120);
			this->ARCHAEOLOGY->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->ARCHAEOLOGY->Name = L"ARCHAEOLOGY";
			this->ARCHAEOLOGY->Size = System::Drawing::Size(93, 19);
			this->ARCHAEOLOGY->TabIndex = 25;
			this->ARCHAEOLOGY->Text = L"Archaeology";
			this->ARCHAEOLOGY->Visible = false;
			// 
			// PSYCOLOGY
			// 
			this->PSYCOLOGY->AutoSize = true;
			this->PSYCOLOGY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->PSYCOLOGY->Location = System::Drawing::Point(313, 30);
			this->PSYCOLOGY->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->PSYCOLOGY->Name = L"PSYCOLOGY";
			this->PSYCOLOGY->Size = System::Drawing::Size(76, 19);
			this->PSYCOLOGY->TabIndex = 26;
			this->PSYCOLOGY->Text = L"Psycology";
			this->PSYCOLOGY->Visible = false;
			// 
			// BIOLOGY
			// 
			this->BIOLOGY->AutoSize = true;
			this->BIOLOGY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->BIOLOGY->Location = System::Drawing::Point(313, 90);
			this->BIOLOGY->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->BIOLOGY->Name = L"BIOLOGY";
			this->BIOLOGY->Size = System::Drawing::Size(60, 19);
			this->BIOLOGY->TabIndex = 27;
			this->BIOLOGY->Text = L"Biology";
			this->BIOLOGY->Visible = false;
			// 
			// MEDICINE
			// 
			this->MEDICINE->AutoSize = true;
			this->MEDICINE->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold));
			this->MEDICINE->Location = System::Drawing::Point(471, 30);
			this->MEDICINE->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->MEDICINE->Name = L"MEDICINE";
			this->MEDICINE->Size = System::Drawing::Size(72, 19);
			this->MEDICINE->TabIndex = 28;
			this->MEDICINE->Text = L"Medicine";
			this->MEDICINE->Visible = false;
			// 
			// HP_progressBar
			// 
			this->HP_progressBar->ForeColor = System::Drawing::Color::Red;
			this->HP_progressBar->Location = System::Drawing::Point(722, 60);
			this->HP_progressBar->Name = L"HP_progressBar";
			this->HP_progressBar->Size = System::Drawing::Size(281, 29);
			this->HP_progressBar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->HP_progressBar->TabIndex = 29;
			this->HP_progressBar->Visible = false;
			// 
			// monster_pic
			// 
			this->monster_pic->Location = System::Drawing::Point(356, 180);
			this->monster_pic->Name = L"monster_pic";
			this->monster_pic->Size = System::Drawing::Size(333, 540);
			this->monster_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->monster_pic->TabIndex = 99;
			this->monster_pic->TabStop = false;
			this->monster_pic->Visible = false;
			// 
			// MP_progressBar
			// 
			this->MP_progressBar->BackColor = System::Drawing::SystemColors::Control;
			this->MP_progressBar->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->MP_progressBar->Location = System::Drawing::Point(722, 97);
			this->MP_progressBar->Name = L"MP_progressBar";
			this->MP_progressBar->Size = System::Drawing::Size(281, 29);
			this->MP_progressBar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->MP_progressBar->TabIndex = 30;
			this->MP_progressBar->Visible = false;
			// 
			// SAN_progressBar
			// 
			this->SAN_progressBar->ForeColor = System::Drawing::Color::MediumOrchid;
			this->SAN_progressBar->Location = System::Drawing::Point(722, 134);
			this->SAN_progressBar->Name = L"SAN_progressBar";
			this->SAN_progressBar->Size = System::Drawing::Size(281, 29);
			this->SAN_progressBar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->SAN_progressBar->TabIndex = 31;
			this->SAN_progressBar->Visible = false;
			// 
			// status_panel
			// 
			this->status_panel->AutoSize = true;
			this->status_panel->Controls->Add(this->SAN_progressBar);
			this->status_panel->Controls->Add(this->MP_progressBar);
			this->status_panel->Controls->Add(this->HP_progressBar);
			this->status_panel->Controls->Add(this->MEDICINE);
			this->status_panel->Controls->Add(this->BIOLOGY);
			this->status_panel->Controls->Add(this->PSYCOLOGY);
			this->status_panel->Controls->Add(this->ARCHAEOLOGY);
			this->status_panel->Controls->Add(this->OCCULT);
			this->status_panel->Controls->Add(this->HISTORY);
			this->status_panel->Controls->Add(this->SAN);
			this->status_panel->Controls->Add(this->EVADE);
			this->status_panel->Controls->Add(this->BRAWL);
			this->status_panel->Controls->Add(this->LIBRARY);
			this->status_panel->Controls->Add(this->LISTEN);
			this->status_panel->Controls->Add(this->SPOT);
			this->status_panel->Controls->Add(this->MP);
			this->status_panel->Controls->Add(this->HP);
			this->status_panel->Controls->Add(this->LUK);
			this->status_panel->Controls->Add(this->EDU);
			this->status_panel->Controls->Add(this->DB);
			this->status_panel->Controls->Add(this->SIZ);
			this->status_panel->Controls->Add(this->POW);
			this->status_panel->Controls->Add(this->APP);
			this->status_panel->Controls->Add(this->CON);
			this->status_panel->Controls->Add(this->INT);
			this->status_panel->Controls->Add(this->DEX);
			this->status_panel->Controls->Add(this->textBox2);
			this->status_panel->Controls->Add(this->textBox1);
			this->status_panel->Controls->Add(this->Sun);
			this->status_panel->Controls->Add(this->player_power_text);
			this->status_panel->Controls->Add(this->STR);
			this->status_panel->Controls->Add(this->character_name);
			this->status_panel->Location = System::Drawing::Point(0, 0);
			this->status_panel->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->status_panel->Name = L"status_panel";
			this->status_panel->Size = System::Drawing::Size(1027, 180);
			this->status_panel->TabIndex = 11;
			this->status_panel->Visible = false;
			this->status_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::status_panel_Paint);
			// 
			// Sewer_To_Secret
			// 
			this->Sewer_To_Secret->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Sewer_To_Secret->Location = System::Drawing::Point(480, 200);
			this->Sewer_To_Secret->Name = L"Sewer_To_Secret";
			this->Sewer_To_Secret->Size = System::Drawing::Size(64, 32);
			this->Sewer_To_Secret->TabIndex = 104;
			this->Sewer_To_Secret->Text = L"往暗道";
			this->Sewer_To_Secret->UseVisualStyleBackColor = true;
			this->Sewer_To_Secret->Visible = false;
			this->Sewer_To_Secret->Click += gcnew System::EventHandler(this, &Form1::Sewer_To_Secret_Click);
			// 
			// Prison_To_Secret
			// 
			this->Prison_To_Secret->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Prison_To_Secret->Location = System::Drawing::Point(480, 667);
			this->Prison_To_Secret->Name = L"Prison_To_Secret";
			this->Prison_To_Secret->Size = System::Drawing::Size(64, 32);
			this->Prison_To_Secret->TabIndex = 105;
			this->Prison_To_Secret->Text = L"往暗道";
			this->Prison_To_Secret->UseVisualStyleBackColor = true;
			this->Prison_To_Secret->Visible = false;
			this->Prison_To_Secret->Click += gcnew System::EventHandler(this, &Form1::Prison_To_Secret_Click);
			// 
			// Prison1_To_Prison2
			// 
			this->Prison1_To_Prison2->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Prison1_To_Prison2->Location = System::Drawing::Point(480, 200);
			this->Prison1_To_Prison2->Name = L"Prison1_To_Prison2";
			this->Prison1_To_Prison2->Size = System::Drawing::Size(64, 32);
			this->Prison1_To_Prison2->TabIndex = 106;
			this->Prison1_To_Prison2->Text = L"往二樓";
			this->Prison1_To_Prison2->UseVisualStyleBackColor = true;
			this->Prison1_To_Prison2->Visible = false;
			this->Prison1_To_Prison2->Click += gcnew System::EventHandler(this, &Form1::Prison1_To_Prison2_Click);
			// 
			// Prison2_To_Prison1
			// 
			this->Prison2_To_Prison1->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Prison2_To_Prison1->Location = System::Drawing::Point(480, 667);
			this->Prison2_To_Prison1->Name = L"Prison2_To_Prison1";
			this->Prison2_To_Prison1->Size = System::Drawing::Size(64, 32);
			this->Prison2_To_Prison1->TabIndex = 107;
			this->Prison2_To_Prison1->Text = L"往一樓";
			this->Prison2_To_Prison1->UseVisualStyleBackColor = true;
			this->Prison2_To_Prison1->Visible = false;
			this->Prison2_To_Prison1->Click += gcnew System::EventHandler(this, &Form1::Prison2_To_Prison1_Click);
			// 
			// NPCArthur
			// 
			this->NPCArthur->Location = System::Drawing::Point(266, 442);
			this->NPCArthur->Name = L"NPCArthur";
			this->NPCArthur->Size = System::Drawing::Size(54, 50);
			this->NPCArthur->TabIndex = 108;
			this->NPCArthur->TabStop = false;
			this->NPCArthur->Visible = false;
			// 
			// NPCBedivere
			// 
			this->NPCBedivere->Location = System::Drawing::Point(266, 386);
			this->NPCBedivere->Name = L"NPCBedivere";
			this->NPCBedivere->Size = System::Drawing::Size(54, 50);
			this->NPCBedivere->TabIndex = 109;
			this->NPCBedivere->TabStop = false;
			this->NPCBedivere->Visible = false;
			// 
			// NPCGuinevere
			// 
			this->NPCGuinevere->Location = System::Drawing::Point(266, 498);
			this->NPCGuinevere->Name = L"NPCGuinevere";
			this->NPCGuinevere->Size = System::Drawing::Size(54, 50);
			this->NPCGuinevere->TabIndex = 110;
			this->NPCGuinevere->TabStop = false;
			this->NPCGuinevere->Visible = false;
			// 
			// NPCGawain
			// 
			this->NPCGawain->Location = System::Drawing::Point(266, 274);
			this->NPCGawain->Name = L"NPCGawain";
			this->NPCGawain->Size = System::Drawing::Size(54, 50);
			this->NPCGawain->TabIndex = 111;
			this->NPCGawain->TabStop = false;
			this->NPCGawain->Visible = false;
			// 
			// NPCLancelot
			// 
			this->NPCLancelot->Location = System::Drawing::Point(266, 330);
			this->NPCLancelot->Name = L"NPCLancelot";
			this->NPCLancelot->Size = System::Drawing::Size(54, 50);
			this->NPCLancelot->TabIndex = 112;
			this->NPCLancelot->TabStop = false;
			this->NPCLancelot->Visible = false;
			// 
			// take_heart
			// 
			this->take_heart->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->take_heart->Location = System::Drawing::Point(593, 650);
			this->take_heart->Name = L"take_heart";
			this->take_heart->Size = System::Drawing::Size(96, 64);
			this->take_heart->TabIndex = 113;
			this->take_heart->Text = L"拿走心臟";
			this->take_heart->UseVisualStyleBackColor = true;
			this->take_heart->Visible = false;
			this->take_heart->Click += gcnew System::EventHandler(this, &Form1::take_heart_Click);
			// 
			// swallow_heart
			// 
			this->swallow_heart->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->swallow_heart->Location = System::Drawing::Point(695, 651);
			this->swallow_heart->Name = L"swallow_heart";
			this->swallow_heart->Size = System::Drawing::Size(96, 64);
			this->swallow_heart->TabIndex = 114;
			this->swallow_heart->Text = L"吞下心臟";
			this->swallow_heart->UseVisualStyleBackColor = true;
			this->swallow_heart->Visible = false;
			this->swallow_heart->Click += gcnew System::EventHandler(this, &Form1::swallow_heart_Click);
			// 
			// observe_swirl
			// 
			this->observe_swirl->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->observe_swirl->Location = System::Drawing::Point(593, 651);
			this->observe_swirl->Name = L"observe_swirl";
			this->observe_swirl->Size = System::Drawing::Size(96, 64);
			this->observe_swirl->TabIndex = 115;
			this->observe_swirl->Text = L"觀察漩渦";
			this->observe_swirl->UseVisualStyleBackColor = true;
			this->observe_swirl->Visible = false;
			this->observe_swirl->Click += gcnew System::EventHandler(this, &Form1::observe_swirl_Click);
			// 
			// go_into_swirl
			// 
			this->go_into_swirl->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->go_into_swirl->Location = System::Drawing::Point(695, 651);
			this->go_into_swirl->Name = L"go_into_swirl";
			this->go_into_swirl->Size = System::Drawing::Size(96, 64);
			this->go_into_swirl->TabIndex = 116;
			this->go_into_swirl->Text = L"走入漩渦";
			this->go_into_swirl->UseVisualStyleBackColor = true;
			this->go_into_swirl->Visible = false;
			this->go_into_swirl->Click += gcnew System::EventHandler(this, &Form1::go_into_swirl_Click);
			// 
			// spot_altar
			// 
			this->spot_altar->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->spot_altar->Location = System::Drawing::Point(593, 581);
			this->spot_altar->Name = L"spot_altar";
			this->spot_altar->Size = System::Drawing::Size(96, 64);
			this->spot_altar->TabIndex = 117;
			this->spot_altar->Text = L"觀察祭壇";
			this->spot_altar->UseVisualStyleBackColor = true;
			this->spot_altar->Visible = false;
			this->spot_altar->Click += gcnew System::EventHandler(this, &Form1::spot_altar_Click);
			// 
			// show_sword
			// 
			this->show_sword->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->show_sword->Location = System::Drawing::Point(593, 650);
			this->show_sword->Name = L"show_sword";
			this->show_sword->Size = System::Drawing::Size(96, 64);
			this->show_sword->TabIndex = 118;
			this->show_sword->Text = L"展示寶劍";
			this->show_sword->UseVisualStyleBackColor = true;
			this->show_sword->Visible = false;
			this->show_sword->Click += gcnew System::EventHandler(this, &Form1::show_sword_Click);
			// 
			// use_ash
			// 
			this->use_ash->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->use_ash->Location = System::Drawing::Point(593, 651);
			this->use_ash->Name = L"use_ash";
			this->use_ash->Size = System::Drawing::Size(96, 64);
			this->use_ash->TabIndex = 119;
			this->use_ash->Text = L"使用解夢灰";
			this->use_ash->UseVisualStyleBackColor = true;
			this->use_ash->Visible = false;
			this->use_ash->Click += gcnew System::EventHandler(this, &Form1::use_ash_Click);
			// 
			// talk_to_Guinevere
			// 
			this->talk_to_Guinevere->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->talk_to_Guinevere->Location = System::Drawing::Point(695, 650);
			this->talk_to_Guinevere->Name = L"talk_to_Guinevere";
			this->talk_to_Guinevere->Size = System::Drawing::Size(137, 64);
			this->talk_to_Guinevere->TabIndex = 120;
			this->talk_to_Guinevere->Text = L"與桂妮薇兒對話";
			this->talk_to_Guinevere->UseVisualStyleBackColor = true;
			this->talk_to_Guinevere->Visible = false;
			this->talk_to_Guinevere->Click += gcnew System::EventHandler(this, &Form1::talk_to_Guinevere_Click);
			// 
			// talk_to_Lancelot
			// 
			this->talk_to_Lancelot->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->talk_to_Lancelot->Location = System::Drawing::Point(695, 650);
			this->talk_to_Lancelot->Name = L"talk_to_Lancelot";
			this->talk_to_Lancelot->Size = System::Drawing::Size(137, 64);
			this->talk_to_Lancelot->TabIndex = 121;
			this->talk_to_Lancelot->Text = L"與藍斯洛特對話";
			this->talk_to_Lancelot->UseVisualStyleBackColor = true;
			this->talk_to_Lancelot->Visible = false;
			this->talk_to_Lancelot->Click += gcnew System::EventHandler(this, &Form1::talk_to_Lancelot_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1024, 960);
			this->Controls->Add(this->talk_to_Lancelot);
			this->Controls->Add(this->talk_to_Guinevere);
			this->Controls->Add(this->use_ash);
			this->Controls->Add(this->show_sword);
			this->Controls->Add(this->spot_altar);
			this->Controls->Add(this->go_into_swirl);
			this->Controls->Add(this->observe_swirl);
			this->Controls->Add(this->swallow_heart);
			this->Controls->Add(this->take_heart);
			this->Controls->Add(this->backpack_items_listView);
			this->Controls->Add(this->NPCLancelot);
			this->Controls->Add(this->NPCGawain);
			this->Controls->Add(this->NPCGuinevere);
			this->Controls->Add(this->NPCBedivere);
			this->Controls->Add(this->NPCArthur);
			this->Controls->Add(this->Prison2_To_Prison1);
			this->Controls->Add(this->Prison1_To_Prison2);
			this->Controls->Add(this->Prison_To_Secret);
			this->Controls->Add(this->Sewer_To_Secret);
			this->Controls->Add(this->Secret_To_Prison);
			this->Controls->Add(this->Secret_To_Sewer);
			this->Controls->Add(this->monster_pic);
			this->Controls->Add(this->Library_Library_In);
			this->Controls->Add(this->attack_button);
			this->Controls->Add(this->evade_button);
			this->Controls->Add(this->counterattack_button);
			this->Controls->Add(this->Spot_Prison_Out);
			this->Controls->Add(this->player_motion);
			this->Controls->Add(this->chat_stranger_plazza);
			this->Controls->Add(this->item_pic);
			this->Controls->Add(this->Sewer_Lake_Intersection);
			this->Controls->Add(this->manual_text);
			this->Controls->Add(this->Sewer_Intersection_Lake);
			this->Controls->Add(this->Sewer_Intersection_Prison);
			this->Controls->Add(this->Sewer_Intersection_Library);
			this->Controls->Add(this->Sewer_Inn_Library);
			this->Controls->Add(this->Sewer_Library_Inn);
			this->Controls->Add(this->Sewer_Library_Intersection);
			this->Controls->Add(this->Sewer_Prison_Intersection);
			this->Controls->Add(this->Sewer_Inn_Plazza);
			this->Controls->Add(this->Sewer_Outlet_Inn);
			this->Controls->Add(this->Sewer_Market_Outlet);
			this->Controls->Add(this->Sewer_Restaurant_Market);
			this->Controls->Add(this->Sewer_Prison_Restaurant);
			this->Controls->Add(this->Sewer_Plazza_Prison);
			this->Controls->Add(this->Sewer_Prison_Plazza);
			this->Controls->Add(this->Sewer_Restaurant_Prison);
			this->Controls->Add(this->Sewer_Market_Restaurant);
			this->Controls->Add(this->Sewer_Outlet_Market);
			this->Controls->Add(this->Sewer_Inn_Outlet);
			this->Controls->Add(this->Sewer_Plazza_Inn);
			this->Controls->Add(this->Sewer_To_Library);
			this->Controls->Add(this->Sewer_To_Restaurant);
			this->Controls->Add(this->Sewer_To_Market);
			this->Controls->Add(this->Sewer_To_Inn);
			this->Controls->Add(this->Sewer_To_Plazza);
			this->Controls->Add(this->Lake_To_Sewer);
			this->Controls->Add(this->Library_To_Sewer);
			this->Controls->Add(this->Restaurant_To_Sewer);
			this->Controls->Add(this->Market_To_Sewer);
			this->Controls->Add(this->Inn_To_Sewer);
			this->Controls->Add(this->Plazza_To_Sewer);
			this->Controls->Add(this->listen_stranger_plazza);
			this->Controls->Add(this->IntersectionRight_To_Palace);
			this->Controls->Add(this->Plazza_To_Inn);
			this->Controls->Add(this->Go_Out_Restaurant);
			this->Controls->Add(this->IntersectionLeft_To_Library);
			this->Controls->Add(this->Library_To_IntersectionRight);
			this->Controls->Add(this->Inn_To_Market);
			this->Controls->Add(this->Market_To_Restaurant);
			this->Controls->Add(this->Prison_To_IntersectionLeft);
			this->Controls->Add(this->Go_To_Restaurant);
			this->Controls->Add(this->Psychology_Lake2);
			this->Controls->Add(this->Observe_Inn);
			this->Controls->Add(this->studio);
			this->Controls->Add(this->diner);
			this->Controls->Add(this->Order);
			this->Controls->Add(this->Ask_Wagain);
			this->Controls->Add(this->Go_Out_Library);
			this->Controls->Add(this->Go_In_Library);
			this->Controls->Add(this->Go_In_Palace);
			this->Controls->Add(this->Lake_To_IntersectionLeft);
			this->Controls->Add(this->IntersectionLeft_To_Lake);
			this->Controls->Add(this->Library_To_IntersectionLeft);
			this->Controls->Add(this->IntersectionLeft_To_Prison);
			this->Controls->Add(this->Palace_To_IntersectionRight);
			this->Controls->Add(this->IntersectionRight_To_Inn);
			this->Controls->Add(this->IntersectionRight_To_Library);
			this->Controls->Add(this->Inn_To_IntersectionRight);
			this->Controls->Add(this->Prison_To_Plazza);
			this->Controls->Add(this->Prison_To_Restaurant);
			this->Controls->Add(this->Restaurant_To_Prison);
			this->Controls->Add(this->Restaurant_To_Market);
			this->Controls->Add(this->Market_To_Inn);
			this->Controls->Add(this->Inn_To_Plazza);
			this->Controls->Add(this->Go_Out_Room);
			this->Controls->Add(this->Go_In_Room);
			this->Controls->Add(this->Go_Out_Inn);
			this->Controls->Add(this->Go_In_Inn);
			this->Controls->Add(this->Plazza_To_Prison);
			this->Controls->Add(this->sundial);
			this->Controls->Add(this->signpost);
			this->Controls->Add(this->chose_character_text);
			this->Controls->Add(this->occultist_button);
			this->Controls->Add(this->reporter_button);
			this->Controls->Add(this->archaeologist_button);
			this->Controls->Add(this->back_to_home);
			this->Controls->Add(this->manual);
			this->Controls->Add(this->start);
			this->Controls->Add(this->backpack_panel);
			this->Controls->Add(this->status_panel);
			this->Controls->Add(this->introduction_textBox);
			this->Controls->Add(this->background);
			this->Controls->Add(this->Spot_Library_In);
			this->Controls->Add(this->menu);
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->Name = L"Form1";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"COC";
			this->TransparencyKey = System::Drawing::Color::SpringGreen;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::player_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::player_KeyUp);
			this->backpack_panel->ResumeLayout(false);
			this->backpack_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item_pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player_motion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->monster_pic))->EndInit();
			this->status_panel->ResumeLayout(false);
			this->status_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NPCArthur))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NPCBedivere))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NPCGuinevere))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NPCGawain))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->NPCLancelot))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		// main
		if (system_counter == 0)
		{
			initialize();
		}
		check_end_game();
		progress_bar_display();
		dirction_button_display();
		display_Guinevere();
		display_Lancelot();
		system_counter++;
		//button_collsion();
	}
	private: System::Void player_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode) {
		case Keys::Up:
			//player_motion->Location = System::Drawing::Point(player_motion->Location.X, player_motion->Location.Y - 10);
			moveUp = true;
			break;
		case Keys::Down:
			//player_motion->Location = System::Drawing::Point(player_motion->Location.X, player_motion->Location.Y + 10);
			moveDown = true;
			break;
		case Keys::Left:
			//player_motion->Location = System::Drawing::Point(player_motion->Location.X - 10, player_motion->Location.Y);
			moveLeft = true;
			break;
		case Keys::Right:
			//player_motion->Location = System::Drawing::Point(player_motion->Location.X + 10, player_motion->Location.Y);
			moveRight = true;
			break;
		}
	}
	private: System::Void player_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode) {
		case Keys::Up:
			moveUp = false;
			break;
		case Keys::Down:
			moveDown = false;
			break;
		case Keys::Left:
			moveLeft = false;
			break;
		case Keys::Right:
			moveRight = false;
			break;
		}
	}
		   void initialize(void) {
			   //initialize parameters
			   
			   //size initialize
			   AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			   menu->Size = System::Drawing::Size(WIDTH, HEIGHT);
			   manual_text->Size = System::Drawing::Size(WIDTH, 540);
			   backpack_panel->Size = System::Drawing::Size(WIDTH, 240);
			   status_panel->Size = System::Drawing::Size(WIDTH, 180);
			   menu->Size = System::Drawing::Size(WIDTH, HEIGHT);
			   ClientSize = System::Drawing::Size(WIDTH, HEIGHT);
			   item_pic->Size = System::Drawing::Size(WIDTH, 540);
			   background->Size = System::Drawing::Size(WIDTH, 540);
			   introduction_textBox->Size = System::Drawing::Size(WIDTH, 540);
			  
			   //picture initialize
			   menu->Image = gcnew Bitmap(gcnew System::String(back_ground.get_path()));
			   player_motion->Image = gcnew Bitmap(gcnew System::String("www//pic//char_pixel//Arthur.png"));
			   NPCArthur->Image = gcnew Bitmap(gcnew System::String("www//pic//char_pixel//Arthur.png"));
			   NPCBedivere->Image = gcnew Bitmap(gcnew System::String("www//pic//char_pixel//Bedivere.png"));
			   NPCGuinevere->Image = gcnew Bitmap(gcnew System::String("www//pic//char_pixel//Guinevere.png"));
			   NPCGawain->Image = gcnew Bitmap(gcnew System::String("www//pic//char_pixel//Gawain.png"));
			   NPCLancelot->Image = gcnew Bitmap(gcnew System::String("www//pic//char_pixel//Lancelot.png"));

			   // 起始按鈕
			   START_GAME = 0;
			   back_to_home->Parent = this;
			   manual->Parent = this;
			   start->Parent = this;
			   //transparent: 透明屬性
			   //this->TransparencyKey = System::Drawing::Color::SpringGreen;//透明屬性
			   player_motion->BackColor = System::Drawing::Color::SpringGreen;
			   //chose_character_text->BackColor = System::Drawing::Color::SpringGreen;

			   //初始化背包的表格
			   ColumnHeader^ header1 = gcnew ColumnHeader();
			   header1->Text = "持有物品";
			   header1->TextAlign = HorizontalAlignment::Left;
			   header1->Width = 254;

			   ColumnHeader^ header2 = gcnew ColumnHeader();
			   header2->TextAlign = HorizontalAlignment::Left;
			   header2->Text = "物品數量或狀態";
			   header2->Width = 254;
			   backpack_items_listView->Columns->Add(header1);
			   backpack_items_listView->Columns->Add(header2);

			   //增加物品到背包
			   ListViewItem^ coin = gcnew ListViewItem(gcnew array<String^> { L"錢", L"2023" });
			   backpack_items_listView->Items->Add(coin);

			   //初始化主角位置
			   player_motion->Location = System::Drawing::Point(480, 480);
		   }
		   void display_Scene_items(void) {
			   player.edit_position(player_motion->Location.X, player_motion->Location.Y);
			   if (END_GAME == 0 && START_GAME == 1) { //during the Game
				   for each (Control ^ control in this->Controls)
				   {
					   // basic objects, not in the scene
					   if (control->Name == L"status_panel" ||      //pannel
						   control->Name == L"backpack_panel" ||
						   control->Name == L"character_name" ||    //labels
						   control->Name == L"player_power_text" ||
						   control->Name == L"STR" ||               //labels: player's abilities
						   control->Name == L"CON" ||
						   control->Name == L"DEX" ||
						   control->Name == L"POW" ||
						   control->Name == L"APP" ||
						   control->Name == L"INT" ||
						   control->Name == L"SIZ" ||
						   control->Name == L"EDU" ||
						   control->Name == L"LUK" ||
						   control->Name == L"SAN" ||
						   control->Name == L"HP" ||
						   control->Name == L"MP" ||
						   control->Name == L"DB" ||
						   control->Name == L"SPOT" ||              //labels: player's skills
						   control->Name == L"LISTEN" ||
						   control->Name == L"LIBRARY" ||
						   control->Name == L"BRAWL" ||
						   control->Name == L"EVADE" ||
						   control->Name == L"HISTORY" ||
						   control->Name == L"OCCULT" ||
						   control->Name == L"PSYCOLOGY" ||
						   control->Name == L"BIOLOGY" ||
						   control->Name == L"ARCHAEOLOGY" ||
						   control->Name == L"MEDICINE" ||
						   control->Name == L"backpack" ||          //backpack
						   control->Name == L"background" ||        //background
						   control->Name == "player_motion" ||      //player
						   control->Name == L"Sun" ||               //bars
						   control->Name == L"HP_progressBar" ||
						   control->Name == L"MP_progressBar" ||
						   control->Name == L"SAN_progressBar")
					   {
						   //display
						   control->Visible = true;
					   }
					   //backpack object display
					   if (control->Name == L"backpack_items_listView" && backpack_open_or_close == 0) {
						   control->Visible = true;
					   }
					   //objects in plazza
					   else if (strcmp(place, "plazza") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "signpost" ||
							   control->Name == "Observe_Signpost" ||
							   control->Name == "sundial" ||
							   control->Name == "chatbox_1" ||
							   control->Name == "chatbox_2" ||
							   control->Name == "item_button" ||
							   control->Name == "Plazza_To_Sewer");
						   {
							   control->Visible = true;
						   }
						   //directions
						   if (control->Name == "Plazza_To_Prison" && player.collsion(16, 512)) {    //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "Plazza_To_Inn" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   // other condictions
						   else if (sun_count % 6 != 0 && (control->Name == "listen_stranger_plazza" || control->Name == "chat_stranger_plazza")) {
							   control->Visible = true;
						   }
						   else if (sun_count % 6 == 5 && (control->Name == "Ask_Wagain" || control->Name == "NPCGawain")) {
							   control->Visible = true;
						   }
					   }
					   //objects in inn
					   else if (strcmp(place, "inn") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "Go_In_Inn" ||
							   control->Name == "Observe_Inn" ||
							   control->Name == "Inn_To_Sewer") {
							   control->Visible = true;
						   }
						   //directions
						   if (control->Name == "Inn_To_IntersectionRight" && player.collsion(16, 512)) {    //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "Inn_To_Market" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "Inn_To_Plazza" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
					   }
					   //objects inside inn
					   else if (strcmp(place, "inn_in") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   // other condictions

					   }
					   //objects in inn's room
					   else if (strcmp(place, "room") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   // other condictions

					   }
					   //objects in market
					   else if (strcmp(place, "market") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "diner" ||
							   control->Name == "studio" ||
							   control->Name == "Market_To_Sewer") {
							   control->Visible = true;
						   }
						   //directions
						   if (control->Name == "Market_To_Inn" && player.collsion(16, 512)) {    //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "Market_To_Restaurant" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
					   }
					   //objects in restaurant
					   else if (strcmp(place, "restaurant") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions

					   }
					   //objects inside restaurant
					   else if (strcmp(place, "restaurant_in") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions

					   }
					   //objects in prison
					   else if (strcmp(place, "prison") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in prison's 1F
					   else if (strcmp(place, "1F") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in prison's 2F
					   else if (strcmp(place, "2F") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in library
					   else if (strcmp(place, "library") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in left
					   else if (strcmp(place, "left") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in right
					   else if (strcmp(place, "right") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in outlet
					   else if (strcmp(place, "outlet") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in secret
					   else if (strcmp(place, "secret") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in moon state
					   else if (strcmp(place, "moon_state") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in altar
					   else if (strcmp(place, "altar") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in palace
					   else if (strcmp(place, "palace") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects inside palace
					   else if (strcmp(place, "palace_END") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in sewer below library
					   else if (strcmp(place, "sewer_library") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in sewer below intersection
					   else if (strcmp(place, "sewer_intersection") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in sewer below inn
					   else if (strcmp(place, "sewer_inn") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in sewer below market
					   else if (strcmp(place, "sewer_market") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in sewer below restaurant
					   else if (strcmp(place, "sewer_restaurant") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   //objects in sewer below plazza
					   else if (strcmp(place, "sewer_plazza") == 0) {
						   //objects: you must set variable to check when the button is clicked otherwise it will not be invisible
						   if (control->Name == "") {

						   }
						   //directions
						   if (control->Name == "" && player.collsion(16, 512)) {       //left 
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(938, 512)) { //right
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 200)) { //up
							   control->Visible = true;
						   }
						   else if (control->Name == "" && player.collsion(480, 677)) { //down
							   control->Visible = true;
						   }
						   // other condictions
					   }
					   else {
						   //not to display
						   control->Visible = false;
					   }
				   }
			   }
		   }

		   void progress_bar_display(void) {
			   //this->label4->Text = ("MP:" + Convert::ToString(tank_profile.point.MP) + "/100");
			   if (player.get_ability().HP >= 0 && HP_value_progressBar != 0) {
				   HP_progressBar->Maximum = HP_value_progressBar;
				   HP_progressBar->Value = player.get_ability().HP;
			   }

			   if (player.get_ability().MP >= 0 && MP_value_progressBar != 0) {
				   MP_progressBar->Maximum = MP_value_progressBar;
				   MP_progressBar->Value = player.get_ability().MP;
			   }
			   if (player.get_ability().SAN >= 0 && SAN_value_progressBar != 0) {
				   SAN_progressBar->Maximum = SAN_value_progressBar;
				   SAN_progressBar->Value = player.get_ability().SAN;
			   }
			   //sun
			   if (sun_count / 6 == 4) {
				   Sun->ForeColor = System::Drawing::Color::Orange;
			   }
			   if (sun_count / 6 == 3) {
				   Sun->ForeColor = System::Drawing::Color::DarkOrange;
			   }
			   if (sun_count / 6 == 2) {
				   Sun->ForeColor = System::Drawing::Color::OrangeRed;
			   }
			   if (sun_count / 6 == 1) {
				   Sun->ForeColor = System::Drawing::Color::Red;
			   }
			   if (sun_count / 6 == 0) {
				   Sun->ForeColor = System::Drawing::Color::DarkRed;
			   }
		   }
		   void display_Guinevere(void) {
			   if (sun_count % 6 == 3 && strcmp(place, "1F") == 0) {
				   NPCGuinevere->Visible = true;
				   //Guinevere 對話按鈕
				   for (int i = 0; i < backpack_items_listView->Items->Count; i++)
				   {
					   ListViewItem^ currentItem = backpack_items_listView->Items[i];
					   String^ subItemText = currentItem->SubItems[0]->Text;
					   if (subItemText == "解夢灰") {
						   use_ash->Visible = true;
					   }
				   }
			   }
			   else if (sun_count % 6 != 3 && strcmp(place, "2F") == 0) {
				   NPCGuinevere->Visible = true;
				   //Guinevere 對話按鈕
				   for (int i = 0; i < backpack_items_listView->Items->Count; i++)
				   {
					   ListViewItem^ currentItem = backpack_items_listView->Items[i];
					   String^ subItemText = currentItem->SubItems[0]->Text;
					   if (subItemText == "解夢灰") {
						   use_ash->Visible = true;
					   }
				   }
			   }
			   else {
				   NPCGuinevere->Visible = false;
				   use_ash->Visible = false;
			   }
		   }
		   void display_Lancelot(void) {
			   if (strcmp(place, "moon_state") == 0) {
				   NPCLancelot->Visible = true;
				   if (talk_to_Lancelot_click == 0) {
					   //display talk button
					   talk_to_Lancelot->Visible = true;
				   }
				   else if(talk_to_Lancelot_click == 1) {
					   //hide the button
					   talk_to_Lancelot->Visible = false;
				   }
			   }
			   else {
				   NPCLancelot->Visible = false;
				   talk_to_Lancelot->Visible = false;
			   }
		   }
		   void dirction_button_display(void) {
			   //display the button when the player get close enough
			   //黃品瑜補完: L"2023"改場景的名稱， switch case on 場景名稱，先用絕對位置偵測碰撞
			   player.edit_position(player_motion->Location.X, player_motion->Location.Y);
			   if (player.collsion(16,512)) { //往左
				   if (strcmp(place, "plazza") == 0) {
					   Plazza_To_Prison->Visible = true;
				   }
				   else if (strcmp(place, "inn") == 0) {
					   Inn_To_IntersectionRight->Visible = true;
				   }
				   else if (strcmp(place, "market") == 0) {
						Market_To_Inn->Visible = true;
				   }
				   else if (strcmp(place, "restaurant") == 0) {
					   Restaurant_To_Market->Visible = true;
				   }
				   else if (strcmp(place, "prison") == 0) {
					   Prison_To_Restaurant->Visible = true;
				   }
				   else if (strcmp(place, "library") == 0) {
					   Library_To_IntersectionLeft->Visible = true;
				   }
				   else if (strcmp(place, "left") == 0) {
					   IntersectionLeft_To_Lake->Visible = true;
				   }
				   else if (strcmp(place, "sewer_library") == 0) {
					   Sewer_Library_Intersection->Visible = true;
				   }
				   else if (strcmp(place, "sewer_intersection") == 0) {
					   Sewer_Intersection_Lake->Visible = true;
				   }
				   else if (strcmp(place, "sewer_inn") == 0) {
					   Sewer_Inn_Plazza->Visible = true;
				   }
				   else if (strcmp(place, "outlet") == 0) {
					   Sewer_Outlet_Market->Visible = true;
				   }
				   else if (strcmp(place, "sewer_market") == 0) {
					   Sewer_Market_Restaurant->Visible = true;
				   }
				   else if (strcmp(place, "sewer_restaurant") == 0) {
					   Sewer_Restaurant_Prison->Visible = true;
				   }
				   else if (strcmp(place, "sewer_plazza") == 0) {
					   Sewer_Plazza_Prison->Visible = true;
				   }
				   else if (strcmp(place, "moon_state") == 0) {
					   Sewer_Prison_Restaurant->Visible = true;
				   }
			   }
			   else {
				   Plazza_To_Prison->Visible = false;
				   Market_To_Inn->Visible = false;
				   Inn_To_IntersectionRight->Visible = false;
				   Restaurant_To_Market->Visible = false;
				   Prison_To_Restaurant->Visible = false;
				   Library_To_IntersectionLeft->Visible = false;
				   IntersectionLeft_To_Lake->Visible = false;
				   Sewer_Library_Intersection->Visible = false;
				   Sewer_Intersection_Lake->Visible = false;
				   Sewer_Inn_Plazza->Visible = false;
				   Sewer_Outlet_Market->Visible = false;
				   Sewer_Market_Restaurant->Visible = false;
				   Sewer_Restaurant_Prison->Visible = false;
				   Sewer_Plazza_Prison->Visible = false;
				   Sewer_Prison_Restaurant->Visible = false;
			   }
			   if (player.collsion(938, 512)) { //往右
				   if (strcmp(place, "plazza") == 0) {
					   Plazza_To_Inn->Visible = true;
				   }
				   else if (strcmp(place, "inn") == 0) {
					   Inn_To_Market->Visible = true;
				   }
				   else if (strcmp(place, "market") == 0) {
					   Market_To_Restaurant->Visible = true;
				   }
				   else if (strcmp(place, "prison") == 0) {
					   Prison_To_IntersectionLeft->Visible = true;
				   }
				   else if (strcmp(place, "library") == 0) {
					   Library_To_IntersectionRight->Visible = true;
				   }
				   else if (strcmp(place, "left") == 0) {
					   IntersectionLeft_To_Library->Visible = true;
				   }
				   else if (strcmp(place, "right") == 0) {
					   IntersectionRight_To_Palace->Visible = true;
				   }
				   else if (strcmp(place, "sewer_library") == 0) {
					   Sewer_Library_Inn->Visible = true;
				   }
				   else if (strcmp(place, "sewer_intersection") == 0) {
					   Sewer_Intersection_Library->Visible = true;
				   }
				   else if (strcmp(place, "sewer_inn") == 0) {
					   Sewer_Inn_Outlet->Visible = true;
				   }
				   else if (strcmp(place, "sewer_market") == 0) {
					   Sewer_Market_Outlet->Visible = true;
				   }
				   else if (strcmp(place, "sewer_restaurant") == 0) {
					   Sewer_Restaurant_Market->Visible = true;
				   }
				   else if (strcmp(place, "sewer_plazza") == 0) {
					   Sewer_Plazza_Inn->Visible = true;
				   }
				   else if (strcmp(place, "moon_state") == 0) {
					   Sewer_Prison_Intersection->Visible = true;
				   }
			   }
			   else {
				   Plazza_To_Inn->Visible = false;
				   Inn_To_Market->Visible = false;
				   Market_To_Restaurant->Visible = false;
				   Prison_To_IntersectionLeft->Visible = false;
				   Library_To_IntersectionRight->Visible = false;
				   IntersectionLeft_To_Library->Visible = false;
				   IntersectionRight_To_Palace->Visible = false;
				   Sewer_Library_Inn->Visible = false;
				   Sewer_Intersection_Library->Visible = false;
				   Sewer_Inn_Outlet->Visible = false;
				   Sewer_Market_Outlet->Visible = false;
				   Sewer_Restaurant_Market->Visible = false;
				   Sewer_Plazza_Inn->Visible = false;
				   Sewer_Prison_Intersection->Visible = false;
			   }
			   if (player.collsion(480, 200)) { //往上
				   if (strcmp(place, "right") == 0) {
					   IntersectionRight_To_Library->Visible = true;
				   }
				   else if (strcmp(place, "outlet") == 0) {
					   Sewer_Outlet_Inn->Visible = true;
				   }
				   else if (strcmp(place, "sewer_inn") == 0) {
					   Sewer_Inn_Library->Visible = true;
				   }
				   else if (strcmp(place, "moon_state") == 0) {
					   Sewer_To_Secret->Visible = true;
				   }
			   }
			   else {
				   IntersectionRight_To_Library->Visible = false;
				   Sewer_Outlet_Inn->Visible = false;
				   Sewer_Inn_Library->Visible = false;
				   Sewer_To_Secret->Visible = false;
			   }
			   if (player.collsion(480, 667)) { //往下
				   if (strcmp(place, "right") == 0) {
					   IntersectionRight_To_Inn->Visible = true;
				   }
				   else if (strcmp(place, "inn") == 0) {
					   Inn_To_Plazza->Visible = true;
				   }
				   else if (strcmp(place, "restaurant") == 0) {
					   Restaurant_To_Prison->Visible = true;
				   }
				   else if (strcmp(place, "prison") == 0) {
					   Prison_To_Plazza->Visible = true;
				   }
				   else if (strcmp(place, "left") == 0) {
					   IntersectionLeft_To_Prison->Visible = true;
				   }
				   else if (strcmp(place, "altar") == 0) {
					   Sewer_Lake_Intersection->Visible = true;
				   }
				   else if (strcmp(place, "sewer_intersection") == 0) {
					   Sewer_Intersection_Prison->Visible = true;
				   }
				   else if (strcmp(place, "moon_state") == 0) {
					   Sewer_Prison_Plazza->Visible = true;
				   }
			   }
			   else {
				   IntersectionRight_To_Inn->Visible = false;
				   Inn_To_Plazza->Visible = false;
				   Restaurant_To_Prison->Visible = false;
				   Prison_To_Plazza->Visible = false;
				   IntersectionLeft_To_Prison->Visible = false;
				   Sewer_Lake_Intersection->Visible = false;
				   Sewer_Intersection_Prison->Visible = false;
				   Sewer_Prison_Plazza->Visible = false;
			   }
		   }
		   void check_end_game(void) {

			   //bad End
			   //1. 太陽倒數結束
			   if (sun_count == 0) {
				   for each (Control ^ control in this->Controls)
				   {
					   String^ controlName = control->Name;
					   if (control->GetType() == PictureBox::typeid && controlName == L"menu")
					   {
						   control->Visible = true;
					   }
					   else {
						   control->Visible = false;
					   }
				   }
				   //待更改結束畫面
				   menu->Image = gcnew Bitmap(gcnew System::String(dead.get_path()));
			   }
			   //2. 生命歸零
			   else if (player.get_ability().HP <= 0 && START_GAME == 1) {
				   for each (Control ^ control in this->Controls)
				   {
					   String^ controlName = control->Name;
					   if (control->GetType() == PictureBox::typeid && controlName == L"menu")
					   {
						   control->Visible = true;
					   }
					   else {
						   control->Visible = false;
					   }
				   }
				   //待更改結束畫面
				   menu->Image = gcnew Bitmap(gcnew System::String(dead.get_path()));
			   }
			   //3. san值歸零
			   else if (player.get_ability().SAN <= 0 && START_GAME == 1) {
				   for each (Control ^ control in this->Controls)
				   {
					   String^ controlName = control->Name;
					   if (control->GetType() == PictureBox::typeid && controlName == L"menu")
					   {
						   control->Visible = true;
					   }
					   else {
						   control->Visible = false;
					   }
				   }
				   //待更改結束畫面
				   menu->Image = gcnew Bitmap(gcnew System::String(dead.get_path()));
			   }
			   //good End (進入宮殿)
			   //進入宮殿
			   if (strcmp(place, "palace_END") == 0) {
				   //檢查物品
				   for (int i = 0; i < backpack_items_listView->Items->Count; i++)
				   {
					   ListViewItem^ currentItem = backpack_items_listView->Items[i];
					   String^ subItemText = currentItem->SubItems[0]->Text;
					   if (subItemText == "龍血") {
						   dragon_blood_hold = 1;
					   }
					   if (subItemText == "古怪的心臟") {
						   dragon_heart_hold = 1;
					   }
				   }
				   //If攜帶藍斯洛特、貝狄威爾、桂妮薇兒:
				   if (carry_Guinevere == 1 && carry_Bedivere == 1 && carry_Lancelot == 1 && dragon_heart_hold == 1) {
					   dialog_text->Text = "映入你眼簾的是一個30歲左右，金髮碧眼的帥哥，他說到”貝狄威爾…連你都…”";
					   end_game_continue->Visible = true;
				   }
				   //If攜帶藍斯洛特、貝狄威爾、桂妮薇兒且沒有紅龍的心臟:
				   else if (carry_Guinevere == 1 && carry_Bedivere == 1 && carry_Lancelot == 1 && dragon_heart_hold == 0) {
					   dialog_text->Text = "亞瑟:”我明白了，但是我也沒有辦法，現在的我已經沒有能力解決這個日漸膨脹的世界的...”";
					   final_end_game_button->Visible = true;
				   }
				   //If獨自進入且有龍血
				   else if (dragon_blood_hold == 1 && last_fight_start == 0) {
					   dialog_text->Text = "映入你眼簾的是一個30歲左右，金髮碧眼的帥哥的，和一個留著山羊鬍的老者，老者說”你打擾了我們的夢想，所以請你沉淪吧。”你感覺到你的腦子有些許混亂，但一陣熱流從你的心臟處湧現，你瞬間清醒了過來，老者說”亞瑟，他身上有你的血脈，就交給你處理了”，說完後身體就慢慢的變淡直到消失在你眼中，亞瑟猙獰地說”為甚麼你要摧毀屬於我的理想鄉”他拔出劍朝你砍來，進戰鬥輪";
					   //battle
					   fight_with_aurther->Visible = true;
				   }
				   //If獨自進入且沒有龍血 最糟
				   else if (dragon_blood_hold == 0) {
					   dialog_text->Text = "映入你眼簾的是一個30歲左右，金髮碧眼的帥哥的，和一個留著山羊鬍的老者，老者說”你打擾了我們的夢想，所以請你沉淪吧。”你感覺你的視線離你的身體越來越遠，無法操縱自己的身體，意識逐漸模糊，你只模糊的看到自己朝著兩人跪下行禮。";
					   final_end_game_button->Visible = true;
				   }
				   //若戰鬥勝利 (If獨自進入且有龍血才有)
				   if (last_fight_win == 1) {
					   //我只是想離開這個世界
					   choice_leave->Visible = true;
					   //為了考古學!!!
					   choice_archeology->Visible = true;
					   // (為亞瑟補上最後一擊) 困難敏捷判定:
					   hit_aurther_again->Visible = true;
				   }
				   //若戰鬥失敗 (HP == 0, 不用做)
			   }
		   }
	private: System::Void backgroundWorker1_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void manual_Click(System::Object^ sender, System::EventArgs^ e) {
		//buttons
		manual->Visible = false;
		manual_text->Visible = true;
		back_to_home->Visible = true;
		//text

	}
	private: System::Void back_to_home_Click(System::Object^ sender, System::EventArgs^ e) {
		//buttons
		manual->Visible = true;
		manual_text->Visible = false;
		back_to_home->Visible = false;
		//text
	}
	private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e) {
		//all object visable false
		manual->Visible = false;
		manual_text->Visible = false;
		back_to_home->Visible = false;
		start->Visible = false;
		//create character page visable
		archaeologist_button->Visible = true;
		occultist_button->Visible = true;
		reporter_button->Visible = true;
		chose_character_text->Visible = true;
		menu->Image = gcnew Bitmap(gcnew System::String(lead_in.get_path()));
	}
	private: System::Void archaeologist_button_Click(System::Object^ sender, System::EventArgs^ e) {
		archaeologist_button->Visible = false;
		occultist_button->Visible = false;
		reporter_button->Visible = false;
		chose_character_text->Visible = false;
		//change to scene one
		status_panel->Visible = true;
		player_power_text->Visible = true;
		STR->Visible = true;
		CON->Visible = true;
		DEX->Visible = true;
		POW->Visible = true;
		APP->Visible = true;
		INT->Visible = true;
		SIZ->Visible = true;
		EDU->Visible = true;
		LUK->Visible = true;
		SAN->Visible = true;
		HP->Visible = true;
		MP->Visible = true;
		DB->Visible = true;
		SPOT->Visible = true;
		LISTEN->Visible = true;
		LIBRARY->Visible = true;
		BRAWL->Visible = true;
		EVADE->Visible = true;
		HISTORY->Visible = true;
		OCCULT->Visible = true;
		PSYCOLOGY->Visible = true;
		BIOLOGY->Visible = true;
		ARCHAEOLOGY->Visible = true;
		MEDICINE->Visible = true;
		backpack_panel->Visible = true;
		backpack->Visible = true;
		character_name->Visible = true;
		character_name->Text = L"考古學家";
		dialog_text->Visible = true;
		introduction_textBox->Visible = true;
		dialog_text->Text = "經歷了這般的未知變化讓你的心中產生了些許恐懼，請做一個san check";
		introduction_textBox->Text = "你們乘上了前往威爾士的車。\r\n伴隨著風景閃過，你們經過連綿的山丘，最終車子停在了一處以被開挖的丘陵地。\r\n「到了。」司機說，「你們可以去遺跡探索了，那邊就是這次遺跡出土的地方了。」\r\n你們進入後看到了入口右側有著一具骷髏，你們隱隱看到骷髏空洞的眼眶閃出了一縷白光，你感到腦子一陣暈眩，頭愈發的沉重，閉上了眼睛。你感覺腦袋一片混沌，彷彿睡了太久大夢初醒一般，你再次睜開眼睛後，你發現與你一起來的團員們也躺在你身邊露出了迷茫的神情。\r\n你們身上穿的衣服不再是前來時的衣服，而是風格古老的粗布衣，你摸了摸兜，你發現你身上的物品都不見了，剩下的是一些你只在博物館見過的古董品。";
		san_check_button->Visible = true;
		background->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Plazza.get_path()));
		Sun->Visible = true;
		Sun->Value = sun_count % 6;
		HP_progressBar->Visible = true;
		MP_progressBar->Visible = true;
		SAN_progressBar->Visible = true;
		//player = archaeologist;
		player.assign_ability(archaeologist.get_ability());
		player.assign_skill(archaeologist.get_skill());
		HP_value_progressBar = player.get_ability().HP;
		MP_value_progressBar = player.get_ability().MP;
		SAN_value_progressBar = player.get_ability().SAN;
		init_san = player.get_ability().SAN;
		strcpy(place, "plazza");
		strcpy(whatchat, "whathappen");
		START_GAME = 1;
		player.change_label_text({ "HP" }, HP);
		player.change_label_text({ "MP" }, MP);
		player.change_label_text({ "STR" }, STR);
		player.change_label_text({ "DEX" }, DEX);
		player.change_label_text({ "INT" }, INT);
		player.change_label_text({ "CON" }, CON);
		player.change_label_text({ "APP" }, APP);
		player.change_label_text({ "POW" }, POW);
		player.change_label_text({ "SIZ" }, SIZ);
		player.change_label_text({ "SAN" }, SAN);
		player.change_label_text({ "EDU" }, EDU);
		player.change_label_text({ "LUK" }, LUK);
		player.change_label_text({ "DB" }, DB);
		player.skill_change_label_text({ "Spot" }, SPOT);
		player.skill_change_label_text({ "Listen" }, LISTEN);
		player.skill_change_label_text({ "Library" }, LIBRARY);
		player.skill_change_label_text({ "Brawl" }, BRAWL);
		player.skill_change_label_text({ "Evade" }, EVADE);
		player.skill_change_label_text({ "History" }, HISTORY);
		player.skill_change_label_text({ "Occult" }, OCCULT);
		player.skill_change_label_text({ "Psycology" }, PSYCOLOGY);
		player.skill_change_label_text({ "Biology" }, BIOLOGY);
		player.skill_change_label_text({ "Archaeology" }, ARCHAEOLOGY);
		player.skill_change_label_text({ "Medicine" }, MEDICINE);
	}
	private: System::Void occultist_button_Click(System::Object^ sender, System::EventArgs^ e) {
		archaeologist_button->Visible = false;
		occultist_button->Visible = false;
		reporter_button->Visible = false;
		chose_character_text->Visible = false;
		//change to introduction scene 
		status_panel->Visible = true;
		player_power_text->Visible = true;
		STR->Visible = true;
		CON->Visible = true;
		DEX->Visible = true;
		POW->Visible = true;
		APP->Visible = true;
		INT->Visible = true;
		SIZ->Visible = true;
		EDU->Visible = true;
		LUK->Visible = true;
		SAN->Visible = true;
		HP->Visible = true;
		MP->Visible = true;
		DB->Visible = true;
		SPOT->Visible = true;
		LISTEN->Visible = true;
		LIBRARY->Visible = true;
		BRAWL->Visible = true;
		EVADE->Visible = true;
		HISTORY->Visible = true;
		OCCULT->Visible = true;
		PSYCOLOGY->Visible = true;
		BIOLOGY->Visible = true;
		ARCHAEOLOGY->Visible = true;
		MEDICINE->Visible = true;
		backpack_panel->Visible = true;
		backpack->Visible = true;
		character_name->Visible = true;
		character_name->Text = L"神祕學家";
		dialog_text->Visible = true;
		introduction_textBox->Visible = true;
		dialog_text->Text = "經歷了這般的未知變化讓你的心中產生了些許恐懼，請做一個成功-0失敗-1d2的san check";
		introduction_textBox->Text = "你們乘上了前往威爾士的車。\r\n伴隨著風景閃過，你們經過連綿的山丘，最終車子停在了一處以被開挖的丘陵地。\r\n「到了。」司機說，「你們可以去遺跡探索了，那邊就是這次遺跡出土的地方了。」\r\n你們進入後看到了入口右側有著一具骷髏，你們隱隱看到骷髏空洞的眼眶閃出了一縷白光，你感到腦子一陣暈眩，頭愈發的沉重，閉上了眼睛。你感覺腦袋一片混沌，彷彿睡了太久大夢初醒一般，你再次睜開眼睛後，你發現與你一起來的團員們也躺在你身邊露出了迷茫的神情。\r\n你們身上穿的衣服不再是前來時的衣服，而是風格古老的粗布衣，你摸了摸兜，你發現你身上的物品都不見了，剩下的是一些你只在博物館見過的古董品。";
		san_check_button->Visible = true;
		background->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Plazza.get_path()));
		Sun->Visible = true;
		Sun->Value = sun_count % 6;
		HP_progressBar->Visible = true;
		MP_progressBar->Visible = true;
		SAN_progressBar->Visible = true;
		//player = occultist; DB = 0;
		player.assign_ability(occultist.get_ability());
		player.assign_skill(occultist.get_skill());
		HP_value_progressBar = player.get_ability().HP;
		MP_value_progressBar = player.get_ability().MP;
		SAN_value_progressBar = player.get_ability().SAN;
		init_san = player.get_ability().SAN;
		strcpy(place, "plazza");
		strcpy(whatchat, "whathappen");
		START_GAME = 1;
		player.change_label_text({ "HP" }, HP);
		player.change_label_text({ "MP" }, MP);
		player.change_label_text({ "STR" }, STR);
		player.change_label_text({ "DEX" }, DEX);
		player.change_label_text({ "INT" }, INT);
		player.change_label_text({ "CON" }, CON);
		player.change_label_text({ "APP" }, APP);
		player.change_label_text({ "POW" }, POW);
		player.change_label_text({ "SIZ" }, SIZ);
		player.change_label_text({ "SAN" }, SAN);
		player.change_label_text({ "EDU" }, EDU);
		player.change_label_text({ "LUK" }, LUK);
		player.change_label_text({ "DB" }, DB);
		player.skill_change_label_text({ "Spot" }, SPOT);
		player.skill_change_label_text({ "Listen" }, LISTEN);
		player.skill_change_label_text({ "Library" }, LIBRARY);
		player.skill_change_label_text({ "Brawl" }, BRAWL);
		player.skill_change_label_text({ "Evade" }, EVADE);
		player.skill_change_label_text({ "History" }, HISTORY);
		player.skill_change_label_text({ "Occult" }, OCCULT);
		player.skill_change_label_text({ "Psycology" }, PSYCOLOGY);
		player.skill_change_label_text({ "Biology" }, BIOLOGY);
		player.skill_change_label_text({ "Archaeology" }, ARCHAEOLOGY);
		player.skill_change_label_text({ "Medicine" }, MEDICINE);
	}
	private: System::Void reporter_button_Click(System::Object^ sender, System::EventArgs^ e) {
		archaeologist_button->Visible = false;
		occultist_button->Visible = false;
		reporter_button->Visible = false;
		chose_character_text->Visible = false;
		//change to introduction scene 
		status_panel->Visible = true;
		player_power_text->Visible = true;
		STR->Visible = true;
		CON->Visible = true;
		DEX->Visible = true;
		POW->Visible = true;
		APP->Visible = true;
		INT->Visible = true;
		SIZ->Visible = true;
		EDU->Visible = true;
		LUK->Visible = true;
		SAN->Visible = true;
		HP->Visible = true;
		MP->Visible = true;
		DB->Visible = true;
		SPOT->Visible = true;
		LISTEN->Visible = true;
		LIBRARY->Visible = true;
		BRAWL->Visible = true;
		EVADE->Visible = true;
		HISTORY->Visible = true;
		OCCULT->Visible = true;
		PSYCOLOGY->Visible = true;
		BIOLOGY->Visible = true;
		ARCHAEOLOGY->Visible = true;
		MEDICINE->Visible = true;
		backpack_panel->Visible = true;
		backpack->Visible = true;
		character_name->Visible = true;
		character_name->Text = L"記者";
		dialog_text->Visible = true;
		introduction_textBox->Visible = true;
		dialog_text->Text = "經歷了這般的未知變化讓你的心中產生了些許恐懼，請做一個san check";
		introduction_textBox->Text = "你們乘上了前往威爾士的車。\r\n伴隨著風景閃過，你們經過連綿的山丘，最終車子停在了一處以被開挖的丘陵地。\r\n「到了。」司機說，「你們可以去遺跡探索了，那邊就是這次遺跡出土的地方了。」\r\n你們進入後看到了入口右側有著一具骷髏，你們隱隱看到骷髏空洞的眼眶閃出了一縷白光，你感到腦子一陣暈眩，頭愈發的沉重，閉上了眼睛。你感覺腦袋一片混沌，彷彿睡了太久大夢初醒一般，你再次睜開眼睛後，你發現與你一起來的團員們也躺在你身邊露出了迷茫的神情。\r\n你們身上穿的衣服不再是前來時的衣服，而是風格古老的粗布衣，你摸了摸兜，你發現你身上的物品都不見了，剩下的是一些你只在博物館見過的古董品。";
		san_check_button->Visible = true;
		background->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Plazza.get_path()));
		Sun->Visible = true;
		Sun->Value = sun_count % 6;
		HP_progressBar->Visible = true;
		MP_progressBar->Visible = true;
		SAN_progressBar->Visible = true;
		//player = reporter;
		player.assign_ability(reporter.get_ability());
		player.assign_skill(reporter.get_skill());
		HP_value_progressBar = player.get_ability().HP;
		MP_value_progressBar = player.get_ability().MP;
		SAN_value_progressBar = player.get_ability().SAN;
		init_san = player.get_ability().SAN;
		strcpy(place, "plazza");
		strcpy(whatchat, "whathappen");
		START_GAME = 1;
		player.change_label_text({ "HP" }, HP);
		player.change_label_text({ "MP" }, MP);
		player.change_label_text({ "STR" }, STR);
		player.change_label_text({ "DEX" }, DEX);
		player.change_label_text({ "INT" }, INT);
		player.change_label_text({ "CON" }, CON);
		player.change_label_text({ "APP" }, APP);
		player.change_label_text({ "POW" }, POW);
		player.change_label_text({ "SIZ" }, SIZ);
		player.change_label_text({ "SAN" }, SAN);
		player.change_label_text({ "EDU" }, EDU);
		player.change_label_text({ "LUK" }, LUK);
		player.change_label_text({ "DB" }, DB);
		player.skill_change_label_text({ "Spot" }, SPOT);
		player.skill_change_label_text({ "Listen" }, LISTEN);
		player.skill_change_label_text({ "Library" }, LIBRARY);
		player.skill_change_label_text({ "Brawl" }, BRAWL);
		player.skill_change_label_text({ "Evade" }, EVADE);
		player.skill_change_label_text({ "History" }, HISTORY);
		player.skill_change_label_text({ "Occult" }, OCCULT);
		player.skill_change_label_text({ "Psycology" }, PSYCOLOGY);
		player.skill_change_label_text({ "Biology" }, BIOLOGY);
		player.skill_change_label_text({ "Archaeology" }, ARCHAEOLOGY);
		player.skill_change_label_text({ "Medicine" }, MEDICINE);
	}
	private: System::Void backpack_Click(System::Object^ sender, System::EventArgs^ e) {
		//backpack object display
		if (backpack_open_or_close == 0) {
			backpack_items_listView->Visible = true;
			backpack_open_or_close = 1;
		}
		else if (backpack_open_or_close == 1) {
			backpack_items_listView->Visible = false;
			backpack_open_or_close = 0;
		}

	}
	private: System::Void san_check_button_Click(System::Object^ sender, System::EventArgs^ e) {
		//san check here
		dice.check(player.get_ability().SAN);
		san_check_button->Visible = false;
		if (strcmp(whatchat, "whathappen") == 0) {
			//move to scene one
			introduction_textBox->Visible = false;
			continue_button->Visible = true;
			strcpy(whatchat, "start");
			if (dice.success == 0) {
				dialog_text->Text = "san check: 失敗\r\n你的腦子一片混亂，突如其來的巨大變故讓你十分焦慮，渾身不適。\r\n這個方型廣場散充斥著明亮的陽光，讓人感到溫暖舒適。\r\n在廣場的中央，矗立著一個高大的日晷和噴泉，他們周圍種植著各種花卉和綠植，為廣場增添了生氣和色彩。\r\n廣場上擺放著一排排長椅，可以讓人小息片刻。\r\n廣場的邊緣插著一根木製的路標，兩個箭頭分別指著廣場唯二的兩條通路。";
				player.edit_ability({ "SAN" }, -(rand() % 2 + 1));
				player.change_label_text({ "SAN" }, SAN);
			}
			else {
				dialog_text->Text = "san check: 成功\r\n你的迅速地接受了這些變故，打不倒你的只會讓你更強大，劇烈的變故終將變成你的養分。\r\n這個方型廣場散充斥著明亮的陽光，讓人感到溫暖舒適。\r\n在廣場的中央，矗立著一個高大的日晷和噴泉，他們周圍種植著各種花卉和綠植，為廣場增添了生氣和色彩。\r\n廣場上擺放著一排排長椅，可以讓人小息片刻。\r\n廣場的邊緣插著一根木製的路標，兩個箭頭分別指著廣場唯二的兩條通路。";
				player.change_label_text({ "SAN" }, SAN);
			}
		}
		else if (strcmp(whatchat, "see_monster") == 0) {
			chatbox_1->Visible = true;
			chatbox_2->Visible = true;
			chatbox_1->Text = "逃回地面";
			chatbox_2->Text = "正面迎戰";
			if (dice.success == 0) {
				dialog_text->Text = "san check: 失敗\r\n你的腦子一片混亂，突如其來的巨大變故讓你十分焦慮，渾身不適。";
				player.edit_ability({ "SAN" }, -(rand() % 6 + 1));
				player.change_label_text({ "SAN" }, SAN);
			}
			else {
				dialog_text->Text = "san check: 成功\r\n你的迅速地接受了這些變故，打不倒你的只會讓你更強大，劇烈的變故終將變成你的養分。";
				player.edit_ability({ "SAN" }, -1);
				player.change_label_text({ "SAN" }, SAN);
			}
		}
		//adjust backpack size
	}
	private: System::Void continue_button_Click(System::Object^ sender, System::EventArgs^ e) {
		//continue button 
		if (strcmp(whatchat, "start") == 0) {
			if (continue_button_count == 0) {
				dialog_text->Text = "就在你還在疑惑時，突然間聽到了一聲「你們就是這次的旅客吧，跟我來」。\r\n你聽出這似乎是古英語，但你卻能夠完全理解他的意思，你感到十分驚訝，連續不斷的奇異發生反而讓你有種見怪不怪的感覺。\r\n你仔細的觀察四周建築和環境(被動歷史學判定)";
				//被動歷史學判定(聯合)
				continue_button_count = continue_button_count + 1;
			}
			else if (continue_button_count == 1 && strcmp(whatchat, "start") == 0) {
				//目前只有成功
				dialog_text->Text = "你發現這些建築是英國五世紀，也就是亞瑟王時期的建築風格。";
				continue_button_count = continue_button_count + 1;
			}
			else if (continue_button_count == 2 && strcmp(whatchat, "start") == 0) {
				dialog_text->Text = "瓦格恩:\r\n歡迎來到永晝城，我叫瓦格恩，是你們的導遊。\r\n這裡是白晝廣場，是城市中的休閒區域，中心的日晷是由城鎮的工匠們用最精妙的工藝花費數個月所完成的工藝品，也是城陣中唯一的日晷。\r\n如果覺得身心疲倦的話，我很推薦你來這裡坐在長椅上欣賞日出日落。";
				continue_button_count = continue_button_count + 1;
			}
			else if (continue_button_count == 3 && strcmp(whatchat, "start") == 0) {
				continue_button->Visible = false;
				//display object in scene
				signpost->Visible = true;
				sundial->Visible = true;
				Plazza_To_Inn->Visible = true;
				//Plazza_To_Prison->Visible = true;
				player_motion->Visible = true;
				Plazza_To_Sewer->Visible = true;
				
				if (sun_count % 6 != 0) {
					listen_stranger_plazza->Visible = true;
					chat_stranger_plazza->Visible = true;
				}
				if (sun_count % 6 == 5) {
					Ask_Wagain->Visible = true;
					NPCGawain->Visible = true;
				}
			}
		}
		else if (strcmp(whatchat, "to_lake") == 0) {
			dialog_text->Text = "瓦格恩:這裡是德茲瑪麗湖，擁有城鎮最漂亮的自然風景，如果心情鬱悶的話可以來這裡散散心，但這裡的水況不太穩定，所以請不要下水嬉戲喔。";
			continue_button->Visible = false;
			continue_button_count = continue_button_count + 1;
			Psychology_Lake2->Visible = true;
			Lake_To_IntersectionLeft->Visible = true;
			Lake_To_Sewer->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Lake_Mary.get_path()));
			if (sun_count % 6 == 4) {
				NPCGawain->Visible = true;
			}
		}
		else if (strcmp(whatchat, "to_moon_state") == 0) {
			dialog_text->Text = "你跟著他們，一路上你們見到不少之前襲擊你們的怪物，但都被他們輕鬆解決，看起來已經熟門熟路了，你們在經過了十多分鐘的行走後，來到了一個略高於水面的平台型房間，周圍還有一些門，看起來能通向其他房間，平台上放著一些帳篷和照明設備，而之前與你們說話的那位男性走了過來與你們說到”歡迎來到月城，清醒者們的居住地，認識一下，我是這裡的領導人藍斯洛特，你們有甚麼要問的嗎 ? ”";
			Sewer_Prison_Plazza->Visible = true;
			Sewer_Prison_Restaurant->Visible = true;
			Sewer_Prison_Intersection->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Sewer_Moon_State.get_path()));
			strcpy(place, "moon_state");
			continue_button->Visible = false; 
			talk_to_Lancelot_click = 1;
			Lancelot_dialog_1->Visible = true;
			Lancelot_dialog_2->Visible = true;
			Lancelot_dialog_3->Visible = true;
			Lancelot_dialog_4->Visible = true;
		}
	}
	private: System::Void signpost_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "路標上往左的箭頭上寫著德茲瑪莉湖、餐廳，而往右的箭頭上寫著旅店。";
		Observe_Signpost->Visible = true;
		chatbox_1->Visible = false;
		chatbox_2->Visible = false;
		chatbox_3->Visible = false;
		chatbox_4->Visible = false;
		Observe_Sundial->Visible = false;
		listen_stranger_plazza->Visible = false;
		chat_stranger_plazza->Visible = false;
	}
	private: System::Void sundial_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這是個半徑約有三到四公尺的日晷，是用石料配合著華麗的工藝雕刻而成，看起來非常的壯觀，有種巴洛克式的美，現在日晷指針的陰影指在”時間”字上。";
		Observe_Signpost->Visible = false;
		chatbox_1->Visible = false;
		chatbox_2->Visible = false;
		chatbox_3->Visible = false;
		chatbox_4->Visible = false;
		item_button->Visible = false;
		Observe_Sundial->Visible = true;
		listen_stranger_plazza->Visible = false;
		chat_stranger_plazza->Visible = false;
	}
	private: System::Void Plazza_To_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這棟建築由木材建成，屋頂使用稻草編織而成。建築物的外牆粗糙的由木板和泥土夯實而成，看起來十分堅固，前方設有一個大門，用於進出旅店，大門的外觀簡單而樸實，完美的符合了實用主義的理念。";
		strcpy(place, "inn");
		// hide object in scene
		signpost->Visible = false;
		sundial->Visible = false;
		Plazza_To_Inn->Visible = false;
		Plazza_To_Prison->Visible = false;
		Ask_Wagain->Visible = false;
		Observe_Signpost->Visible = false;
		chatbox_1->Visible = false;
		chatbox_2->Visible = false;
		chatbox_3->Visible = false;
		chatbox_4->Visible = false;
		item_button->Visible = false;
		Observe_Sundial->Visible = false;
		listen_stranger_plazza->Visible = false;
		chat_stranger_plazza->Visible = false;
		Plazza_To_Sewer->Visible = false;
		NPCGawain->Visible = false;
		// display object in scene
		Inn_To_Plazza->Visible = true;
		Go_In_Inn->Visible = true;
		Inn_To_Market->Visible = true;
		Inn_To_IntersectionRight->Visible = true;
		Observe_Inn->Visible = true;
		Inn_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Inn_Outside.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void Plazza_To_Prison_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你面前的是一個由石頭砌成的建築，建築有著一扇鐵藝門，看起來十分堅固，在離地約4公尺處有著兩扇玻璃窗戶正對著廣場，門口站著兩位全副武裝的侍衛，在門上方還掛著一塊禁止進入的牌匾。";
		strcpy(place, "prison");
		// hide object in scene
		signpost->Visible = false;
		sundial->Visible = false;
		Plazza_To_Prison->Visible = false;
		Plazza_To_Inn->Visible = false;
		Ask_Wagain->Visible = false;
		Observe_Signpost->Visible = false;
		chatbox_1->Visible = false;
		chatbox_2->Visible = false;
		chatbox_3->Visible = false;
		chatbox_4->Visible = false;
		item_button->Visible = false;
		Observe_Sundial->Visible = false;
		listen_stranger_plazza->Visible = false;
		chat_stranger_plazza->Visible = false;
		Plazza_To_Sewer->Visible = false;
		NPCGawain->Visible = false;
		// display object in scene
		Prison_To_Restaurant->Visible = true;
		Prison_To_Plazza->Visible = true;
		Prison_To_IntersectionLeft->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Prison_Outside.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
		Spot_Prison_Out->Visible = true;

	}
	private: System::Void Go_In_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你進入旅店後，他的內部就如同他的外部那般樸實無華，只有一個櫃台，和左右兩間大床房從前方傳來了有氣無力的聲音”住宿一天20銀幣，不提供食物，一天以宏光、烈光時區分，住七天優惠只要一金幣。”你往前看去，那是一個頭髮斑白的老頭，雙手撐著臉，一副要死不活的樣子。";
		strcpy(place, "inn_in");
		if (sun_count % 6 == 1) {
			NPCGawain->Visible = true;
		}
		// hide object in scene
		Go_In_Inn->Visible = false;
		Inn_To_Plazza->Visible = false;
		Inn_To_Market->Visible = false;
		Inn_To_IntersectionRight->Visible = false;
		Observe_Inn->Visible = false;
		Inn_To_Sewer->Visible = false;
		// display object in scene
		Go_Out_Inn->Visible = true;
		Go_In_Room->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Inn_Lobby.get_path()));
	}
	private: System::Void Go_Out_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這棟建築由木材建成，屋頂使用稻草編織而成。建築物的外牆粗糙的由木板和泥土夯實而成，看起來十分堅固，前方設有一個大門，用於進出旅店，大門的外觀簡單而樸實，完美的符合了實用主義的理念。";
		strcpy(place, "inn");
		// hide object in scene
		Go_Out_Inn->Visible = false;
		Go_In_Room->Visible = false;
		NPCGawain->Visible = false;
		// display object in scene
		Go_In_Inn->Visible = true;
		Inn_To_Plazza->Visible = true;
		Inn_To_Market->Visible = true;
		Inn_To_IntersectionRight->Visible = true;
		Observe_Inn->Visible = true;
		Inn_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Inn_Outside.get_path()));
	}
	private: System::Void Go_In_Room_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你進入了房間，房間內只有稻草鋪的床，和一些用布包住稻草稈做的枕頭";
		strcpy(place, "room");
		// hide object in scene
		Go_Out_Inn->Visible = false;
		Go_In_Room->Visible = false;
		// display object in scene
		Go_Out_Room->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Inn_Room.get_path()));
	}
	private: System::Void Go_Out_Room_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你進入旅店後，他的內部就如同他的外部那般樸實無華，只有一個櫃台，和左右兩間大床房從前方傳來了有氣無力的聲音”住宿一天20銀幣，不提供食物，一天以宏光、烈光時區分，住七天優惠只要一金幣。”你往前看去，那是一個頭髮斑白的老頭，雙手撐著臉，一副要死不活的樣子。";
		strcpy(place, "inn_in");
		// hide object in scene
		NPCGuinevere->Visible = false;
		Go_Out_Room->Visible = false;
		NPCGuinevere->Visible = false;
		// display object in scene
		Go_Out_Inn->Visible = true;
		Go_In_Room->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Inn_Lobby.get_path()));
	}
	private: System::Void Inn_To_Plazza_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "plazza");
		if (sun_count % 6 == 5) {
			NPCGawain->Visible = true;
		}
		// hide object in scene
		Go_In_Inn->Visible = false;
		Inn_To_Plazza->Visible = false;
		Inn_To_Market->Visible = false;
		Inn_To_IntersectionRight->Visible = false;
		Observe_Inn->Visible = false;
		Inn_To_Sewer->Visible = false;
		// display object in scene
		signpost->Visible = true;
		sundial->Visible = true;
		Plazza_To_Inn->Visible = true;
		//Plazza_To_Prison->Visible = true;
		Plazza_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Plazza.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
		Spot_Prison_Out->Visible = true;
		if (sun_count % 6 != 0) {
			listen_stranger_plazza->Visible = true;
			chat_stranger_plazza->Visible = true;
		}
		if (sun_count % 6 == 5) {
			Ask_Wagain->Visible = true;
		}
	}
	private: System::Void Inn_To_Market_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "市場的街道狹窄而擁擠，滿是雜物，很容易讓人摔倒。市場里擠滿了商販和攤販，他們用各種聲音、手勢和展示方式向你推銷自己的產品。你可以聽到他們高聲地叫賣，介紹自己的貨品，有些商販用樂器演奏著悠揚的音樂，吸引著顧客。";
		strcpy(place, "market");
		if (sun_count % 6 == 2) {
			NPCGawain->Visible = true;
		}
		// hide object in scene
		Go_In_Inn->Visible = false;
		Inn_To_Plazza->Visible = false;
		Inn_To_Market->Visible = false;
		Inn_To_IntersectionRight->Visible = false;
		Observe_Inn->Visible = false;
		Inn_To_Sewer->Visible = false;
		NPCGawain->Visible = false;
		//display object in scene
		Market_To_Restaurant->Visible = true;
		Market_To_Inn->Visible = true;
		diner->Visible = true;
		studio->Visible = true;
		Market_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Market.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void Market_To_Restaurant_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你來到了餐館，餐館外觀看起來是個還算整潔的木製建築，進入餐廳，你發現這裡非常明亮、寬敞。整個空間採用簡約的風格，淺色木質牆壁搭配深色木質地板，一排排的餐桌擺放整齊，讓人感到舒適和放鬆，此時餐廳內(人數)(狀態)，此時你們聽到一個溫和的聲音問到”客官們請問你們想來點甚麼”， 你看向了出聲的人，那是一位長相清秀的獨臂青年，他有著金色的中長髮和祖母綠色的眼眸，他背後的牆壁上掛著菜單。";
		strcpy(place, "restaurant");
		// hide object in scene
		Market_To_Restaurant->Visible = false;
		Market_To_Inn->Visible = false;
		diner->Visible = false;
		studio->Visible = false;
		Market_To_Sewer->Visible = false;
		NPCGawain->Visible = false;
		//display object in scene
		Restaurant_To_Market->Visible = true;
		Restaurant_To_Prison->Visible = true;
		Go_To_Restaurant->Visible = true;
		Restaurant_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Restaurant_Outside.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void Market_To_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這棟建築由木材建成，屋頂使用稻草編織而成。建築物的外牆粗糙的由木板和泥土夯實而成，看起來十分堅固，前方設有一個大門，用於進出旅店，大門的外觀簡單而樸實，完美的符合了實用主義的理念。";
		strcpy(place, "inn");
		// hide object in scene
		Market_To_Restaurant->Visible = false;
		Market_To_Inn->Visible = false;
		diner->Visible = false;
		studio->Visible = false;
		Market_To_Sewer->Visible = false;
		//display object in scene
		Go_In_Inn->Visible = true;
		Inn_To_Plazza->Visible = true;
		Inn_To_Market->Visible = true;
		Inn_To_IntersectionRight->Visible = true;
		Observe_Inn->Visible = true;
		Inn_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Inn_Outside.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void Restaurant_To_Market_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "市場的街道狹窄而擁擠，滿是雜物，很容易讓人摔倒。市場里擠滿了商販和攤販，他們用各種聲音、手勢和展示方式向你推銷自己的產品。你可以聽到他們高聲地叫賣，介紹自己的貨品，有些商販用樂器演奏著悠揚的音樂，吸引著顧客。";
		strcpy(place, "market");
		if (sun_count % 6 == 2) {
			NPCGawain->Visible = true;
		}
		// hide object in scene
		Restaurant_To_Market->Visible = false;
		Restaurant_To_Prison->Visible = false;
		Go_To_Restaurant->Visible = false;
		Restaurant_To_Sewer->Visible = false;
		// display object in scene
		Market_To_Restaurant->Visible = true;
		Market_To_Inn->Visible = true;
		diner->Visible = true;
		studio->Visible = true;
		Market_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Market.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void Restaurant_To_Prison_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你面前的是一個由石頭砌成的建築，建築有著一扇鐵藝門，看起來十分堅固，在離地約4公尺處有著兩扇玻璃窗戶正對著廣場，門口站著兩位全副武裝的侍衛，在門上方還掛著一塊禁止進入的牌匾。";
		strcpy(place, "prison");
		// hide object in scene
		Restaurant_To_Market->Visible = false;
		Restaurant_To_Prison->Visible = false;
		Go_To_Restaurant->Visible = false;
		Restaurant_To_Sewer->Visible = false;
		// display object in scene
		Prison_To_Restaurant->Visible = true;
		Prison_To_Plazza->Visible = true;
		Prison_To_IntersectionLeft->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Prison_Outside.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void Prison_To_Restaurant_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你來到了餐館，餐館外觀看起來是個還算整潔的木製建築，進入餐廳，你發現這裡非常明亮、寬敞。整個空間採用簡約的風格，淺色木質牆壁搭配深色木質地板，一排排的餐桌擺放整齊，讓人感到舒適和放鬆，此時餐廳內(人數)(狀態)，此時你們聽到一個溫和的聲音問到”客官們請問你們想來點甚麼”， 你看向了出聲的人，那是一位長相清秀的獨臂青年，他有著金色的中長髮和祖母綠色的眼眸，他背後的牆壁上掛著菜單。";
		strcpy(place, "restaurant");
		// hide object in scene
		Prison_To_Restaurant->Visible = false;
		Prison_To_Plazza->Visible = false;
		Prison_To_IntersectionLeft->Visible = false;
		Spot_Prison_Out->Visible = false;
		// display object in scene
		Restaurant_To_Market->Visible = true;
		Restaurant_To_Prison->Visible = true;
		Go_To_Restaurant->Visible = true;
		Restaurant_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Restaurant_Outside.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void Prison_To_Plazza_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "廣場待補";
		strcpy(place, "plazza");
		if (sun_count % 6 == 5) {
			NPCGawain->Visible = true;
		}
		// hide object in scene
		Prison_To_Restaurant->Visible = false;
		Prison_To_Plazza->Visible = false;
		Prison_To_IntersectionLeft->Visible = false;
		Spot_Prison_Out->Visible = false;
		// diaplay object in scene
		signpost->Visible = true;
		sundial->Visible = true;
		Plazza_To_Inn->Visible = true;
		//Plazza_To_Prison->Visible = true;
		Plazza_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Plazza.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
		if (sun_count % 6 != 0) {
			listen_stranger_plazza->Visible = true;
			chat_stranger_plazza->Visible = true;
		}
		if (sun_count % 6 == 5) {
			Ask_Wagain->Visible = true;
		}
	}
	private: System::Void Inn_To_IntersectionRight_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "right");
		dialog_text->Text = "路口右待補";
		// hide object in scene
		Go_In_Inn->Visible = false;
		Inn_To_Plazza->Visible = false;
		Inn_To_Market->Visible = false;
		Inn_To_IntersectionRight->Visible = false;
		Observe_Inn->Visible = false;
		Inn_To_Sewer->Visible = false;
		// diaplay object in scene
		IntersectionRight_To_Library->Visible = true;
		IntersectionRight_To_Inn->Visible = true;
		IntersectionRight_To_Palace->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Inn_Outside.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void IntersectionRight_To_Library_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這是一棟非常豪華和宏偉的建築，你被它那令人嘆為觀止的氣勢所震撼，以高大的石柱和華麗的拱門，來支撐整個建築，建築的主體由lake的柱子和華麗的拱門支撐，高大的尖頂耸立著，猶如一個巨大的王冠，牆面上有著浮雕、雕塑和彩繪，繪製著神話、故事和歷史事件，讓建築更顯神聖和莊嚴。在陽光的照耀下，這些彩繪和浮雕散發出燦爛的光芒，讓整個建築閃耀著耀眼的光彩。";
		strcpy(place, "library");
		// hide object in scene
		IntersectionRight_To_Library->Visible = false;
		IntersectionRight_To_Inn->Visible = false;
		IntersectionRight_To_Palace->Visible = false;
		// diaplay object in scene
		Library_To_IntersectionRight->Visible = true;
		Library_To_IntersectionLeft->Visible = true;
		Go_In_Library->Visible = true;
		Library_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Library_Outside.get_path()));
	}
	private: System::Void IntersectionRight_To_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這棟建築由木材建成，屋頂使用稻草編織而成。建築物的外牆粗糙的由木板和泥土夯實而成，看起來十分堅固，前方設有一個大門，用於進出旅店，大門的外觀簡單而樸實，完美的符合了實用主義的理念。";
		strcpy(place, "inn");
		// hide object in scene
		IntersectionRight_To_Library->Visible = false;
		IntersectionRight_To_Inn->Visible = false;
		IntersectionRight_To_Palace->Visible = false;
		// diaplay object in scene
		Go_In_Inn->Visible = true;
		Inn_To_Plazza->Visible = true;
		Inn_To_Market->Visible = true;
		Inn_To_IntersectionRight->Visible = true;
		Observe_Inn->Visible = true;
		Inn_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Inn_Outside.get_path()));
	}
	private: System::Void IntersectionRight_To_Palace_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你面前的是一個巨大、華麗、寬敞的建築，這棟建築的體量看起來完全不是城鎮中的其他建築可比擬，建築的屋頂上還有著一座巨大的黃金鐘，看起來唯一的入口是一扇巨大的木門。";
		strcpy(place, "palace");
		// hide object in scene
		IntersectionRight_To_Library->Visible = false;
		IntersectionRight_To_Inn->Visible = false;
		IntersectionRight_To_Palace->Visible = false;
		// diaplay object in scene
		Palace_To_IntersectionRight->Visible = true;
		if (sun_count <= 5) {
			Go_In_Palace->Visible = true;
		}
		background->Image = gcnew Bitmap(gcnew System::String(Palace_Outside.get_path()));
	}
	private: System::Void Palace_To_IntersectionRight_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "right");
		dialog_text->Text = "路口右待補";
		// hide object in scene
		Palace_To_IntersectionRight->Visible = false;
		Go_In_Palace->Visible = false;
		// diaplay object in scene
		IntersectionRight_To_Library->Visible = true;
		IntersectionRight_To_Inn->Visible = true;
		IntersectionRight_To_Palace->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Palace_Outside.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void Library_To_IntersectionRight_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "right");
		dialog_text->Text = "路口右待補";
		// hide object in scene
		Library_To_IntersectionRight->Visible = false;
		Library_To_IntersectionLeft->Visible = false;
		Go_In_Library->Visible = false;
		Library_To_Sewer->Visible = false;
		// diaplay object in scene
		IntersectionRight_To_Library->Visible = true;
		IntersectionRight_To_Inn->Visible = true;
		IntersectionRight_To_Palace->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Library_Outside.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void Prison_To_IntersectionLeft_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "left");
		dialog_text->Text = "路口左待補";
		// hide object in scene
		Prison_To_Restaurant->Visible = false;
		Prison_To_Plazza->Visible = false;
		Prison_To_IntersectionLeft->Visible = false;
		Spot_Prison_Out->Visible = false;
		// diaplay object in scene
		IntersectionLeft_To_Prison->Visible = true;
		IntersectionLeft_To_Library->Visible = true;
		IntersectionLeft_To_Lake->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Prison_Outside.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void IntersectionLeft_To_Prison_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你面前的是一個由石頭砌成的建築，建築有著一扇鐵藝門，看起來十分堅固，在離地約4公尺處有著兩扇玻璃窗戶正對著廣場，門口站著兩位全副武裝的侍衛，在門上方還掛著一塊禁止進入的牌匾。";
		strcpy(place, "prison");
		// hide object in scene
		IntersectionLeft_To_Prison->Visible = false;
		IntersectionLeft_To_Library->Visible = false;
		IntersectionLeft_To_Lake->Visible = false;
		// display object in scene
		Prison_To_Restaurant->Visible = true;
		Prison_To_Plazza->Visible = true;
		Prison_To_IntersectionLeft->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Prison_Outside.get_path()));
		Spot_Prison_Out->Visible = true;
	}
	private: System::Void IntersectionLeft_To_Library_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這是一棟非常豪華和宏偉的建築，你被它那令人嘆為觀止的氣勢所震撼，以高大的石柱和華麗的拱門，來支撐整個建築，建築的主體由優雅的柱子和華麗的拱門支撐，高大的尖頂耸立著，猶如一個巨大的王冠，牆面上有著浮雕、雕塑和彩繪，繪製著神話、故事和歷史事件，讓建築更顯神聖和莊嚴。在陽光的照耀下，這些彩繪和浮雕散發出燦爛的光芒，讓整個建築閃耀著耀眼的光彩。";
		strcpy(place, "library");
		// hide object in scene
		IntersectionLeft_To_Library->Visible = false;
		IntersectionLeft_To_Prison->Visible = false;
		IntersectionLeft_To_Lake->Visible = false;
		Library_To_Sewer->Visible = false;
		// diaplay object in scene
		Library_To_IntersectionRight->Visible = true;
		Library_To_IntersectionLeft->Visible = true;
		Go_In_Library->Visible = true;
		Library_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Library_Outside.get_path()));
	}
	private: System::Void Library_To_IntersectionLeft_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "路口左待補";
		strcpy(place, "left");
		// hide object in scene
		Library_To_IntersectionRight->Visible = false;
		Library_To_IntersectionLeft->Visible = false;
		Go_In_Library->Visible = false;
		Library_To_Sewer->Visible = false;
		// diaplay object in scene
		IntersectionLeft_To_Prison->Visible = true;
		IntersectionLeft_To_Library->Visible = true;
		IntersectionLeft_To_Lake->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Library_Outside.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void IntersectionLeft_To_Lake_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你們來到了德茲瑪麗湖，那湖水猶如碧玉般清澈，波光粼粼，倒映著湖畔旁的青山綠樹，天空的美景也在湖水中倒影出來。湖畔旁的花草樹木繁茂，漫步其間，仿若置身於一個美麗的童話世界，讓人感受到大自然的生命力。";
		strcpy(place, "lake");
		strcpy(whatchat, "to_lake");
		// hide object in scene
		IntersectionLeft_To_Library->Visible = false;
		IntersectionLeft_To_Prison->Visible = false;
		IntersectionLeft_To_Lake->Visible = false;
		// diaplay object in scene
		continue_button->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Lake_Mary.get_path()));
	}
	private: System::Void Lake_To_IntersectionLeft_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "路口左待補";
		strcpy(place, "left");
		// hide object in scene
		Lake_To_IntersectionLeft->Visible = false;
		continue_button->Visible = false;
		Psychology_Lake2->Visible = false;
		Psychology_Lake1->Visible = false;
		Lake_To_Sewer->Visible = false;
		NPCGawain->Visible = false;
		// diaplay object in scene
		IntersectionLeft_To_Library->Visible = true;
		IntersectionLeft_To_Prison->Visible = true;
		IntersectionLeft_To_Lake->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Lake_Mary.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void Go_In_Palace_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "待補palace_END";
		if (sun_count % 6 == 0) {
			NPCGawain->Visible = true;
		}
		// hide object in scene
		Palace_To_IntersectionRight->Visible = false;
		Go_In_Palace->Visible = false;
		NPCArthur->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Palace_Inside.get_path()));
		strcpy(place, "palace_END");

	}
	private: System::Void Go_In_Library_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你進到了圖書館內，這間屋子裏有著許多的架子，架子上擺滿了手寫的文獻和書籍，大多都是用羊皮紙和墨水寫成，這些文獻是按照主題整齊排列排列。";
		strcpy(place, "library_in");
		// hide object in scene
		Library_To_IntersectionRight->Visible = false;
		Library_To_IntersectionLeft->Visible = false;
		Go_In_Library->Visible = false;
		Library_To_Sewer->Visible = false;
		// diaplay object in scene
		Go_Out_Library->Visible = true;
		Library_Library_In->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Library_Inside.get_path()));
	}
	private: System::Void Go_Out_Library_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這是一棟非常豪華和宏偉的建築，你被它那令人嘆為觀止的氣勢所震撼，以高大的石柱和華麗的拱門，來支撐整個建築，建築的主體由優雅的柱子和華麗的拱門支撐，高大的尖頂耸立著，猶如一個巨大的王冠，牆面上有著浮雕、雕塑和彩繪，繪製著神話、故事和歷史事件，讓建築更顯神聖和莊嚴。在陽光的照耀下，這些彩繪和浮雕散發出燦爛的光芒，讓整個建築閃耀著耀眼的光彩。";
		strcpy(place, "library");
		// hide object in scene
		Go_Out_Library->Visible = false;
		Library_Library_In->Visible = false;
		chatbox_1->Visible = false;
		chatbox_2->Visible = false;
		// diaplay object in scene
		Library_To_IntersectionRight->Visible = true;
		Library_To_IntersectionLeft->Visible = true;
		Go_In_Library->Visible = true;
		Library_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Library_Outside.get_path()));
	}
	private: System::Void backpack_item_listView_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void status_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void dialog_text_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void manual_text_Click(System::Object^ sender, System::EventArgs^ e) {
		//manual change to next page. 
	}
	private: System::Void Ask_Wagain_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你想問甚麼問題?";
		Observe_Signpost->Visible = false;
		Observe_Sundial->Visible = false;
		chatbox_1->Text = "下一站是哪裡";
		chatbox_1->Visible = true;
		chatbox_2->Text = "跟著他走";
		chatbox_2->Visible = true;
		chatbox_3->Text = "城鎮有甚麼特色";
		chatbox_3->Visible = true;
		chatbox_4->Text = "攻擊他";
		chatbox_4->Visible = true;
		item_button->Visible = false;
		strcpy(whatchat, "wagain_plazza");
	}
	private: System::Void Observe_Library_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你仔細地觀察了藏書庫的內部";
	}
	private: System::Void Order_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你仔細地觀察了藏書庫的內部";
	}
	private: System::Void diner_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "三明治  ———————————— 1  金幣\r\n肉串 ————————————— 60銀幣\r\n烤ㄇㄌㄐ  ——————————— 15銀幣";
		//顯示購買的按鈕
		snackbar_buy_sandwitch->Visible = true;
		snackbar_buy_meat->Visible = true;
		snackbar_buy_potato->Visible = true;
		leave_snackbar->Visible = true;
	}
	private: System::Void studio_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "桿麵棍(1d4 + db) ———————— 2金幣\r\n水果刀(1d4 + db) ———————— 3金幣\r\n槌子    (1d6 + db) ———————— 6金幣\r\n麻繩    ( 2 M ) —————————— 1金幣";
		//顯示購買的按鈕
		workshop_buy_hammer->Visible = true;
		workshop_buy_rope->Visible = true;
		workshop_buy_rolling_pin->Visible = true;
		workshop_buy_knife->Visible = true;
		leave_workshop->Visible = true;
	}
	private: System::Void Observe_Wagain_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你認真觀察他說這些話時的表情";
		Psychology_Lake2->Visible = false;
		Psychology_Lake1->Visible = true;
	}
	private: System::Void Observe_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你仔細地觀察了這棟建築周邊";
	}
	private: System::Void search_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你嘗試在書架上尋找一些可能對你有幫助的書籍";
	}
	private: System::Void Psychology_Lake2_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你認真的分析他在說這些話的時候的各項表徵";
	}
	private: System::Void Psychology_Lake1_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你認真的分析他在說這些話的時候的各項表徵";
	}
	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void introduction_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Go_To_Restaurant_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "restaurant_in");
		if (sun_count % 6 == 3) {
			NPCGawain->Visible = true;
		}
		// hide object in scene
		Restaurant_To_Market->Visible = false;
		Restaurant_To_Prison->Visible = false;
		Go_To_Restaurant->Visible = false;
		Restaurant_To_Sewer->Visible = false;
		//display object in scene
		if (sword_count) {
			show_sword->Visible = true;
		}
		Go_Out_Restaurant->Visible = true;
		NPCBedivere->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Restaurant_Inside.get_path()));
	}
	private: System::Void Go_Out_Restaurant_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "restaurant");
		// hide object in scene
		Go_Out_Restaurant->Visible = false;
		NPCBedivere->Visible = false;
		NPCGawain->Visible = false;
		//display object in scene
		Restaurant_To_Market->Visible = true;
		Restaurant_To_Prison->Visible = true;
		Go_To_Restaurant->Visible = true;
		Restaurant_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Restaurant_Outside.get_path()));
	}
	private: System::Void Sun_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Observe_Signpost_Click(System::Object^ sender, System::EventArgs^ e) {
		dice.check(player.get_skill().Spot);
		if (Observe_Signpost_Count == 9) {
			if (dice.success == 0) {
				dialog_text->Text = "觀察判定:失敗\r\n你仔細觀察路標，狠狠的盯著木板的發呆你，透露出些許喜感，你沒看出任何特別之處。";
			}
			else {
				dialog_text->Text = "觀察判定:成功\r\n你仔細觀察路標，路標背面有些粗糙的刻著一張圖片。";
				item_button->Visible = true;
			}
			Observe_Signpost_Count = dice.success;
		}
		else {
			if (Observe_Signpost_Count == 0) {
				dialog_text->Text = "觀察判定:失敗\r\n你仔細觀察路標，狠狠的盯著木板的發呆你，透露出些許喜感，你沒看出任何特別之處。";
			}
			else {
				dialog_text->Text = "觀察判定:成功\r\n你仔細觀察路標，路標背面有些粗糙的刻著一張圖片。";
				item_button->Visible = true;
			}
		}
	}
	private: System::Void item_Click(System::Object^ sender, System::EventArgs^ e) {
		item_button->Visible = false;
		item_pic->Visible = true;
		// in plazza
		if (strcmp(place, "plazza") == 0) {
			item_pic->Image = gcnew Bitmap(gcnew System::String(Map.get_path()));
			Ask_Wagain->Visible = false;
			signpost->Visible = false;
			sundial->Visible = false;
			Plazza_To_Inn->Visible = false;
			//Plazza_To_Prison->Visible = false;
			Plazza_To_Sewer->Visible = false;
			player_motion->Visible = false;
			chatbox_1->Visible = false;
			chatbox_2->Visible = false;
			chatbox_3->Visible = false;
			chatbox_4->Visible = false;
			player_motion->Visible = false;
		}
		dialog_text->Text = "點擊圖片以關閉圖片";

	}
	private: System::Void item_pic_Click(System::Object^ sender, System::EventArgs^ e) {
		item_pic->Visible = false;
		player_motion->Visible = true;
		// in plazza
		if (strcmp(place, "plazza") == 0) {
			signpost->Visible = true;
			sundial->Visible = true;
			Plazza_To_Inn->Visible = true;
			//Plazza_To_Prison->Visible = true;
			Plazza_To_Sewer->Visible = true;
			player_motion->Visible = true;
			if (sun_count % 6 != 0) {
				listen_stranger_plazza->Visible = true;
				chat_stranger_plazza->Visible = true;
			}
			if (sun_count % 6 == 5) {
				Ask_Wagain->Visible = true;
			}
		}
	}

	private: System::Void Observe_Sundial_Click(System::Object^ sender, System::EventArgs^ e) {
		dice.check(player.get_skill().Spot);
		if (Observe_Sundial_Count == 9) {
			if (dice.success == 0) {
				dialog_text->Text = "觀察判定:失敗\r\n你仔細地觀察了日晷，但並沒有發現甚麼特別的地方。";
			}
			else {
				dialog_text->Text = "觀察判定:成功\r\n你發現在日晷的陰影處刻著兩個小字”去月城”。";
			}
			Observe_Sundial_Count = dice.success;
		}
		else {
			if (Observe_Sundial_Count == 0) {
				dialog_text->Text = "觀察判定:失敗\r\n你仔細地觀察了日晷，但並沒有發現甚麼特別的地方。";
			}
			else {
				dialog_text->Text = "觀察判定:成功\r\n你發現在日晷的陰影處刻著兩個小字”去月城”。";
			}
		}
	}
	private: System::Void listen_stranger_plazza_Click(System::Object^ sender, System::EventArgs^ e) {
		Observe_Sundial->Visible = false;
		Observe_Signpost->Visible = false;
		chatbox_1->Visible = false;
		chatbox_2->Visible = false;
		chatbox_3->Visible = false;
		chatbox_4->Visible = false;
		dice.check(player.get_skill().Listen);
		if (Listen_Stranger_Plazza_Count == 9) {
			if (dice.success == 0) {
				dialog_text->Text = "聆聽判定:失敗\r\n你在一旁偷聽老人家的閒話家常，老人們說話帶著很重的口音，讓你難以理解。";
			}
			else {
				dialog_text->Text = "聆聽判定:成功\r\n你在一旁偷聽老人家的閒話家常，你聽到一個老人在說，他家下方好像有老鼠之類的東西，最近他睡覺的時候，有時候會聽到一些嘈雜的聲音從地板下傳來，怕不是下水道裡養了隻大老鼠。";
			}
			Listen_Stranger_Plazza_Count = dice.success;
		}
		else {
			if (Listen_Stranger_Plazza_Count == 0) {
				dialog_text->Text = "聆聽判定:失敗\r\n你在一旁偷聽老人家的閒話家常，老人們說話帶著很重的口音，讓你難以理解。";
			}
			else {
				dialog_text->Text = "聆聽判定:成功\r\n你在一旁偷聽老人家的閒話家常，你聽到一個老人在說，他家下方好像有老鼠之類的東西，最近他睡覺的時候，有時候會聽到一些嘈雜的聲音從地板下傳來，怕不是下水道裡養了隻大老鼠。";
			}
		}
	}
	private: System::Void Plazza_To_Sewer_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "廣場";
		strcpy(place, "sewer_plazza");
		// hide object in scene
		signpost->Visible = false;
		sundial->Visible = false;
		Plazza_To_Inn->Visible = false;
		//Plazza_To_Prison->Visible = false;
		Ask_Wagain->Visible = false;
		Observe_Signpost->Visible = false;
		chatbox_1->Visible = false;
		chatbox_2->Visible = false;
		item_button->Visible = false;
		Observe_Sundial->Visible = false;
		Spot_Prison_Out->Visible = false;
		listen_stranger_plazza->Visible = false;
		chat_stranger_plazza->Visible = false;
		Plazza_To_Sewer->Visible = false;
		NPCGawain->Visible = false;
		// display object in scene
		sun_count -= 1;
		dice.check(player.get_ability().LUK);
		if (dice.success == 0 && seem_monster){
			dialog_text->Text = "你一爬下下水道，就看到一個人形生物朝著你衝來，你要逃跑還是迎戰?在看到他的瞬間，你感覺你的大腦在震動，不適感湧上心頭。\r\n請做一個成功-1失敗-1d6的san check。";
			monster_pic->Image = gcnew Bitmap(gcnew System::String(Servent.get_path()));
			monster_pic->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
			strcpy(whatchat, "see_monster");
			
			san_check_button->Visible = true;
		}
		else {
			dialog_text->Text = "你一爬下下水道，這裡出乎意料的並沒有甚麼異味，僅僅是有些悶而已。";
			Sewer_To_Plazza->Visible = true;
			Sewer_Plazza_Inn->Visible = true;
			Sewer_Plazza_Prison->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
		}
	}
	private: System::Void Inn_To_Sewer_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "酒館";
		strcpy(place, "sewer_inn");
		// hide object in scene
		Go_In_Inn->Visible = false;
		Inn_To_Plazza->Visible = false;
		Inn_To_Market->Visible = false;
		Inn_To_IntersectionRight->Visible = false;
		Observe_Inn->Visible = false;
		Inn_To_Sewer->Visible = false;
		// display object in scene
		if (dice.success == 0 && seem_monster) {
			dialog_text->Text = "你一爬下下水道，就看到一個人形生物朝著你衝來，你要逃跑還是迎戰?在看到他的瞬間，你感覺你的大腦在震動，不適感湧上心頭。\r\n請做一個成功-1失敗-1d6的san check。";
			monster_pic->Image = gcnew Bitmap(gcnew System::String(Servent.get_path()));
			monster_pic->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
			strcpy(whatchat, "see_monster");
			
			san_check_button->Visible = true;
		}
		else {
			dialog_text->Text = "你一爬下下水道，這裡出乎意料的並沒有甚麼異味，僅僅是有些悶而已。";
			Sewer_To_Inn->Visible = true;
			Sewer_Inn_Outlet->Visible = true;
			Sewer_Inn_Plazza->Visible = true;
			Sewer_Inn_Library->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
		}
	}
	private: System::Void Market_To_Sewer_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "市場";
		strcpy(place, "sewer_market");
		// hide object in scene
		Market_To_Restaurant->Visible = false;
		Market_To_Inn->Visible = false;
		diner->Visible = false;
		studio->Visible = false;
		Market_To_Sewer->Visible = false;
		NPCGawain->Visible = false;
		// display object in scene
		if (dice.success == 0 && seem_monster) {
			dialog_text->Text = "你一爬下下水道，就看到一個人形生物朝著你衝來，你要逃跑還是迎戰?在看到他的瞬間，你感覺你的大腦在震動，不適感湧上心頭。\r\n請做一個成功-1失敗-1d6的san check。";
			monster_pic->Image = gcnew Bitmap(gcnew System::String(Servent.get_path()));
			monster_pic->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
			strcpy(whatchat, "see_monster");
			
			san_check_button->Visible = true;
		}
		else {
			Sewer_To_Market->Visible = true;
			Sewer_Market_Restaurant->Visible = true;
			Sewer_Market_Outlet->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
		}
	}
	private: System::Void Restaurant_To_Sewer_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "餐廳";
		strcpy(place, "sewer_restaurant");
		// hide object in scene
		Restaurant_To_Market->Visible = false;
		Restaurant_To_Prison->Visible = false;
		Go_To_Restaurant->Visible = false;
		Restaurant_To_Sewer->Visible = false;
		// display object in scene
		if (dice.success == 0 && seem_monster) {
			dialog_text->Text = "你一爬下下水道，就看到一個人形生物朝著你衝來，你要逃跑還是迎戰?在看到他的瞬間，你感覺你的大腦在震動，不適感湧上心頭。\r\n請做一個成功-1失敗-1d6的san check。";
			monster_pic->Image = gcnew Bitmap(gcnew System::String(Servent.get_path()));
			monster_pic->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
			strcpy(whatchat, "see_monster");
			
			san_check_button->Visible = true;
		}
		else {
			Sewer_To_Restaurant->Visible = true;
			Sewer_Restaurant_Prison->Visible = true;
			Sewer_Restaurant_Market->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
		}
		
	}
	private: System::Void Library_To_Sewer_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "圖書館";
		strcpy(place, "sewer_library");
		// hide object in scene
		Library_To_IntersectionRight->Visible = false;
		Library_To_IntersectionLeft->Visible = false;
		Go_In_Library->Visible = false;
		Library_To_Sewer->Visible = false;
		// display object in scene
		if (dice.success == 0 && seem_monster) {
			dialog_text->Text = "你一爬下下水道，就看到一個人形生物朝著你衝來，你要逃跑還是迎戰?在看到他的瞬間，你感覺你的大腦在震動，不適感湧上心頭。\r\n請做一個成功-1失敗-1d6的san check。";
			monster_pic->Image = gcnew Bitmap(gcnew System::String(Servent.get_path()));
			monster_pic->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
			strcpy(whatchat, "see_monster");
			san_check_button->Visible = true;
		}
		else {
			Sewer_To_Library->Visible = true;
			Sewer_Library_Intersection->Visible = true;
			Sewer_Library_Inn->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
		}
		
	}
	private: System::Void Prison_To_Sewer_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "moon_state");
		// hide object in scene
		talk_to_Lancelot_click = 0;
		Prison_To_Restaurant->Visible = false;
		Prison_To_Plazza->Visible = false;
		Prison_To_IntersectionLeft->Visible = false;
		Spot_Prison_Out->Visible = false;
		// display object in scene
		if (dice.success == 0 && seem_monster) {
			talk_to_Lancelot_click = 1;
			dialog_text->Text = "你一爬下下水道，就看到一個人形生物朝著你衝來，你要逃跑還是迎戰?在看到他的瞬間，你感覺你的大腦在震動，不適感湧上心頭。\r\n請做一個成功-1失敗-1d6的san check。";
			monster_pic->Image = gcnew Bitmap(gcnew System::String(Servent.get_path()));
			monster_pic->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
			strcpy(whatchat, "see_monster");
			
			san_check_button->Visible = true;
		}
		else {
			Sewer_Prison_Plazza->Visible = true;
			Sewer_Prison_Restaurant->Visible = true;
			Sewer_Prison_Intersection->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Sewer_Moon_State.get_path()));
		}
	}
	private: System::Void Lake_To_Sewer_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "altar");
		// hide object in scene
		Lake_To_IntersectionLeft->Visible = false;
		continue_button->Visible = false;
		Psychology_Lake2->Visible = false;
		Psychology_Lake1->Visible = false;
		Lake_To_Sewer->Visible = false;
		// display object in scene
		Sewer_Lake_Intersection->Visible = true;
		take_heart->Visible = true;
		spot_altar->Visible = true;
		if (player.get_ability().SAN <= init_san) {
			swallow_heart->Visible = true;
		}
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Altar.get_path()));
	}
	private: System::Void Sewer_To_Plazza_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "plazza");
		if (sun_count % 6 == 5) {
			NPCGawain->Visible = true;
		}
		// hide object in scene
		Sewer_To_Plazza->Visible = false;
		Sewer_Plazza_Inn->Visible = false;
		Sewer_Plazza_Prison->Visible = false;
		// display object in scene
		signpost->Visible = true;
		sundial->Visible = true;
		Plazza_To_Inn->Visible = true;
		//Plazza_To_Prison->Visible = true;
		Plazza_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Plazza.get_path()));
		if (sun_count % 6 != 0) {
			listen_stranger_plazza->Visible = true;
			chat_stranger_plazza->Visible = true;
		}
		if (sun_count % 6 == 5) {
			Ask_Wagain->Visible = true;
		}
	}
	private: System::Void Sewer_To_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "inn");
		// hide object in scene
		Sewer_To_Inn->Visible = false;
		Sewer_Inn_Outlet->Visible = false;
		Sewer_Inn_Plazza->Visible = false;
		Sewer_Inn_Library->Visible = false;
		// display object in scene
		Inn_To_Plazza->Visible = true;
		Go_In_Inn->Visible = true;
		Inn_To_Market->Visible = true;
		Inn_To_IntersectionRight->Visible = true;
		Observe_Inn->Visible = true;
		Inn_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Inn_Outside.get_path()));
	}
	private: System::Void Sewer_To_Market_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "market");
		if (sun_count % 6 == 2) {
			NPCGawain->Visible = true;
		}
		// hide object in scene
		Sewer_To_Market->Visible = false;
		Sewer_Market_Restaurant->Visible = false;
		Sewer_Market_Outlet->Visible = false;
		//display object in scene
		Market_To_Restaurant->Visible = true;
		Market_To_Inn->Visible = true;
		diner->Visible = true;
		studio->Visible = true;
		Market_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Market.get_path()));
	}
	private: System::Void Sewer_To_Restaurant_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "restaurant");
		// hide object in scene
		Sewer_To_Restaurant->Visible = false;
		Sewer_Restaurant_Prison->Visible = false;
		Sewer_Restaurant_Market->Visible = false;
		// display object in scene
		Restaurant_To_Market->Visible = true;
		Restaurant_To_Prison->Visible = true;
		Go_To_Restaurant->Visible = true;
		Restaurant_To_Sewer->Visible = true;

		background->Image = gcnew Bitmap(gcnew System::String(Restaurant_Outside.get_path()));
	}
	private: System::Void Sewer_To_Library_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "library");
		// hide object in scene
		Sewer_To_Library->Visible = false;
		Sewer_Library_Intersection->Visible = false;
		Sewer_Library_Inn->Visible = false;
		// diaplay object in scene
		Library_To_IntersectionRight->Visible = true;
		Library_To_IntersectionLeft->Visible = true;
		Go_In_Library->Visible = true;
		Library_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Library_Outside.get_path()));
	}
	private: System::Void Sewer_Plazza_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_inn");
		dialog_text->Text = "酒館";
		// hide object in scene
		Sewer_Plazza_Inn->Visible = false;
		Sewer_To_Plazza->Visible = false;
		Sewer_Plazza_Prison->Visible = false;
		// diaplay object in scene
		Sewer_To_Inn->Visible = true;
		Sewer_Inn_Outlet->Visible = true;
		Sewer_Inn_Plazza->Visible = true;
		Sewer_Inn_Library->Visible = true;
	}
	private: System::Void Sewer_Inn_Outlet_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "outlet");
		dialog_text->Text = "轉角";
		// hide object in scene
		Sewer_Inn_Outlet->Visible = false;
		Sewer_To_Inn->Visible = false;
		Sewer_Inn_Plazza->Visible = false;
		Sewer_Inn_Library->Visible = false;
		// diaplay object in scene
		Sewer_Outlet_Market->Visible = true;
		Sewer_Outlet_Inn->Visible = true;
		observe_swirl->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Outlet.get_path()));
	}
	private: System::Void Sewer_Outlet_Market_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_market");
		dialog_text->Text = "市場";
		// hide object in scene
		Sewer_Outlet_Market->Visible = false;
		Sewer_Outlet_Inn->Visible = false;
		observe_swirl->Visible = false;
		go_into_swirl->Visible = false;
		// diaplay object in scene
		Sewer_To_Market->Visible = true;
		Sewer_Market_Restaurant->Visible = true;
		Sewer_Market_Outlet->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
	}

	private: System::Void Sewer_Market_Restaurant_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_restaurant");
		dialog_text->Text = "餐廳";
		// hide object in scene
		Sewer_Market_Restaurant->Visible = false;
		Sewer_To_Market->Visible = false;
		Sewer_Market_Outlet->Visible = false;
		// diaplay object in scene
		Sewer_To_Restaurant->Visible = true;
		Sewer_Restaurant_Prison->Visible = true;
		Sewer_Restaurant_Market->Visible = true;
	}
	private: System::Void Sewer_Restaurant_Prison_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "moon_state");
		talk_to_Lancelot_click = 0;
		dialog_text->Text = "監獄";
		// hide object in scene
		Sewer_Restaurant_Prison->Visible = false;
		Sewer_To_Restaurant->Visible = false;
		Sewer_Restaurant_Market->Visible = false;
		// diaplay object in scene1
		Sewer_Prison_Plazza->Visible = true;
		Sewer_Prison_Restaurant->Visible = true;
		Sewer_Prison_Intersection->Visible = true;
		Sewer_To_Secret->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Moon_State.get_path()));
	}
	private: System::Void Sewer_Prison_Plazza_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_plazza");
		dialog_text->Text = "廣場";
		// hide object in scene
		Sewer_Prison_Plazza->Visible = false;
		Sewer_Prison_Restaurant->Visible = false;
		Sewer_Prison_Intersection->Visible = false;
		Sewer_To_Secret->Visible = false;
		Lancelot_dialog_1->Visible = false;
		Lancelot_dialog_2->Visible = false;
		Lancelot_dialog_3->Visible = false;
		Lancelot_dialog_4->Visible = false;
		// diaplay object in scene
		Sewer_To_Plazza->Visible = true;
		Sewer_Plazza_Inn->Visible = true;
		Sewer_Plazza_Prison->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
		//@@@@@
	}
	private: System::Void Sewer_Plazza_Prison_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "moon_state");
		talk_to_Lancelot_click = 0;
		// hide object in scene
		Sewer_Plazza_Inn->Visible = false;
		Sewer_To_Plazza->Visible = false;
		Sewer_Plazza_Prison->Visible = false;
		// diaplay object in scene
		Sewer_Prison_Plazza->Visible = true;
		Sewer_Prison_Restaurant->Visible = true;
		Sewer_Prison_Intersection->Visible = true;
		Sewer_To_Secret->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Moon_State.get_path()));
	}
	private: System::Void Sewer_Prison_Restaurant_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_restaurant");
		dialog_text->Text = "餐廳";
		// hide object in scene
		Sewer_Prison_Restaurant->Visible = false;
		Sewer_Prison_Plazza->Visible = false;
		Sewer_Prison_Intersection->Visible = false;
		Sewer_To_Secret->Visible = false;
		Lancelot_dialog_1->Visible = false;
		Lancelot_dialog_2->Visible = false;
		Lancelot_dialog_3->Visible = false;
		Lancelot_dialog_4->Visible = false;
		// diaplay object in scene
		Sewer_Restaurant_Prison->Visible = true;
		Sewer_To_Restaurant->Visible = true;
		Sewer_Restaurant_Market->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
	}
	private: System::Void Sewer_Restaurant_Market_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_market");
		dialog_text->Text = "市場";
		// hide object in scene
		Sewer_Restaurant_Market->Visible = false;
		Sewer_Restaurant_Prison->Visible = false;
		Sewer_To_Restaurant->Visible = false;
		// diaplay object in scene
		Sewer_Market_Restaurant->Visible = true;
		Sewer_To_Market->Visible = true;
		Sewer_Market_Outlet->Visible = true;
	}
	private: System::Void Sewer_Market_Outlet_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "outlet");
		dialog_text->Text = "轉角";
		// hide object in scene
		Sewer_Market_Restaurant->Visible = false;
		Sewer_To_Market->Visible = false;
		Sewer_Market_Outlet->Visible = false;
		// diaplay object in scene
		observe_swirl->Visible = true;
		Sewer_Outlet_Inn->Visible = true;
		Sewer_Outlet_Market->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Outlet.get_path()));
	}
	private: System::Void Sewer_Outlet_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_inn");
		dialog_text->Text = "酒館";
		// hide object in scene
		Sewer_Outlet_Inn->Visible = false;
		Sewer_Outlet_Market->Visible = false;
		// diaplay object in scene
		observe_swirl->Visible = false;
		go_into_swirl->Visible = false;
		Sewer_To_Inn->Visible = true;
		Sewer_Inn_Outlet->Visible = true;
		Sewer_Inn_Plazza->Visible = true;
		Sewer_Inn_Library->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
	}
	private: System::Void Sewer_Inn_Plazza_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_plazza");
		dialog_text->Text = "廣場";
		// hide object in scene
		Sewer_To_Inn->Visible = false;
		Sewer_Inn_Outlet->Visible = false;
		Sewer_Inn_Plazza->Visible = false;
		Sewer_Inn_Library->Visible = false;
		// diaplay object in scene
		Sewer_To_Plazza->Visible = true;
		Sewer_Plazza_Inn->Visible = true;
		Sewer_Plazza_Prison->Visible = true;
	}
	private: System::Void Sewer_Prison_Intersection_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_intersection");
		dialog_text->Text = "路口";
		// hide object in scene
		Sewer_Prison_Plazza->Visible = false;
		Sewer_Prison_Restaurant->Visible = false;
		Sewer_Prison_Intersection->Visible = false;
		Sewer_To_Secret->Visible = false;
		Lancelot_dialog_1->Visible = false;
		Lancelot_dialog_2->Visible = false;
		Lancelot_dialog_3->Visible = false;
		Lancelot_dialog_4->Visible = false;
		// diaplay object in scene
		Sewer_Intersection_Library->Visible = true;
		Sewer_Intersection_Prison->Visible = true;
		Sewer_Intersection_Lake->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
	}
	private: System::Void Sewer_Library_Intersection_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_intersection");
		dialog_text->Text = "路口";
		// hide object in scene
		Sewer_To_Library->Visible = false;
		Sewer_Library_Intersection->Visible = false;
		Sewer_Library_Inn->Visible = false;
		// diaplay object in scene
		Sewer_Intersection_Library->Visible = true;
		Sewer_Intersection_Prison->Visible = true;
		Sewer_Intersection_Lake->Visible = true;
	}
	private: System::Void Sewer_Library_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_inn");
		dialog_text->Text = "酒館";
		// hide object in scene
		Sewer_To_Library->Visible = false;
		Sewer_Library_Intersection->Visible = false;
		Sewer_Library_Inn->Visible = false;
		// diaplay object in scene
		Sewer_To_Inn->Visible = true;
		Sewer_Inn_Outlet->Visible = true;
		Sewer_Inn_Plazza->Visible = true;
		Sewer_Inn_Library->Visible = true;
	}
	private: System::Void Sewer_Inn_Library_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_library");
		dialog_text->Text = "圖書館";
		// hide object in scene
		Sewer_To_Inn->Visible = false;
		Sewer_Inn_Outlet->Visible = false;
		Sewer_Inn_Plazza->Visible = false;
		Sewer_Inn_Library->Visible = false;
		// diaplay object in scene
		Sewer_To_Library->Visible = true;
		Sewer_Library_Intersection->Visible = true;
		Sewer_Library_Inn->Visible = true;
	}
	private: System::Void Sewer_Intersection_Library_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_library");
		dialog_text->Text = "圖書館";
		// hide object in scene
		Sewer_Intersection_Library->Visible = false;
		Sewer_Intersection_Prison->Visible = false;
		Sewer_Intersection_Lake->Visible = false;
		// diaplay object in scene
		Sewer_To_Library->Visible = true;
		Sewer_Library_Intersection->Visible = true;
		Sewer_Library_Inn->Visible = true;
	}
	private: System::Void Sewer_Intersection_Prison_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "moon_state");
		talk_to_Lancelot_click = 0;
		dialog_text->Text = "監獄";
		// hide object in scene
		Sewer_Intersection_Library->Visible = false;
		Sewer_Intersection_Prison->Visible = false;
		Sewer_Intersection_Lake->Visible = false;
		// diaplay object in scene
		Sewer_Prison_Plazza->Visible = true;
		Sewer_Prison_Restaurant->Visible = true;
		Sewer_Prison_Intersection->Visible = true;
		Sewer_To_Secret->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Moon_State.get_path()));
	}

	private: System::Void Sewer_Intersection_Lake_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "altar");
		dialog_text->Text = "祭壇";
		// hide object in scene
		Sewer_Intersection_Library->Visible = false;
		Sewer_Intersection_Prison->Visible = false;
		Sewer_Intersection_Lake->Visible = false;
		// diaplay object in scene
		take_heart->Visible = true;
		spot_altar->Visible = true;
		if (player.get_ability().SAN <= init_san) {
			swallow_heart->Visible = true;
		}
		Sewer_Lake_Intersection->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Altar.get_path()));
	}
	private: System::Void Sewer_Lake_Intersection_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_intersection");
		dialog_text->Text = "路口";
		// hide object in scene
		take_heart->Visible = false;
		spot_altar->Visible = false;
		swallow_heart->Visible = false;
		Sewer_Lake_Intersection->Visible = false;
		// diaplay object in scene
		Sewer_Intersection_Library->Visible = true;
		Sewer_Intersection_Prison->Visible = true;
		Sewer_Intersection_Lake->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
	}
	private: System::Void chat_stranger_plazza_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(whatchat, "stranger_plazza");
		if (sun_count >= 18) {
			dialog_text->Text = "無論你如何呼喊，他們就像是沒看到你一般。";
		}
		else {
			chatbox_1->Text = "你感覺這城鎮如何";
			chatbox_1->Visible = true;
			chatbox_2->Text = "這裡為何沒有黑夜";
			chatbox_2->Visible = true;
			chatbox_3->Text = "鎮子上有什麼傳說嗎";
			chatbox_3->Visible = true;
		}
	}
	private: System::Void chatbox_1_Click(System::Object^ sender, System::EventArgs^ e) {
		// in plazza
		if (strcmp(whatchat, "wagain_plazza") == 0) {
			dialog_text->Text = "我們下一站要去的是傭有成鎮中最美麗自然風景的地方”德茲瑪麗湖”。";
		}
		else if (strcmp(whatchat, "stranger_plazza") == 0) {
			dialog_text->Text = "我從小就住在這座城鎮，這座城鎮的風景優美、鎮民和樂安康，能住在治理的這麼好的城鎮裡可真是我三輩子修來的福份啊!";
		}
		else if (strcmp(whatchat, "see_monster") == 0) {
			dialog_text->Text = "你逃回了地面。";
			chatbox_1->Visible = false;
			chatbox_2->Visible = false;
			monster_pic->Visible = false;
			signpost->Visible = true;
			sundial->Visible = true;
			Plazza_To_Inn->Visible = true;
			strcpy(place, "plazza");
			//Plazza_To_Prison->Visible = true;
			Plazza_To_Sewer->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Plazza.get_path()));
			sun_count -= 1;
			Sun->Value = sun_count % 6;
			Spot_Prison_Out->Visible = true;
			if (sun_count % 6 != 0) {
				listen_stranger_plazza->Visible = true;
				chat_stranger_plazza->Visible = true;
			}
			if (sun_count % 6 == 5) {
				Ask_Wagain->Visible = true;
			}
		}
		else if (strcmp(whatchat, "book") == 0) {
			dialog_text->Text = "這本書記載著一個勇者的故事，從前從前有一位勇者肩負者討伐巨龍的職責，他一路上遇見了許多知心的夥伴，但在討伐巨龍時，無法抵擋巨龍的強大，最終只有勇者一人逃了回來，他回來後沉淪在絕望的世界中，直到一位自稱賢者的人來到他的身前對他說”我能夠讓你回到一個一切都還沒發生的世界，在那裏你會擁有無窮的力量，巨龍對你來說也不足為懼”，勇者像是抓住最後一根稻草般迅速的同意了這個提議”，在那個世界哩，勇者一瞬間輾死了巨龍，而後和夥伴們度過快樂平凡的日子，在童話書的最後一頁，帶著一抹微笑的賢者化身巨龍朝著遠方飛去。 ";
			chatbox_1->Visible = false;
		}
	}
	private: System::Void chatbox_2_Click(System::Object^ sender, System::EventArgs^ e) {
		// in plazza
		if (strcmp(whatchat, "wagain_plazza") == 0) {
			dialog_text->Text = "你們向著左側走去，路途經過了一棟建築，這是一個由石頭砌成的建築，建築有著一扇鐵藝門，門口站著兩位全副武裝的侍衛，在門上方還掛著一塊禁止進入的牌匾，你們順著土路和兩旁的綠植走到了一座湖邊。";
			background->Image = gcnew Bitmap(gcnew System::String(Prison_Outside.get_path()));
			strcpy(place, "lake");
			// hide object in scene
			signpost->Visible = false;
			sundial->Visible = false;
			Plazza_To_Inn->Visible = false;
			//Plazza_To_Prison->Visible = false;
			Ask_Wagain->Visible = false;
			Observe_Signpost->Visible = false;
			chatbox_1->Visible = false;
			chatbox_2->Visible = false;
			chatbox_3->Visible = false;
			chatbox_4->Visible = false;
			item_button->Visible = false;
			Observe_Sundial->Visible = false;
			listen_stranger_plazza->Visible = false;
			chat_stranger_plazza->Visible = false;
			// show object in scene
			continue_button->Visible = true;
			strcpy(whatchat, "to_lake");
		}
		else if (strcmp(whatchat, "stranger_plazza") == 0) {
			dialog_text->Text = "你在說甚麼阿，黑夜是甚麼最近的流行語嗎。";
		}
		else if (strcmp(whatchat, "see_monster") == 0) {
			dialog_text->Text = "你衝向了怪物，揮出了你的拳頭。";
			attack_button->Visible = true;
			chatbox_1->Visible = false;
			chatbox_2->Visible = false;
			seem_monster = false;
		}
		else if (strcmp(whatchat, "book") == 0) {
			dialog_text->Text = "羊皮紙上面畫著一些鬼畫符般的圖示，寫著”以強大的軀殼化為基底，強力的渴望為養料，即可構…基…國…能量…”後方的部分由於老化和破損只能勉強看清幾個字。 ";
			chatbox_1->Visible = true;
		}
	}
	private: System::Void chatbox_3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (strcmp(whatchat, "wagain_plazza") == 0) {
			dialog_text->Text = "這個城鎮的太陽永不落下，在這裡的人都有一顆積極熱誠的心，這座城鎮不光風景極佳，比起其他地方先進可不只一籌。";
		}
		else if (strcmp(whatchat, "stranger_plazza") == 0) {
			dialog_text->Text = "傳說甚麼的我倒是沒聽說過，這座陣子非常的安穩和諧，如果你真的十分好奇的話，可以試著去圖書館找找看。";
		}
	}
	private: System::Void chatbox_4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (strcmp(whatchat, "wagain_plazza") == 0) {
			dialog_text->Text = "你向他發出了攻擊，下一秒你感覺你的手腕被握住，你感到一震天旋地轉，背後火辣辣的疼痛與從高處俯瞰的那張充滿笑容的臉讓你意識到你失敗了，”禁止暴力喔”瓦格恩輕柔地說道，你受到了2點傷害。";
			player.edit_ability({ "HP" }, -2);
			player.change_label_text({ "HP" }, HP);
			chatbox_4->Visible = false;
		}
	}

	private: System::Void Spot_Prison_Out_Click(System::Object^ sender, System::EventArgs^ e) {
		dice.check(player.get_skill().Spot);
		if (Spot_Prison_Out_Count == 9) {
			if (dice.success == 0) {
				dialog_text->Text = "觀察判定:失敗\r\n你仔細地觀察了這棟建築，你只看得出這棟建築看起來相對其他建築高級了許多外。";
			}
			else if (dice.success == 1) {
				dialog_text->Text = "觀察判定:成功\r\n你仔細地觀察了這棟建築，除了這棟建築看起來相對其他建築高級了許多外，你還發現這座鐵藝門被清理得十分乾淨，但這扇門沒有門片，彷彿是鑲在牆壁上一般，根本無法開啟。";
			}
			else {
				if (sun_count % 6 == 1 || sun_count % 6 == 2)
				{
					dialog_text->Text = "觀察判定:困難成功\r\n你仔細地觀察了這棟建築，你發現這棟房子坐西朝東，似乎正對著廣場，在二樓的位置應該能很好的欣賞廣場的景色，但這裡的採光似乎十分極端，太陽在東邊時採光極佳，而在溪邊時則相反。你看到二樓的窗戶有個人影，但由於窗戶的反光你並不能看清人影的樣子。";
				}
				else {
					dialog_text->Text = "觀察判定:困難成功\r\n你仔細地觀察了這棟建築，你發現這棟房子坐西朝東，似乎正對著廣場，在二樓的位置應該能很好的欣賞廣場的景色，但這裡的採光似乎十分極端，太陽在東邊時採光極佳，而在溪邊時則相反。";
				}
			}
			Spot_Prison_Out_Count = dice.success;
		}
		else {
			if (Spot_Prison_Out_Count == 0) {
				dialog_text->Text = "觀察判定:失敗\r\n你仔細地觀察了這棟建築，你只看得出這棟建築看起來相對其他建築高級了許多外。";
			}
			else if (Spot_Prison_Out_Count == 1) {
				dialog_text->Text = "觀察判定:成功\r\n你仔細地觀察了這棟建築，除了這棟建築看起來相對其他建築高級了許多外，你還發現這座鐵藝門被清理得十分乾淨，但這扇門沒有門片，彷彿是鑲在牆壁上一般，根本無法開啟。";
			}
			else {
				if (sun_count % 6 == 3 || sun_count % 6 == 4)
				{
					dialog_text->Text = "觀察判定:困難成功\r\n你仔細地觀察了這棟建築，你發現這棟房子坐西朝東，似乎正對著廣場，在二樓的位置應該能很好的欣賞廣場的景色，但這裡的採光似乎十分極端，太陽在東邊時採光極佳，而在溪邊時則相反。你看到二樓的窗戶有個人影，但由於窗戶的反光你並不能看清人影的樣子。";
				}
				else {
					dialog_text->Text = "觀察判定:困難成功\r\n你仔細地觀察了這棟建築，你發現這棟房子坐西朝東，似乎正對著廣場，在二樓的位置應該能很好的欣賞廣場的景色，但這裡的採光似乎十分極端，太陽在東邊時採光極佳，而在溪邊時則相反。";
				}
			}
		}
	}
private: System::Void attack_button_Click(System::Object^ sender, System::EventArgs^ e) {
	attack_button->Visible = false;
	if (strcmp(whatchat, "see_monster") == 0) {
		if (Battle.turn < 2) {
			evade_button->Visible = true;
			counterattack_button->Visible = true;
			Battle.attack(player.get_ability().DB, player.get_ability().DMG, player.get_skill().Brawl, false, monster.get_skill().Brawl, monster.get_ability().DMG);
			if (Battle.atk_success == false) {
				dialog_text->Text = "攻擊對抗:失敗\r\n你不只沒打到他，還露出了嚴重的破綻被他一爪子抓傷了。";
				player.edit_ability({ "HP" }, -Battle.dmg);
				player.change_label_text({ "HP" }, HP);
			}
			else {
				dialog_text->Text = "你的拳頭穿過了他的巴巴，將他打退了，他看起來受了點傷。";
			}
		}
		else {
			dialog_text->Text = "就在你正要揮出拳頭的那一剎那，你看到一把長劍從怪物的頭中插了出來，你們看到遠處走來一群全副武裝的騎士，這群騎士一劍就將你們面前的怪物給劈成了兩半，從陣中走出來一紫髮紅眼的帥哥，他開口說道”我知道你們有很多想問的，但這裡可不適合久留，先跟我來吧，我們去安全的地方說”";
			monster_pic->Visible = false;
			continue_button->Visible = true;
			strcpy(whatchat, "to_moon_state");
		}
	}
	else {
		Battle.attack(player.get_ability().DB, player.get_ability().DMG, player.get_skill().Brawl, false, Arthur.get_skill().Brawl, Arthur.get_ability().DMG);
		if (Battle.atk_success == false) {
			dialog_text->Text = "攻擊對抗:失敗\r\n你不只沒打到他，還露出了嚴重的破綻被他一拳打傷了。";
			player.edit_ability({ "HP" }, -Battle.dmg);
			player.change_label_text({ "HP" }, HP);
		}
		else {
			dialog_text->Text = "你的拳頭穿過了他的巴巴，將他打退了，他看起來受了點傷。";
			Arthur.edit_ability({ "HP" }, -Battle.dmg);
		}
		if (Arthur.get_ability().HP <= 0) {
			last_fight_win = 1;
		}
		else {
			evade_button->Visible = true;
			counterattack_button->Visible = true;
		}
	}
}
private: System::Void evade_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (strcmp(whatchat, "see_monster") == 0) {
		Battle.evade(player.get_skill().Evade, monster.get_skill().Brawl, monster.get_ability().DMG, monster.get_ability().DB);
		evade_button->Visible = false;
		counterattack_button->Visible = false;
		attack_button->Visible = true;
		if (Battle.atk_success == false) {
			dialog_text->Text = "你一個華麗的後撤步，躲開了他的魔爪。";
		}
		else {
			dialog_text->Text = "你踩著地上的水讓你踉蹌了一下，你成功的用你的臉對他的爪子造成了零點傷害。";
			player.edit_ability({ "HP" }, -Battle.dmg);
			player.change_label_text({ "HP" }, HP);
		}
		Battle.turn += 1;
	}
	else {
		Battle.evade(player.get_skill().Evade, Arthur.get_skill().Brawl, Arthur.get_ability().DMG, Arthur.get_ability().DB);
		evade_button->Visible = false;
		counterattack_button->Visible = false;
		attack_button->Visible = true;
		if (Battle.atk_success == false) {
			dialog_text->Text = "你一個華麗的後撤步，躲開了他的直拳。";
		}
		else {
			dialog_text->Text = "他的拳頭朝著你的肚子飛過來，比你閃避的速度還快，你被打得腦子差點斷了電。";
			player.edit_ability({ "HP" }, -Battle.dmg);
			player.change_label_text({ "HP" }, HP);
		}
		Battle.turn += 1;
	}
}
private: System::Void counterattack_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (strcmp(whatchat, "see_monster") == 0) {
		Battle.counter_attack(player.get_skill().Brawl, player.get_ability().DMG, monster.get_skill().Brawl, monster.get_ability().DMG, monster.get_ability().DB);
		evade_button->Visible = false;
		counterattack_button->Visible = false;
		attack_button->Visible = true;
		if (Battle.atk_success == false) {
			dialog_text->Text = "接、化、發，那個男人的聲音在你的腦海中突兀地想起，當你緩過神時你的拳頭就已經在怪物的臉上了。";
		}
		else {
			dialog_text->Text = "你踩著地上的水讓你踉蹌了一下，你的拳頭與他擦肩而過，而他的拳頭與你不過是一面之交，你甚至差點沒站住腳。";
			player.edit_ability({ "HP" }, -Battle.dmg);
			player.change_label_text({ "HP" }, HP);
		}
		Battle.turn += 1;
	}
	else {
		Battle.counter_attack(player.get_skill().Brawl, player.get_ability().DMG, Arthur.get_skill().Brawl, Arthur.get_ability().DMG, Arthur.get_ability().DB);
		evade_button->Visible = false;
		counterattack_button->Visible = false;
		attack_button->Visible = true;
		if (Battle.atk_success == false) {
			dialog_text->Text = "接、化、發，那個男人的聲音在你的腦海中突兀地想起，當你緩過神時你的拳頭就已經在他的臉上了。";
			Arthur.edit_ability({ "HP" }, -Battle.dmg);
		}
		else {
			dialog_text->Text = "你的拳頭與他擦肩而過，而他的一拳打飛了你。";
			player.edit_ability({ "HP" }, -Battle.dmg);
			player.change_label_text({ "HP" }, HP);
		}
		Battle.turn += 1;
		if (Arthur.get_ability().HP <= 0) {
			last_fight_win = 1;
			attack_button->Visible = false;
		}
		else {
			attack_button->Visible = true;
		}
	}
}
private: System::Void Spot_Library_In_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Library_Library_In_Click(System::Object^ sender, System::EventArgs^ e) {
	Library_Library_In->Visible = false;
	dice.check(player.get_skill().Library);
	if (Library_Library_In_Count == 9) {
		if (dice.success == 0) {
			dialog_text->Text = "圖書館使用判定:失敗\r\n你仔細你嘗試在書架上尋找一些可能對你有幫助的書籍，但你只找到了一些無關緊要的閒人軼事。";
		}
		else if (dice.success == 1) {
			dialog_text->Text = "圖書館使用判定:成功\r\n你仔細你嘗試在書架上尋找一些可能對你有幫助的書籍，你在書架上發現了一本名為夢境英雄的童話書。";
			chatbox_1->Visible = true;
			chatbox_1->Text = "夢境英雄";
			strcpy(whatchat, "book");
		}
		else {
			dialog_text->Text = "圖書館使用判定:困難成功\r\n你仔細你嘗試在書架上尋找一些可能對你有幫助的書籍，你在書架上發現了一本名為夢境英雄的童話書和一張殘破的羊皮紙。";
			chatbox_1->Visible = true;
			chatbox_1->Text = "夢境英雄";
			chatbox_2->Visible = true;
			chatbox_2->Text = "殘破的羊皮紙";
			strcpy(whatchat, "book");
		}
		Library_Library_In_Count = dice.success;
	}
	else {
		if (Library_Library_In_Count == 0) {
			dialog_text->Text = "圖書館使用判定:失敗\r\n你仔細你嘗試在書架上尋找一些可能對你有幫助的書籍，但你只找到了一些無關緊要的閒人軼事。";
		}
		else if (Library_Library_In_Count == 1) {
			dialog_text->Text = "圖書館使用判定:成功\r\n你仔細你嘗試在書架上尋找一些可能對你有幫助的書籍，你在書架上發現了一本名為夢境英雄的童話書。";
			chatbox_1->Visible = true;
			chatbox_1->Text = "夢境英雄";
			strcpy(whatchat, "book");
		}
		else {
			dialog_text->Text = "圖書館使用判定:困難成功\r\n你仔細你嘗試在書架上尋找一些可能對你有幫助的書籍，你在書架上發現了一本名為夢境英雄的童話書和一張殘破的羊皮紙。";
			chatbox_1->Visible = true;
			chatbox_1->Text = "夢境英雄";
			chatbox_2->Visible = true;
			chatbox_2->Text = "殘破的羊皮紙";
			strcpy(whatchat, "book");
		}
	}
}
	private: System::Void Sewer_To_Secret_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "secret");
		// hide object in scene
		Sewer_Prison_Plazza->Visible = false;
		Sewer_Prison_Restaurant->Visible = false;
		Sewer_Prison_Intersection->Visible = false;
		Sewer_To_Secret->Visible = false;
		Lancelot_dialog_1->Visible = false;
		Lancelot_dialog_2->Visible = false;
		Lancelot_dialog_3->Visible = false;
		Lancelot_dialog_4->Visible = false;
		//display object in scene
		Secret_To_Sewer->Visible = true;
		Secret_To_Prison->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Secret_Door.get_path()));
	}
	private: System::Void Secret_To_Sewer_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "moon_state");
		talk_to_Lancelot_click = 0;
		// hide object in scene
		Secret_To_Sewer->Visible = false;
		Secret_To_Prison->Visible = false;
		//display object in scene
		//地下城
		Sewer_Prison_Plazza->Visible = true;//下
		Sewer_Prison_Restaurant->Visible = true;//左
		Sewer_Prison_Intersection->Visible = true;//右
		Sewer_To_Secret->Visible = true;//上
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Moon_State.get_path()));
	}
	private: System::Void Secret_To_Prison_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "1F");
		if (sun_count % 6 == 3) {
			NPCGuinevere->Visible = true;
		}
		// hide object in scene
		Secret_To_Sewer->Visible = false;
		Secret_To_Prison->Visible = false;

		//display object in scene
		Prison_To_Secret->Visible = true;
		Prison1_To_Prison2->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Prison_1F.get_path()));
	}
	private: System::Void Prison1_To_Prison2_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "2F");
		// hide object in scene
		Prison1_To_Prison2->Visible = false;
		Prison_To_Secret->Visible = false;
		NPCGuinevere->Visible = false;
		//display object in scene
		Prison2_To_Prison1->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Prison_2F.get_path()));
		if (talk_to_Guinevere->Visible == true) {
			talk_to_Guinevere->Visible = false;
		}
	}
	private: System::Void Prison_To_Secret_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "secret");
		// hide object in scene
		Prison_To_Secret->Visible = false;
		Prison1_To_Prison2->Visible = false;
		NPCGuinevere->Visible = false;
		//display object in scene
		Secret_To_Sewer->Visible = true;
		Secret_To_Prison->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Secret_Door.get_path()));
		if (talk_to_Guinevere->Visible == true) {
			talk_to_Guinevere->Visible = false;
		}
	}
	private: System::Void Prison2_To_Prison1_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "1F");
		if (sun_count % 6 == 3) {
			NPCGuinevere->Visible = true;
		}
		// hide object in scene
		Prison1_To_Prison2->Visible = true;
		Prison_To_Secret->Visible = true;
		//display object in scene
		Prison2_To_Prison1->Visible = false;
		background->Image = gcnew Bitmap(gcnew System::String(Prison_1F.get_path()));
		if (talk_to_Guinevere->Visible == true) {
			talk_to_Guinevere->Visible = false;
		}
	}
	private: System::Void workshop_buy_rolling_pin_Click(System::Object^ sender, System::EventArgs^ e) {
		if (rolling_pin_bought == 0) {
			workshop_buy_rolling_pin->Text = L"購買成功";
			ListViewItem^ rolling_pin = gcnew ListViewItem(gcnew array<String^> { L"桿麵棍", L"1" });
			backpack_items_listView->Items->Add(rolling_pin);
			rolling_pin_bought = 1;
		}
	}
	private: System::Void workshop_buy_hammer_Click(System::Object^ sender, System::EventArgs^ e) {
		if (hammer_bought == 0) {
			workshop_buy_hammer->Text = L"購買成功";
			ListViewItem^ hammer = gcnew ListViewItem(gcnew array<String^> { L"槌子", L"1" });
			backpack_items_listView->Items->Add(hammer);
			hammer_bought = 1;
		}
	}
	private: System::Void workshop_buy_knife_Click(System::Object^ sender, System::EventArgs^ e) {
		if (knife_bought == 0) {
			workshop_buy_knife->Text = L"購買成功";
			ListViewItem^ knife = gcnew ListViewItem(gcnew array<String^> { L"水果刀", L"1" });
			backpack_items_listView->Items->Add(knife);
			knife_bought = 1;
		}
	}
	private: System::Void workshop_buy_rope_Click(System::Object^ sender, System::EventArgs^ e) {
		if (rope_bought == 0) {
			workshop_buy_rope->Text = L"購買成功";
			ListViewItem^ rope = gcnew ListViewItem(gcnew array<String^> { L"麻繩", L"2M x 1" });
			backpack_items_listView->Items->Add(rope);
			rope_bought = 1;
		}
	}
	private: System::Void snackbar_buy_sandwitch_Click(System::Object^ sender, System::EventArgs^ e) {
		if (sandwitch_bought == 0) {
			ListViewItem^ sandwitch = gcnew ListViewItem(gcnew array<String^> { L"三明治", L"1" });
			backpack_items_listView->Items->Add(sandwitch);
			sandwitch_bought = 1;
			sandwitch_count = sandwitch_count + 1;
		}
		else if (sandwitch_bought == 1) {
			sandwitch_count = sandwitch_count + 1;
			for (int i = 0; i < backpack_items_listView->Items->Count; i++)
			{
				//delete the old item
				ListViewItem^ currentItem = backpack_items_listView->Items[i];
				String^ subItemText = currentItem->SubItems[0]->Text;
				if (subItemText == "三明治") {
					backpack_items_listView->Items->RemoveAt(i);
				}
			}
			ListViewItem^ sandwitch = gcnew ListViewItem(gcnew array<String^> { L"三明治", Convert::ToString(sandwitch_count) });
			backpack_items_listView->Items->Add(sandwitch);
		}
	}
	private: System::Void snackbar_buy_potato_Click(System::Object^ sender, System::EventArgs^ e) {
		if (potato_bought == 0) {
			ListViewItem^ potato = gcnew ListViewItem(gcnew array<String^> { L"烤ㄇㄌㄐ", L"1" });
			backpack_items_listView->Items->Add(potato);
			potato_bought = 1;
			potato_count = potato_count + 1;
		}
		else if (potato_bought == 1) {
			potato_count = potato_count + 1;
			for (int i = 0; i < backpack_items_listView->Items->Count; i++)
			{
				//delete the old item
				ListViewItem^ currentItem = backpack_items_listView->Items[i];
				String^ subItemText = currentItem->SubItems[0]->Text;
				if (subItemText == "烤ㄇㄌㄐ") {
					backpack_items_listView->Items->RemoveAt(i);
				}
			}
			ListViewItem^ potato = gcnew ListViewItem(gcnew array<String^> { L"烤ㄇㄌㄐ", Convert::ToString(potato_count) });
			backpack_items_listView->Items->Add(potato);
		}
	}
	private: System::Void snackbar_buy_meat_Click(System::Object^ sender, System::EventArgs^ e) {
		if (meat_bought == 0) {
			ListViewItem^ meat = gcnew ListViewItem(gcnew array<String^> { L"肉串", L"1" });
			backpack_items_listView->Items->Add(meat);
			meat_bought = 1;
			meat_count = meat_count + 1;
		}
		else if (meat_bought == 1) {
			meat_count = meat_count + 1;
			for (int i = 0; i < backpack_items_listView->Items->Count; i++)
			{
				//delete the old item
				ListViewItem^ currentItem = backpack_items_listView->Items[i];
				String^ subItemText = currentItem->SubItems[0]->Text;
				if (subItemText == "肉串") {
					backpack_items_listView->Items->RemoveAt(i);
				}
			}
			ListViewItem^ meat = gcnew ListViewItem(gcnew array<String^> { L"肉串", Convert::ToString(meat_count) });
			backpack_items_listView->Items->Add(meat);
		}
	}
	private: System::Void leave_workshop_Click(System::Object^ sender, System::EventArgs^ e) {
		workshop_buy_rolling_pin->Visible = false;
		workshop_buy_rope->Visible = false;
		workshop_buy_knife->Visible = false;
		workshop_buy_hammer->Visible = false;
		leave_workshop->Visible = false;
		dialog_text->Text = "";
	}
	private: System::Void leave_snackbar_Click(System::Object^ sender, System::EventArgs^ e) {
		snackbar_buy_meat->Visible = false;
		snackbar_buy_potato->Visible = false;
		snackbar_buy_sandwitch->Visible = false;
		leave_snackbar->Visible = false;
		dialog_text->Text = "";
	}
	private: System::Void take_heart_Click(System::Object^ sender, System::EventArgs^ e) {
		take_heart->Visible = false;
		if (heart_count == 0) {
			ListViewItem^ heart = gcnew ListViewItem(gcnew array<String^> { L"古怪的心臟", L"1" });
			backpack_items_listView->Items->Add(heart);
			heart_count = 1;
			dragon_heart_hold = true;
			spot_altar->Visible = false;
			swallow_heart->Visible = false;
		}
	}
	private: System::Void fight_with_aurther_Click(System::Object^ sender, System::EventArgs^ e) {
		//補玩戰鬥細節
		last_fight_start = 1;
		attack_button->Visible = true;
		monster_pic->Image = gcnew Bitmap(gcnew System::String(player.get_path()));
		monster_pic->Visible = true;
		fight_with_aurther->Visible = false;
		strcpy(whatchat, "fight_arthur");
	}
	private: System::Void choice_leave_Click(System::Object^ sender, System::EventArgs^ e) {
		last_fight_win = 0;
		choice_leave->Visible = false;
		choice_archeology->Visible = false;
		hit_aurther_again->Visible = false;
		dialog_text->Text = "什麼…”，他陷入了沉默了一陣，”我送妳出去迷途者，不要再回來了”，你眼前一黑，再次睜開時，已經回到你昏過去時的遺跡中，你探索了這個遺跡，回去付了命，拿到了你的薪水，但這個遺址中的痕跡只能證明是五、六世紀時遺留下的，你對此受到了極大的打擊，當時的情景不斷的出現在腦內，讓你睡不好覺，你被大家認為是個只會幻想的落壑人士。";
		final_end_game_button->Visible = true;
	}
	private: System::Void choice_archeology_Click(System::Object^ sender, System::EventArgs^ e) {
		last_fight_win = 0;
		choice_leave->Visible = false;
		choice_archeology->Visible = false;
		hit_aurther_again->Visible = false;
		dialog_text->Text = "什麼…”，他陷入了沉默地盯著你看了一段時間，”我送妳出去追夢者，這個給你，不要再回來了”他甩了一個東西到你手上，你眼前一黑，再次睜開時，已經回到你昏過去時的遺跡中，你手中抓著一個圓桌騎士團的徽章，看起來有些老舊甚至有著一些劃痕，你探索了這個遺跡，回去付了命，拿到了你的薪水，你手上抓著的徽章成為了亞瑟王傳奇的有力證明，雖然仍有許多人懷疑你是個騙子，但你已然成為世界上的亞瑟王傳奇的傳奇學者。";
		final_end_game_button->Visible = true;
	}
	private: System::Void hit_aurther_again_Click(System::Object^ sender, System::EventArgs^ e) {
		last_fight_win = 0;
		choice_leave->Visible = false;
		choice_archeology->Visible = false;
		hit_aurther_again->Visible = false;
		hard_check->Visible = true;
		dialog_text->Text = "在亞瑟嚥下最後一口氣的瞬間，你感覺到頭暈目眩，周圍的畫面在你眼前扭曲，你眼前一黑，再次睜開時，已經回到你昏過去時的遺跡中，你感受到了劇烈的晃動，你明白這個洞窟已經開始坍塌了，你狼狽地向外逃去，困難敏捷判定";
	}
	private: System::Void hard_check_Click(System::Object^ sender, System::EventArgs^ e) {
		//困難敏捷判定
		hard_check->Visible = false;
		dice.check(player.get_ability().DEX);
		//失敗
		if (dice.success <= 1) {
			dialog_text->Text = "你和遺跡一起被永遠的塵封在了地下。";
			final_end_game_button->Visible = true;
		}
		//成功	
		else {
			dialog_text->Text = "你逃離了洞穴的坍塌，但是由於你導致了考古學希望的消逝，你的後半生被萬人唾棄，窮困潦倒。";
			final_end_game_button->Visible = true;
		}
	}
	private: System::Void end_game_continue_Click(System::Object^ sender, System::EventArgs^ e) {
		if (end_game_continue_count == 0) {
			dialog_text->Text = "貝狄威爾”不是的王，你被梅林蒙騙了，這裡不是你夢想中的理想鄉，只是梅林獻給邪神的飼養箱阿”";
			end_game_continue_count = end_game_continue_count + 1;
		}
		else if (end_game_continue_count == 1) {
			dialog_text->Text = "亞瑟”我又怎麼會不知道呢，我都知道的阿，但在莫德雷德起一的那一刻亞瑟王就已經死了，現在的我只是…現在的我…只是一個想要完成夢想，和曾經最好的同志、朋友們達到夢想中那遠離塵世的幻想箱的…被時代拋棄的可憐蟲而已啊!”";
			end_game_continue_count = end_game_continue_count + 1;
		}
		else if (end_game_continue_count == 2) {
			dialog_text->Text = "藍斯洛特”別自我貶低了亞瑟，雖然我沒有資格說這種話，甚至沒有資格出現在你面前，但我還是要說，你永遠都是我們的王，引領著我們的前路，或許你現在落壑了，但你仍是大不列顛那偉大的亞瑟王的未來，曾經的我們或許達不到完美的結局，但現在的我們仍然有機會為自己劃下理想的句點，不要在讓梅林利用你心中的軟弱了，我們著些早該死去的人就該乖乖地進入歷史的垃圾堆裡、繼續掙扎只不過是延續著我們曾經的醜惡而已。”";
			end_game_continue_count = end_game_continue_count + 1;
		}
		else if (end_game_continue_count == 3) {
			dialog_text->Text = "亞瑟”…”";
			end_game_continue_count = end_game_continue_count + 1;
		}
		else if (end_game_continue_count == 4) {
			dialog_text->Text = "桂妮薇兒”這次我會陪著你的，直到最後”";
			end_game_continue_count = end_game_continue_count + 1;
		}
		else if (end_game_continue_count == 5) {
			end_game_continue->Visible = true;
			final_end_game_button->Visible = true;
		}
	}
	private: System::Void final_end_game_button_Click(System::Object^ sender, System::EventArgs^ e) {
		for each (Control ^ control in this->Controls)
		{
			String^ controlName = control->Name;
			if (control->GetType() == PictureBox::typeid && controlName == L"menu")
			{
				control->Visible = true;
			}
			else {
				control->Visible = false;
			}
		}
		menu->Image = gcnew Bitmap(gcnew System::String(ending.get_path()));
	}
	private: System::Void swallow_heart_Click(System::Object^ sender, System::EventArgs^ e) {
		dragon_blood_hold = true;
		swallow_heart->Visible = false;
		take_heart->Visible = false;
	}
	private: System::Void observe_swirl_Click(System::Object^ sender, System::EventArgs^ e) {
		dice.check(player.get_skill().Spot);
		if (Observe_Swirl_Count == 9) {
			if (dice.success == 0) {
				dialog_text->Text = "觀察判定:失敗\r\n你朝著漩渦看去，被不斷旋轉的漩渦繞得頭昏。";
			}
			else if (dice.success <= 2) {
				dialog_text->Text = "觀察判定:成功\r\n你朝著漩渦看去，你發現漩渦的中心傳來一點閃光，似乎是有甚麼反光物在那裏。";
				go_into_swirl->Visible = true;
			}
			else{
				dialog_text->Text = "觀察判定:極難成功\r\n你朝著漩渦看去，你發現漩渦的中心傳來一點閃光，似乎是有甚麼反光物在裏邊，那是一把騎士大劍插在了地板裡。";
				go_into_swirl->Visible = true;
			}
			Observe_Swirl_Count = dice.success;
		}
		else {
			if (Observe_Swirl_Count == 0) {
				dialog_text->Text = "觀察判定:失敗\r\n你朝著漩渦看去，被不斷旋轉的漩渦繞得頭昏。";
			}
			else if (Observe_Swirl_Count <= 2) {
				dialog_text->Text = "觀察判定:成功\r\n你朝著漩渦看去，你發現漩渦的中心傳來一點閃光，似乎是有甚麼反光物在那裏。";
				go_into_swirl->Visible = true;
			}
			else {
				dialog_text->Text = "觀察判定:極難成功\r\n你朝著漩渦看去，你發現漩渦的中心傳來一點閃光，似乎是有甚麼反光物在裏邊，那是一把騎士大劍插在了地板裡。";
				go_into_swirl->Visible = true;
			}
		}
	}
	private: System::Void go_into_swirl_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你感到有輕微的吸力從漩渦中心傳來，但完全不影響你行動，你在漩渦中摸索，從中舉起了一把寶劍，但這把劍彷彿是假的一般毫無重量，你的腦中不知道為何意識到你並不被認可";
		ListViewItem^ sword = gcnew ListViewItem(gcnew array<String^> { L"華麗的長劍", L"1" });
		backpack_items_listView->Items->Add(sword);
		sword_count = 1;
	}
	private: System::Void spot_altar_Click(System::Object^ sender, System::EventArgs^ e) {
		dice.check(player.get_skill().Spot);
		if (Spot_Altar_Count == 9) {
			if (dice.success == 0) {
				dialog_text->Text = "觀察判定:失敗\r\n你仔細的觀察這個房間，你很欣賞這樣的房間風格，甚至想跟房間主人蕉流蕉流。";
			}
			else {
				dialog_text->Text = "觀察判定:成功\r\n你仔細的觀察這個房間，你發現儀式桌的下面有著一個小小的壺，裡面裝著一些白灰色的粉末，罐子上刻著”解夢灰”。";
				ListViewItem^ ash = gcnew ListViewItem(gcnew array<String^> { L"解夢灰", L"1" });
				backpack_items_listView->Items->Add(ash);
				ash_count = 1;
			}
			Spot_Altar_Count = dice.success;
		}
		else {
			if (Spot_Altar_Count == 0) {
				dialog_text->Text = "觀察判定:失敗\r\n你仔細的觀察這個房間，你很欣賞這樣的房間風格，甚至想跟房間主人蕉流蕉流。";
			}
			else {
				dialog_text->Text = "觀察判定:成功\r\n你仔細的觀察這個房間，除了已經被你拿起的解夢灰沒有甚麼特別的。";
			}
		}
	}
private: System::Void show_sword_Click(System::Object^ sender, System::EventArgs^ e) {
	show_sword->Visible = false;
	dialog_text->Text = "你看到酒店老闆，倉皇的跑了過來，他說:你在哪裡找到的，他深呼了一口氣說到:重新認識一下，我叫做貝狄維爾，閣下之命，在下必當誓死跟隨。";
	carry_Bedivere = true;
}
private: System::Void use_ash_Click(System::Object^ sender, System::EventArgs^ e) {
	use_ash->Visible = false;
	dialog_text->Text = "謝謝你的幫助，我叫桂妮薇兒，有甚麼我能幫你的嗎，我也可以請藍斯洛特一起幫忙。";
	carry_Guinevere = true;
	carry_Lancelot = true;
	//display Guinevere talk
	talk_to_Guinevere->Visible = true;
	use_ash->Visible = false;
}
private: System::Void talk_to_Guinevere_Click(System::Object^ sender, System::EventArgs^ e) {
	dialog_text->Text = "";
	Guinevere_dialog_1->Visible = true;
	Guinevere_dialog_2->Visible = true;
	talk_to_Guinevere->Visible = false;
}
private: System::Void Guinevere_dialog_1_Click(System::Object^ sender, System::EventArgs^ e) {
	dialog_text->Text = "";
	Guinevere_dialog_1->Visible = false;
}
private: System::Void Guinevere_dialog_2_Click(System::Object^ sender, System::EventArgs^ e) {
	dialog_text->Text = "";
	Guinevere_dialog_2->Visible = false;
}
private: System::Void talk_to_Lancelot_Click(System::Object^ sender, System::EventArgs^ e) {
	Lancelot_dialog_1->Visible = true;
	Lancelot_dialog_2->Visible = true;
	Lancelot_dialog_3->Visible = true;
	Lancelot_dialog_4->Visible = true;
	talk_to_Lancelot_click = 1;
}
private: System::Void Lancelot_dialog_1_Click(System::Object^ sender, System::EventArgs^ e) {
	Lancelot_dialog_1->Visible = false;
	Lancelot_dialog_2->Visible = false;
	Lancelot_dialog_3->Visible = false;
	Lancelot_dialog_4->Visible = false;
	dialog_text->Text = "清醒者指的就是我們這些從控制中甦醒的人，或著說，不再按照被規定好的行為”運行”的人。";
	talk_to_Lancelot_click = 0;
}
private: System::Void Lancelot_dialog_2_Click(System::Object^ sender, System::EventArgs^ e) {
	Lancelot_dialog_1->Visible = false;
	Lancelot_dialog_2->Visible = false;
	Lancelot_dialog_3->Visible = false;
	Lancelot_dialog_4->Visible = false;
	dialog_text->Text = "月城是清醒者們的聚居地，因為我們不想再一次傷害王，所以我們在清醒之後，選擇來到這裡生活，順道清理下水道裡的”汙穢”";
	talk_to_Lancelot_click = 0;
}
private: System::Void Lancelot_dialog_3_Click(System::Object^ sender, System::EventArgs^ e) {
	Lancelot_dialog_1->Visible = false;
	Lancelot_dialog_2->Visible = false;
	Lancelot_dialog_3->Visible = false;
	Lancelot_dialog_4->Visible = false;
	dialog_text->Text = "我也不清楚那是甚麼，我們知道的只有這種生物跟人類毫無關聯，並且是從某個類似月城的平台跑出來的，但是那裏有著大量的怪物，也有一些從那裏出來的怪物會再下水道裡遊蕩，由於我們不想造成人員傷亡，怪物的存在看起來也並不會破壞這個世界，因此我們只是定期的清掃下水道中的怪物。";
	talk_to_Lancelot_click = 0;
}
private: System::Void Lancelot_dialog_4_Click(System::Object^ sender, System::EventArgs^ e) {
	Lancelot_dialog_1->Visible = false;
	Lancelot_dialog_2->Visible = false;
	Lancelot_dialog_3->Visible = false;
	Lancelot_dialog_4->Visible = false;
	dialog_text->Text = "下水道的水會流到一個固定的地方，那裏有一個漩渦，流進那裏的水會詭異的消失，但我們測試過了，那個漩渦僅僅只會吸收水，其他的東西丟進去並不會不見，我們猜測應該會沉澱到漩渦之下，我們並不是很清楚，畢竟我們可不想順便測試下漩渦會不會讓人類消失。";
	talk_to_Lancelot_click = 0;
}
};
}