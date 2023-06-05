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
int lake_count = 0;
int sun_count = 29;

roll dice;
//character object
NPC Johann({ "www//pic//Johann.png" }, 65, 70, 50, 50, 40, 40, 40, 40, 40, 50, 9, 8, 4, 3);
NPC Gawain({ "www//pic//char_pixel//Gawain.png" }, 80, 70, 85, 80, 85, 65, 75, 65, 50, 80, 15, 13, 6, 3);
NPC Guinevere({ "www//pic//Guinevere.png" }, 25, 55, 60, 35, 90, 45, 45, 45, 80, 80, 6, 9, -1, 3);
NPC Bedivere({ "www//pic//Bedivere.png" }, 95, 95, 60, 95, 95, 40, 80, 40, 50, 50, 17, 8, 6, 3);
NPC Arthur({ "www//pic//Arthur.png" }, 75, 85, 55, 60, 75, 55, 75, 40, 40, 50, 13, 11, 4, 8);
Player player({ "www//pic//Arthur.png" }, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
Player occultist({ "www//pic//Arthur.png" }, 65, 80, 60, 55, 45, 45, 50, 45, 60, 40, 10, 9, 0, 60, 60, 60, 60, 50, 50, 80, 40, 30, 40, 40, 3);
Player archaeologist({ "www//pic//Arthur.png" }, 60, 55, 82, 45, 45, 65, 65, 65, 80, 60, 11, 13, 4, 60, 30, 80, 30, 30, 80, 50, 20, 60, 80, 20, 3);
Player reporter({ "www//pic//Arthur.png" }, 55, 80, 45, 65, 60, 45, 70, 45, 40, 80, 12, 9, 4, 70, 70, 50, 70, 70, 50, 40, 70, 20, 20, 50, 3);

 
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

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		bool backpack_open_or_close = 0;
		bool moveLeft, moveRight, moveUp ,moveDown;
	private: System::Windows::Forms::Button^ Sewer_Intersection_Library;
	private: System::Windows::Forms::Button^ Sewer_Intersection_Prison;
	private: System::Windows::Forms::Button^ Sewer_Intersection_Lake;
	private: System::Windows::Forms::Button^ Sewer_Lake_Intersection;
	public:

	public:

	public:

	public:

	public:
		int speed = 5;
		
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
				player_motion->Location = System::Drawing::Point(player_motion->Location.X, player_motion->Location.Y - 10);
				return true;
			}
			else if (keyData == Keys::Down && player_motion->Location.Y < 670)
			{
				// Move the picture box down
				player_motion->Location = System::Drawing::Point(player_motion->Location.X, player_motion->Location.Y + 10);
				return true;
			}
			else if (keyData == Keys::Left && player_motion->Location.X > 0)
			{
				// Move the picture box left
				player_motion->Location = System::Drawing::Point(player_motion->Location.X - 10, player_motion->Location.Y);
				return true;
			}
			else if (keyData == Keys::Right && player_motion->Location.X < 970)
			{
				// Move the picture box right
				player_motion->Location = System::Drawing::Point(player_motion->Location.X + 10, player_motion->Location.Y);
				return true;
			}

			return Form::ProcessCmdKey(msg, keyData);

		}
		/*void button_collsion(void) {
			if (strcmp(place, "plazza") == 0) {
				Plazza_To_Inn->Visible = player.collsion(Plazza_To_Inn->Location.X, Plazza_To_Inn->Location.Y);
			}
			else if (strcmp(place, "inn") == 0) {

			}
			else if (strcmp(place, "market") == 0) {

			}
			else if (strcmp(place, "restaurant") == 0) {

			}
			else if (strcmp(place, "prison") == 0) {

			}
			else if (strcmp(place, "palace") == 0) {

			}
			else if (strcmp(place, "library") == 0) {

			}
			else if (strcmp(place, "lake") == 0) {

			}
	}*/
	
	private: System::Windows::Forms::Label^ MEDICINE;
	private: System::Windows::Forms::Label^ BIOLOGY;
	private: System::Windows::Forms::Label^ PSYCOLOGY;
	private: System::Windows::Forms::Label^ ARCHAEOLOGY;
	private: System::Windows::Forms::Label^ OCCULT;
	private: System::Windows::Forms::Label^ HISTORY;
	private: System::Windows::Forms::Label^ DB;
	private: System::Windows::Forms::Label^ EVADE;
	private: System::Windows::Forms::Label^ BRAWL;
	private: System::Windows::Forms::Label^ LIBRARY;
	private: System::Windows::Forms::Label^ LISTEN;
	private: System::Windows::Forms::Label^ SPOT;
	private: System::Windows::Forms::Label^ MP;
	private: System::Windows::Forms::Label^ HP;
	private: System::Windows::Forms::Label^ LUK;
	private: System::Windows::Forms::Label^ EDU;
	private: System::Windows::Forms::Label^ SAN;
	private: System::Windows::Forms::Label^ POW;
	private: System::Windows::Forms::Label^ SIZ;
	private: System::Windows::Forms::Label^ APP;
	private: System::Windows::Forms::Label^ CON;
	private: System::Windows::Forms::Label^ INT;
	private: System::Windows::Forms::Label^ DEX;
	private: System::Windows::Forms::ListView^ backpack_items_listView;
	private: System::Windows::Forms::PictureBox^ menu;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ Ask_Wagain;
	private: System::Windows::Forms::Button^ Observe_Library;
	private: System::Windows::Forms::Button^ Order;
	private: System::Windows::Forms::Button^ diner;
	private: System::Windows::Forms::Button^ studio;
	private: System::Windows::Forms::Button^ Observe_Inn;
	private: System::Windows::Forms::Button^ search;
	private: System::Windows::Forms::Button^ Psychology_Lake1;
	private: System::Windows::Forms::Button^ Psychology_Lake2;
	private: System::Windows::Forms::PictureBox^ background;
	private: System::Windows::Forms::Button^ Go_To_Restaurant;
	private: System::Windows::Forms::Button^ Go_Out_Restaurant;
	private: System::Windows::Forms::ProgressBar^ Sun;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Observe_Signpost;
	private: System::Windows::Forms::Button^ item_button;
	private: System::Windows::Forms::PictureBox^ item_pic;
	private: System::Windows::Forms::Button^ chatbox_1;
	private: System::Windows::Forms::Button^ chatbox_2;
	private: System::Windows::Forms::Button^ Observe_Sundial;
	private: System::Windows::Forms::Button^ listen_stranger_plazza;
	private: System::Windows::Forms::PictureBox^ player_motion;
	private: System::Windows::Forms::Button^ start;
	private: System::Windows::Forms::Button^ manual;
	private: System::Windows::Forms::TextBox^ manual_text;
	private: System::Windows::Forms::Button^ back_to_home;
	private: System::Windows::Forms::Button^ archaeologist_button;
	private: System::Windows::Forms::Button^ reporter_button;
	private: System::Windows::Forms::Button^ occultist_button;
	private: System::Windows::Forms::Label^ chose_character_text;
	private: System::Windows::Forms::Button^ backpack;
	private: System::Windows::Forms::Panel^ backpack_panel;
	private: System::Windows::Forms::Panel^ status_panel;
	private: System::Windows::Forms::Label^ STR;
	private: System::Windows::Forms::Label^ character_name;
	private: System::Windows::Forms::Label^ player_power_text;
	private: System::Windows::Forms::TextBox^ dialog_text;
	private: System::Windows::Forms::TextBox^ introduction_textBox;
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
	private: System::Windows::Forms::Button^ Prison_To_Sewer;
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
			this->manual_text = (gcnew System::Windows::Forms::TextBox());
			this->back_to_home = (gcnew System::Windows::Forms::Button());
			this->archaeologist_button = (gcnew System::Windows::Forms::Button());
			this->reporter_button = (gcnew System::Windows::Forms::Button());
			this->occultist_button = (gcnew System::Windows::Forms::Button());
			this->chose_character_text = (gcnew System::Windows::Forms::Label());
			this->backpack = (gcnew System::Windows::Forms::Button());
			this->backpack_panel = (gcnew System::Windows::Forms::Panel());
			this->chatbox_2 = (gcnew System::Windows::Forms::Button());
			this->Observe_Sundial = (gcnew System::Windows::Forms::Button());
			this->chatbox_1 = (gcnew System::Windows::Forms::Button());
			this->item_button = (gcnew System::Windows::Forms::Button());
			this->Observe_Signpost = (gcnew System::Windows::Forms::Button());
			this->Psychology_Lake1 = (gcnew System::Windows::Forms::Button());
			this->san_check_button = (gcnew System::Windows::Forms::Button());
			this->continue_button = (gcnew System::Windows::Forms::Button());
			this->dialog_text = (gcnew System::Windows::Forms::TextBox());
			this->character_name = (gcnew System::Windows::Forms::Label());
			this->status_panel = (gcnew System::Windows::Forms::Panel());
			this->MEDICINE = (gcnew System::Windows::Forms::Label());
			this->BIOLOGY = (gcnew System::Windows::Forms::Label());
			this->PSYCOLOGY = (gcnew System::Windows::Forms::Label());
			this->ARCHAEOLOGY = (gcnew System::Windows::Forms::Label());
			this->OCCULT = (gcnew System::Windows::Forms::Label());
			this->HISTORY = (gcnew System::Windows::Forms::Label());
			this->DB = (gcnew System::Windows::Forms::Label());
			this->EVADE = (gcnew System::Windows::Forms::Label());
			this->BRAWL = (gcnew System::Windows::Forms::Label());
			this->LIBRARY = (gcnew System::Windows::Forms::Label());
			this->LISTEN = (gcnew System::Windows::Forms::Label());
			this->SPOT = (gcnew System::Windows::Forms::Label());
			this->MP = (gcnew System::Windows::Forms::Label());
			this->HP = (gcnew System::Windows::Forms::Label());
			this->LUK = (gcnew System::Windows::Forms::Label());
			this->EDU = (gcnew System::Windows::Forms::Label());
			this->SAN = (gcnew System::Windows::Forms::Label());
			this->SIZ = (gcnew System::Windows::Forms::Label());
			this->POW = (gcnew System::Windows::Forms::Label());
			this->APP = (gcnew System::Windows::Forms::Label());
			this->CON = (gcnew System::Windows::Forms::Label());
			this->INT = (gcnew System::Windows::Forms::Label());
			this->DEX = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Sun = (gcnew System::Windows::Forms::ProgressBar());
			this->player_power_text = (gcnew System::Windows::Forms::Label());
			this->STR = (gcnew System::Windows::Forms::Label());
			this->Inn_To_Market = (gcnew System::Windows::Forms::Button());
			this->Plazza_To_Inn = (gcnew System::Windows::Forms::Button());
			this->IntersectionLeft_To_Library = (gcnew System::Windows::Forms::Button());
			this->Market_To_Restaurant = (gcnew System::Windows::Forms::Button());
			this->introduction_textBox = (gcnew System::Windows::Forms::TextBox());
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
			this->menu = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Ask_Wagain = (gcnew System::Windows::Forms::Button());
			this->Observe_Library = (gcnew System::Windows::Forms::Button());
			this->Order = (gcnew System::Windows::Forms::Button());
			this->diner = (gcnew System::Windows::Forms::Button());
			this->studio = (gcnew System::Windows::Forms::Button());
			this->Observe_Inn = (gcnew System::Windows::Forms::Button());
			this->search = (gcnew System::Windows::Forms::Button());
			this->Psychology_Lake2 = (gcnew System::Windows::Forms::Button());
			this->background = (gcnew System::Windows::Forms::PictureBox());
			this->Go_To_Restaurant = (gcnew System::Windows::Forms::Button());
			this->Go_Out_Restaurant = (gcnew System::Windows::Forms::Button());
			this->item_pic = (gcnew System::Windows::Forms::PictureBox());
			this->listen_stranger_plazza = (gcnew System::Windows::Forms::Button());
			this->player_motion = (gcnew System::Windows::Forms::PictureBox());
			this->Plazza_To_Sewer = (gcnew System::Windows::Forms::Button());
			this->Inn_To_Sewer = (gcnew System::Windows::Forms::Button());
			this->Market_To_Sewer = (gcnew System::Windows::Forms::Button());
			this->Restaurant_To_Sewer = (gcnew System::Windows::Forms::Button());
			this->Library_To_Sewer = (gcnew System::Windows::Forms::Button());
			this->Prison_To_Sewer = (gcnew System::Windows::Forms::Button());
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
			this->backpack_panel->SuspendLayout();
			this->status_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player_motion))->BeginInit();
			this->SuspendLayout();
			// 
			// backpack_items_listView
			// 
			this->backpack_items_listView->GridLines = true;
			this->backpack_items_listView->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->backpack_items_listView->HideSelection = false;
			this->backpack_items_listView->Location = System::Drawing::Point(512, 600);
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
			this->start->Text = L"START";
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
			this->manual->Text = L"MANUAL";
			this->manual->UseVisualStyleBackColor = true;
			this->manual->Click += gcnew System::EventHandler(this, &Form1::manual_Click);
			// 
			// manual_text
			// 
			this->manual_text->Location = System::Drawing::Point(0, 180);
			this->manual_text->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->manual_text->Multiline = true;
			this->manual_text->Name = L"manual_text";
			this->manual_text->ReadOnly = true;
			this->manual_text->Size = System::Drawing::Size(1024, 412);
			this->manual_text->TabIndex = 2;
			this->manual_text->Text = L"我是說明書的文字。換行請打\\r\\n";
			this->manual_text->Visible = false;
			this->manual_text->Click += gcnew System::EventHandler(this, &Form1::manual_text_Click);
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
			// chatbox_2
			// 
			this->chatbox_2->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->chatbox_2->Location = System::Drawing::Point(4, 76);
			this->chatbox_2->Name = L"chatbox_2";
			this->chatbox_2->Size = System::Drawing::Size(300, 30);
			this->chatbox_2->TabIndex = 60;
			this->chatbox_2->Text = L"跟著他走";
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
			this->chatbox_1->Location = System::Drawing::Point(4, 40);
			this->chatbox_1->Name = L"chatbox_1";
			this->chatbox_1->Size = System::Drawing::Size(300, 30);
			this->chatbox_1->TabIndex = 59;
			this->chatbox_1->Text = L"下一站是哪裡";
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
			// character_name
			// 
			this->character_name->AutoSize = true;
			this->character_name->Font = (gcnew System::Drawing::Font(L"標楷體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->character_name->Location = System::Drawing::Point(4, 4);
			this->character_name->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->character_name->Name = L"character_name";
			this->character_name->Size = System::Drawing::Size(96, 12);
			this->character_name->TabIndex = 1;
			this->character_name->Text = L"選擇的角色職業";
			this->character_name->Visible = false;
			// 
			// status_panel
			// 
			this->status_panel->Controls->Add(this->MEDICINE);
			this->status_panel->Controls->Add(this->BIOLOGY);
			this->status_panel->Controls->Add(this->PSYCOLOGY);
			this->status_panel->Controls->Add(this->ARCHAEOLOGY);
			this->status_panel->Controls->Add(this->OCCULT);
			this->status_panel->Controls->Add(this->HISTORY);
			this->status_panel->Controls->Add(this->DB);
			this->status_panel->Controls->Add(this->EVADE);
			this->status_panel->Controls->Add(this->BRAWL);
			this->status_panel->Controls->Add(this->LIBRARY);
			this->status_panel->Controls->Add(this->LISTEN);
			this->status_panel->Controls->Add(this->SPOT);
			this->status_panel->Controls->Add(this->MP);
			this->status_panel->Controls->Add(this->HP);
			this->status_panel->Controls->Add(this->LUK);
			this->status_panel->Controls->Add(this->EDU);
			this->status_panel->Controls->Add(this->SAN);
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
			this->status_panel->Location = System::Drawing::Point(-1, 0);
			this->status_panel->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->status_panel->Name = L"status_panel";
			this->status_panel->Size = System::Drawing::Size(1024, 180);
			this->status_panel->TabIndex = 11;
			this->status_panel->Visible = false;
			this->status_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::status_panel_Paint);
			// 
			// MEDICINE
			// 
			this->MEDICINE->AutoSize = true;
			this->MEDICINE->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MEDICINE->Location = System::Drawing::Point(594, 117);
			this->MEDICINE->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->MEDICINE->Name = L"MEDICINE";
			this->MEDICINE->Size = System::Drawing::Size(67, 15);
			this->MEDICINE->TabIndex = 28;
			this->MEDICINE->Text = L"MEDICINE";
			this->MEDICINE->Visible = false;
			// 
			// BIOLOGY
			// 
			this->BIOLOGY->AutoSize = true;
			this->BIOLOGY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BIOLOGY->Location = System::Drawing::Point(384, 114);
			this->BIOLOGY->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->BIOLOGY->Name = L"BIOLOGY";
			this->BIOLOGY->Size = System::Drawing::Size(63, 15);
			this->BIOLOGY->TabIndex = 27;
			this->BIOLOGY->Text = L"BIOLOGY";
			this->BIOLOGY->Visible = false;
			// 
			// PSYCOLOGY
			// 
			this->PSYCOLOGY->AutoSize = true;
			this->PSYCOLOGY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PSYCOLOGY->Location = System::Drawing::Point(285, 114);
			this->PSYCOLOGY->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->PSYCOLOGY->Name = L"PSYCOLOGY";
			this->PSYCOLOGY->Size = System::Drawing::Size(83, 15);
			this->PSYCOLOGY->TabIndex = 26;
			this->PSYCOLOGY->Text = L"PSYCOLOGY";
			this->PSYCOLOGY->Visible = false;
			// 
			// ARCHAEOLOGY
			// 
			this->ARCHAEOLOGY->AutoSize = true;
			this->ARCHAEOLOGY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ARCHAEOLOGY->Location = System::Drawing::Point(483, 117);
			this->ARCHAEOLOGY->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->ARCHAEOLOGY->Name = L"ARCHAEOLOGY";
			this->ARCHAEOLOGY->Size = System::Drawing::Size(100, 15);
			this->ARCHAEOLOGY->TabIndex = 25;
			this->ARCHAEOLOGY->Text = L"ARCHAEOLOGY";
			this->ARCHAEOLOGY->Visible = false;
			// 
			// OCCULT
			// 
			this->OCCULT->AutoSize = true;
			this->OCCULT->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OCCULT->Location = System::Drawing::Point(183, 114);
			this->OCCULT->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->OCCULT->Name = L"OCCULT";
			this->OCCULT->Size = System::Drawing::Size(57, 15);
			this->OCCULT->TabIndex = 24;
			this->OCCULT->Text = L"OCCULT";
			this->OCCULT->Visible = false;
			// 
			// HISTORY
			// 
			this->HISTORY->AutoSize = true;
			this->HISTORY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HISTORY->Location = System::Drawing::Point(84, 114);
			this->HISTORY->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->HISTORY->Name = L"HISTORY";
			this->HISTORY->Size = System::Drawing::Size(62, 15);
			this->HISTORY->TabIndex = 23;
			this->HISTORY->Text = L"HISTORY";
			this->HISTORY->Visible = false;
			// 
			// DB
			// 
			this->DB->AutoSize = true;
			this->DB->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DB->Location = System::Drawing::Point(183, 54);
			this->DB->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->DB->Name = L"DB";
			this->DB->Size = System::Drawing::Size(24, 15);
			this->DB->TabIndex = 22;
			this->DB->Text = L"DB";
			this->DB->Visible = false;
			// 
			// EVADE
			// 
			this->EVADE->AutoSize = true;
			this->EVADE->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EVADE->Location = System::Drawing::Point(483, 84);
			this->EVADE->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->EVADE->Name = L"EVADE";
			this->EVADE->Size = System::Drawing::Size(44, 15);
			this->EVADE->TabIndex = 21;
			this->EVADE->Text = L"EVADE";
			this->EVADE->Visible = false;
			// 
			// BRAWL
			// 
			this->BRAWL->AutoSize = true;
			this->BRAWL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BRAWL->Location = System::Drawing::Point(384, 84);
			this->BRAWL->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->BRAWL->Name = L"BRAWL";
			this->BRAWL->Size = System::Drawing::Size(48, 15);
			this->BRAWL->TabIndex = 20;
			this->BRAWL->Text = L"BRAWL";
			this->BRAWL->Visible = false;
			// 
			// LIBRARY
			// 
			this->LIBRARY->AutoSize = true;
			this->LIBRARY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LIBRARY->Location = System::Drawing::Point(285, 84);
			this->LIBRARY->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->LIBRARY->Name = L"LIBRARY";
			this->LIBRARY->Size = System::Drawing::Size(58, 15);
			this->LIBRARY->TabIndex = 19;
			this->LIBRARY->Text = L"LIBRARY";
			this->LIBRARY->Visible = false;
			// 
			// LISTEN
			// 
			this->LISTEN->AutoSize = true;
			this->LISTEN->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LISTEN->Location = System::Drawing::Point(183, 84);
			this->LISTEN->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->LISTEN->Name = L"LISTEN";
			this->LISTEN->Size = System::Drawing::Size(50, 15);
			this->LISTEN->TabIndex = 18;
			this->LISTEN->Text = L"LISTEN";
			this->LISTEN->Visible = false;
			// 
			// SPOT
			// 
			this->SPOT->AutoSize = true;
			this->SPOT->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SPOT->Location = System::Drawing::Point(84, 84);
			this->SPOT->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->SPOT->Name = L"SPOT";
			this->SPOT->Size = System::Drawing::Size(40, 15);
			this->SPOT->TabIndex = 17;
			this->SPOT->Text = L"SPOT";
			this->SPOT->Visible = false;
			// 
			// MP
			// 
			this->MP->AutoSize = true;
			this->MP->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MP->Location = System::Drawing::Point(133, 54);
			this->MP->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->MP->Name = L"MP";
			this->MP->Size = System::Drawing::Size(25, 15);
			this->MP->TabIndex = 16;
			this->MP->Text = L"MP";
			this->MP->Visible = false;
			// 
			// HP
			// 
			this->HP->AutoSize = true;
			this->HP->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HP->Location = System::Drawing::Point(84, 54);
			this->HP->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->HP->Name = L"HP";
			this->HP->Size = System::Drawing::Size(23, 15);
			this->HP->TabIndex = 15;
			this->HP->Text = L"HP";
			this->HP->Visible = false;
			// 
			// LUK
			// 
			this->LUK->AutoSize = true;
			this->LUK->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LUK->Location = System::Drawing::Point(534, 24);
			this->LUK->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->LUK->Name = L"LUK";
			this->LUK->Size = System::Drawing::Size(31, 15);
			this->LUK->TabIndex = 14;
			this->LUK->Text = L"LUK";
			this->LUK->Visible = false;
			// 
			// EDU
			// 
			this->EDU->AutoSize = true;
			this->EDU->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EDU->Location = System::Drawing::Point(483, 24);
			this->EDU->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->EDU->Name = L"EDU";
			this->EDU->Size = System::Drawing::Size(31, 15);
			this->EDU->TabIndex = 13;
			this->EDU->Text = L"EDU";
			this->EDU->Visible = false;
			// 
			// SAN
			// 
			this->SAN->AutoSize = true;
			this->SAN->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SAN->Location = System::Drawing::Point(433, 24);
			this->SAN->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->SAN->Name = L"SAN";
			this->SAN->Size = System::Drawing::Size(32, 15);
			this->SAN->TabIndex = 12;
			this->SAN->Text = L"SAN";
			this->SAN->Visible = false;
			// 
			// SIZ
			// 
			this->SIZ->AutoSize = true;
			this->SIZ->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SIZ->Location = System::Drawing::Point(384, 24);
			this->SIZ->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->SIZ->Name = L"SIZ";
			this->SIZ->Size = System::Drawing::Size(26, 15);
			this->SIZ->TabIndex = 11;
			this->SIZ->Text = L"SIZ";
			this->SIZ->Visible = false;
			// 
			// POW
			// 
			this->POW->AutoSize = true;
			this->POW->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->POW->Location = System::Drawing::Point(333, 24);
			this->POW->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->POW->Name = L"POW";
			this->POW->Size = System::Drawing::Size(35, 15);
			this->POW->TabIndex = 10;
			this->POW->Text = L"POW";
			this->POW->Visible = false;
			// 
			// APP
			// 
			this->APP->AutoSize = true;
			this->APP->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->APP->Location = System::Drawing::Point(283, 24);
			this->APP->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->APP->Name = L"APP";
			this->APP->Size = System::Drawing::Size(29, 15);
			this->APP->TabIndex = 9;
			this->APP->Text = L"APP";
			this->APP->Visible = false;
			// 
			// CON
			// 
			this->CON->AutoSize = true;
			this->CON->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CON->Location = System::Drawing::Point(234, 24);
			this->CON->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->CON->Name = L"CON";
			this->CON->Size = System::Drawing::Size(35, 15);
			this->CON->TabIndex = 8;
			this->CON->Text = L"CON";
			this->CON->Visible = false;
			// 
			// INT
			// 
			this->INT->AutoSize = true;
			this->INT->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->INT->Location = System::Drawing::Point(183, 24);
			this->INT->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->INT->Name = L"INT";
			this->INT->Size = System::Drawing::Size(28, 15);
			this->INT->TabIndex = 7;
			this->INT->Text = L"INT";
			this->INT->Visible = false;
			// 
			// DEX
			// 
			this->DEX->AutoSize = true;
			this->DEX->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DEX->Location = System::Drawing::Point(133, 24);
			this->DEX->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->DEX->Name = L"DEX";
			this->DEX->Size = System::Drawing::Size(31, 15);
			this->DEX->TabIndex = 6;
			this->DEX->Text = L"DEX";
			this->DEX->Visible = false;
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
			// Sun
			// 
			this->Sun->Location = System::Drawing::Point(815, 10);
			this->Sun->Maximum = 5;
			this->Sun->Name = L"Sun";
			this->Sun->Size = System::Drawing::Size(150, 30);
			this->Sun->TabIndex = 3;
			this->Sun->Visible = false;
			this->Sun->Click += gcnew System::EventHandler(this, &Form1::Sun_Click);
			// 
			// player_power_text
			// 
			this->player_power_text->AutoSize = true;
			this->player_power_text->Font = (gcnew System::Drawing::Font(L"標楷體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->player_power_text->Location = System::Drawing::Point(4, 24);
			this->player_power_text->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->player_power_text->Name = L"player_power_text";
			this->player_power_text->Size = System::Drawing::Size(77, 12);
			this->player_power_text->TabIndex = 2;
			this->player_power_text->Text = L"角色能力值:";
			this->player_power_text->Visible = false;
			// 
			// STR
			// 
			this->STR->AutoSize = true;
			this->STR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->STR->Location = System::Drawing::Point(84, 24);
			this->STR->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->STR->Name = L"STR";
			this->STR->Size = System::Drawing::Size(31, 15);
			this->STR->TabIndex = 0;
			this->STR->Text = L"STR";
			this->STR->Visible = false;
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
			this->Inn_To_Market->Text = L"->";
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
			this->Plazza_To_Inn->Text = L"->";
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
			this->IntersectionLeft_To_Library->Text = L"->";
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
			this->Market_To_Restaurant->Text = L"->";
			this->Market_To_Restaurant->UseVisualStyleBackColor = true;
			this->Market_To_Restaurant->Visible = false;
			this->Market_To_Restaurant->Click += gcnew System::EventHandler(this, &Form1::Market_To_Restaurant_Click);
			// 
			// introduction_textBox
			// 
			this->introduction_textBox->BackColor = System::Drawing::SystemColors::Info;
			this->introduction_textBox->Enabled = false;
			this->introduction_textBox->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->introduction_textBox->Location = System::Drawing::Point(-1, 180);
			this->introduction_textBox->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->introduction_textBox->Multiline = true;
			this->introduction_textBox->Name = L"introduction_textBox";
			this->introduction_textBox->Size = System::Drawing::Size(1024, 540);
			this->introduction_textBox->TabIndex = 12;
			this->introduction_textBox->Visible = false;
			this->introduction_textBox->TextChanged += gcnew System::EventHandler(this, &Form1::introduction_textBox_TextChanged);
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
			this->Plazza_To_Prison->Text = L"<-";
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
			this->Inn_To_Plazza->Location = System::Drawing::Point(496, 667);
			this->Inn_To_Plazza->Margin = System::Windows::Forms::Padding(2);
			this->Inn_To_Plazza->Name = L"Inn_To_Plazza";
			this->Inn_To_Plazza->Size = System::Drawing::Size(80, 32);
			this->Inn_To_Plazza->TabIndex = 21;
			this->Inn_To_Plazza->Text = L"↓";
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
			this->Market_To_Inn->Text = L"<-";
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
			this->Restaurant_To_Market->Text = L"<-";
			this->Restaurant_To_Market->UseVisualStyleBackColor = true;
			this->Restaurant_To_Market->Visible = false;
			this->Restaurant_To_Market->Click += gcnew System::EventHandler(this, &Form1::Restaurant_To_Market_Click);
			// 
			// Restaurant_To_Prison
			// 
			this->Restaurant_To_Prison->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Restaurant_To_Prison->Location = System::Drawing::Point(496, 667);
			this->Restaurant_To_Prison->Margin = System::Windows::Forms::Padding(2);
			this->Restaurant_To_Prison->Name = L"Restaurant_To_Prison";
			this->Restaurant_To_Prison->Size = System::Drawing::Size(80, 32);
			this->Restaurant_To_Prison->TabIndex = 26;
			this->Restaurant_To_Prison->Text = L"↓";
			this->Restaurant_To_Prison->UseVisualStyleBackColor = true;
			this->Restaurant_To_Prison->Visible = false;
			this->Restaurant_To_Prison->Click += gcnew System::EventHandler(this, &Form1::Restaurant_To_Prison_Click);
			// 
			// Prison_To_Restaurant
			// 
			this->Prison_To_Restaurant->Location = System::Drawing::Point(16, 512);
			this->Prison_To_Restaurant->Margin = System::Windows::Forms::Padding(2);
			this->Prison_To_Restaurant->Name = L"Prison_To_Restaurant";
			this->Prison_To_Restaurant->Size = System::Drawing::Size(64, 32);
			this->Prison_To_Restaurant->TabIndex = 27;
			this->Prison_To_Restaurant->Text = L"<-";
			this->Prison_To_Restaurant->UseVisualStyleBackColor = true;
			this->Prison_To_Restaurant->Visible = false;
			this->Prison_To_Restaurant->Click += gcnew System::EventHandler(this, &Form1::Prison_To_Restaurant_Click);
			// 
			// Prison_To_Plazza
			// 
			this->Prison_To_Plazza->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Prison_To_Plazza->Location = System::Drawing::Point(496, 667);
			this->Prison_To_Plazza->Margin = System::Windows::Forms::Padding(2);
			this->Prison_To_Plazza->Name = L"Prison_To_Plazza";
			this->Prison_To_Plazza->Size = System::Drawing::Size(80, 32);
			this->Prison_To_Plazza->TabIndex = 28;
			this->Prison_To_Plazza->Text = L"↓";
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
			this->Inn_To_IntersectionRight->Text = L"<-";
			this->Inn_To_IntersectionRight->UseVisualStyleBackColor = true;
			this->Inn_To_IntersectionRight->Visible = false;
			this->Inn_To_IntersectionRight->Click += gcnew System::EventHandler(this, &Form1::Inn_To_IntersectionRight_Click);
			// 
			// IntersectionRight_To_Library
			// 
			this->IntersectionRight_To_Library->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->IntersectionRight_To_Library->Location = System::Drawing::Point(496, 200);
			this->IntersectionRight_To_Library->Margin = System::Windows::Forms::Padding(2);
			this->IntersectionRight_To_Library->Name = L"IntersectionRight_To_Library";
			this->IntersectionRight_To_Library->Size = System::Drawing::Size(64, 32);
			this->IntersectionRight_To_Library->TabIndex = 30;
			this->IntersectionRight_To_Library->Text = L"↑";
			this->IntersectionRight_To_Library->UseVisualStyleBackColor = true;
			this->IntersectionRight_To_Library->Visible = false;
			this->IntersectionRight_To_Library->Click += gcnew System::EventHandler(this, &Form1::IntersectionRight_To_Library_Click);
			// 
			// IntersectionRight_To_Inn
			// 
			this->IntersectionRight_To_Inn->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->IntersectionRight_To_Inn->Location = System::Drawing::Point(496, 667);
			this->IntersectionRight_To_Inn->Margin = System::Windows::Forms::Padding(2);
			this->IntersectionRight_To_Inn->Name = L"IntersectionRight_To_Inn";
			this->IntersectionRight_To_Inn->Size = System::Drawing::Size(80, 32);
			this->IntersectionRight_To_Inn->TabIndex = 31;
			this->IntersectionRight_To_Inn->Text = L"↓";
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
			this->IntersectionRight_To_Palace->Text = L"->";
			this->IntersectionRight_To_Palace->UseVisualStyleBackColor = true;
			this->IntersectionRight_To_Palace->Visible = false;
			this->IntersectionRight_To_Palace->Click += gcnew System::EventHandler(this, &Form1::IntersectionRight_To_Palace_Click);
			// 
			// Palace_To_IntersectionRight
			// 
			this->Palace_To_IntersectionRight->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Palace_To_IntersectionRight->Location = System::Drawing::Point(562, 220);
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
			this->Library_To_IntersectionRight->Text = L"->";
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
			this->Prison_To_IntersectionLeft->Text = L"->";
			this->Prison_To_IntersectionLeft->UseVisualStyleBackColor = true;
			this->Prison_To_IntersectionLeft->Visible = false;
			this->Prison_To_IntersectionLeft->Click += gcnew System::EventHandler(this, &Form1::Prison_To_IntersectionLeft_Click);
			// 
			// IntersectionLeft_To_Prison
			// 
			this->IntersectionLeft_To_Prison->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->IntersectionLeft_To_Prison->Location = System::Drawing::Point(496, 667);
			this->IntersectionLeft_To_Prison->Margin = System::Windows::Forms::Padding(2);
			this->IntersectionLeft_To_Prison->Name = L"IntersectionLeft_To_Prison";
			this->IntersectionLeft_To_Prison->Size = System::Drawing::Size(64, 32);
			this->IntersectionLeft_To_Prison->TabIndex = 36;
			this->IntersectionLeft_To_Prison->Text = L"↓";
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
			this->Library_To_IntersectionLeft->Text = L"<-";
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
			this->IntersectionLeft_To_Lake->Text = L"<-";
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
			// Observe_Library
			// 
			this->Observe_Library->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Observe_Library->Location = System::Drawing::Point(396, 404);
			this->Observe_Library->Name = L"Observe_Library";
			this->Observe_Library->Size = System::Drawing::Size(96, 64);
			this->Observe_Library->TabIndex = 47;
			this->Observe_Library->Text = L"觀察藏書閣";
			this->Observe_Library->UseVisualStyleBackColor = true;
			this->Observe_Library->Visible = false;
			this->Observe_Library->Click += gcnew System::EventHandler(this, &Form1::Observe_Library_Click);
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
			// search
			// 
			this->search->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->search->Location = System::Drawing::Point(396, 443);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(96, 64);
			this->search->TabIndex = 53;
			this->search->Text = L"尋找資料";
			this->search->UseVisualStyleBackColor = true;
			this->search->Visible = false;
			this->search->Click += gcnew System::EventHandler(this, &Form1::search_Click);
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
			this->player_motion->Location = System::Drawing::Point(408, 307);
			this->player_motion->Name = L"player_motion";
			this->player_motion->Size = System::Drawing::Size(54, 50);
			this->player_motion->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->player_motion->TabIndex = 60;
			this->player_motion->TabStop = false;
			this->player_motion->Visible = false;
			// 
			// Plazza_To_Sewer
			// 
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
			this->Library_To_Sewer->Location = System::Drawing::Point(34, 206);
			this->Library_To_Sewer->Name = L"Library_To_Sewer";
			this->Library_To_Sewer->Size = System::Drawing::Size(96, 64);
			this->Library_To_Sewer->TabIndex = 65;
			this->Library_To_Sewer->Text = L"進下水道";
			this->Library_To_Sewer->UseVisualStyleBackColor = true;
			this->Library_To_Sewer->Visible = false;
			this->Library_To_Sewer->Click += gcnew System::EventHandler(this, &Form1::Library_To_Sewer_Click);
			// 
			// Prison_To_Sewer
			// 
			this->Prison_To_Sewer->Location = System::Drawing::Point(34, 206);
			this->Prison_To_Sewer->Name = L"Prison_To_Sewer";
			this->Prison_To_Sewer->Size = System::Drawing::Size(96, 64);
			this->Prison_To_Sewer->TabIndex = 66;
			this->Prison_To_Sewer->Text = L"進下水道";
			this->Prison_To_Sewer->UseVisualStyleBackColor = true;
			this->Prison_To_Sewer->Visible = false;
			this->Prison_To_Sewer->Click += gcnew System::EventHandler(this, &Form1::Prison_To_Sewer_Click);
			// 
			// Lake_To_Sewer
			// 
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
			this->Sewer_Prison_Plazza->Location = System::Drawing::Point(496, 667);
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
			this->Sewer_Outlet_Inn->Location = System::Drawing::Point(496, 200);
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
			this->Sewer_Inn_Library->Location = System::Drawing::Point(496, 200);
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
			this->Sewer_Intersection_Prison->Location = System::Drawing::Point(496, 667);
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
			this->Sewer_Lake_Intersection->Location = System::Drawing::Point(496, 667);
			this->Sewer_Lake_Intersection->Name = L"Sewer_Lake_Intersection";
			this->Sewer_Lake_Intersection->Size = System::Drawing::Size(64, 32);
			this->Sewer_Lake_Intersection->TabIndex = 92;
			this->Sewer_Lake_Intersection->Text = L"↓";
			this->Sewer_Lake_Intersection->UseVisualStyleBackColor = true;
			this->Sewer_Lake_Intersection->Visible = false;
			this->Sewer_Lake_Intersection->Click += gcnew System::EventHandler(this, &Form1::Sewer_Lake_Intersection_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(888, 530);
			this->Controls->Add(this->Sewer_Lake_Intersection);
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
			this->Controls->Add(this->Prison_To_Sewer);
			this->Controls->Add(this->Library_To_Sewer);
			this->Controls->Add(this->Restaurant_To_Sewer);
			this->Controls->Add(this->Market_To_Sewer);
			this->Controls->Add(this->Inn_To_Sewer);
			this->Controls->Add(this->Plazza_To_Sewer);
			this->Controls->Add(this->player_motion);
			this->Controls->Add(this->backpack_items_listView);
			this->Controls->Add(this->item_pic);
			this->Controls->Add(this->listen_stranger_plazza);
			this->Controls->Add(this->Go_Out_Restaurant);
			this->Controls->Add(this->Go_To_Restaurant);
			this->Controls->Add(this->IntersectionRight_To_Palace);
			this->Controls->Add(this->manual_text);
			this->Controls->Add(this->Plazza_To_Inn);
			this->Controls->Add(this->IntersectionLeft_To_Library);
			this->Controls->Add(this->Library_To_IntersectionRight);
			this->Controls->Add(this->Inn_To_Market);
			this->Controls->Add(this->Market_To_Restaurant);
			this->Controls->Add(this->Prison_To_IntersectionLeft);
			this->Controls->Add(this->Psychology_Lake2);
			this->Controls->Add(this->search);
			this->Controls->Add(this->Observe_Inn);
			this->Controls->Add(this->studio);
			this->Controls->Add(this->diner);
			this->Controls->Add(this->Order);
			this->Controls->Add(this->Observe_Library);
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
			this->status_panel->ResumeLayout(false);
			this->status_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->item_pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->player_motion))->EndInit();
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
	}
	void dirction_button_display(void) {
		//display the button when the player get close enough
		//黃品瑜補完: L"2023"改場景的名稱， switch case on 場景名稱，先用絕對位置偵測碰撞
		
	}
	void check_end_game(void) {
		
		//bad End
		if (sun_count==0) {
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
			menu->Image = gcnew Bitmap(gcnew System::String(lead_in.get_path()));
		}
		//good End
		else {
			//menu->Image = gcnew Bitmap(gcnew System::String(back_ground.get_path()));
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
		//黃品瑜補完 數值標籤已經建立好
		////backpack_panel->Visible = true;
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
		player = archaeologist;
		strcpy(place, "plazza");
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
		dialog_text->Text = "經歷了這般的未知變化讓你的心中產生了些許恐懼，請做一個san check";
		introduction_textBox->Text = "你們乘上了前往威爾士的車。\r\n伴隨著風景閃過，你們經過連綿的山丘，最終車子停在了一處以被開挖的丘陵地。\r\n「到了。」司機說，「你們可以去遺跡探索了，那邊就是這次遺跡出土的地方了。」\r\n你們進入後看到了入口右側有著一具骷髏，你們隱隱看到骷髏空洞的眼眶閃出了一縷白光，你感到腦子一陣暈眩，頭愈發的沉重，閉上了眼睛。你感覺腦袋一片混沌，彷彿睡了太久大夢初醒一般，你再次睜開眼睛後，你發現與你一起來的團員們也躺在你身邊露出了迷茫的神情。\r\n你們身上穿的衣服不再是前來時的衣服，而是風格古老的粗布衣，你摸了摸兜，你發現你身上的物品都不見了，剩下的是一些你只在博物館見過的古董品。";
		san_check_button->Visible = true;
		background->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Plazza.get_path()));
		Sun->Visible = true;
		Sun->Value = sun_count % 6;
		player = occultist;
		strcpy(place, "plazza");
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
		player = reporter;
		strcpy(place, "plazza");
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
		//move to scene one
		introduction_textBox->Visible = false;
		san_check_button->Visible = false;
		continue_button->Visible = true;
		dialog_text->Text = "這個方型廣場散充斥著明亮的陽光，讓人感到溫暖舒適。\r\n在廣場的中央，矗立著一個高大的日晷和噴泉，他們周圍種植著各種花卉和綠植，為廣場增添了生氣和色彩。\r\n廣場上擺放著一排排長椅，可以讓人小息片刻。\r\n廣場的邊緣插著一根木製的路標，兩個箭頭分別指著廣場唯二的兩條通路。";
		//adjust backpack size
	}
	private: System::Void continue_button_Click(System::Object^ sender, System::EventArgs^ e) {
		//continue button 
		if (continue_button_count == 0 && lake_count == 0) {
			dialog_text->Text = "就在你還在疑惑時，突然間聽到了一聲「你們就是這次的旅客吧，跟我來」。\r\n你聽出這似乎是古英語，但你卻能夠完全理解他的意思，你感到十分驚訝，連續不斷的奇異發生反而讓你有種見怪不怪的感覺。\r\n你仔細的觀察四周建築和環境(被動歷史學判定)";
			//被動歷史學判定(聯合)
			continue_button_count = continue_button_count + 1;
		}
		else if (continue_button_count == 1 && lake_count == 0) {
			//目前只有成功
			dialog_text->Text = "你發現這些建築是英國五世紀，也就是亞瑟王時期的建築風格。";
			continue_button_count = continue_button_count + 1;
		}
		else if (continue_button_count == 2 && lake_count == 0) {
			dialog_text->Text = "瓦格恩:\r\n歡迎來到永晝城，我叫瓦格恩，是你們的導遊。\r\n這裡是白晝廣場，是城市中的休閒區域，中心的日晷是由城鎮的工匠們用最精妙的工藝花費數個月所完成的工藝品，也是城陣中唯一的日晷。\r\n如果覺得身心疲倦的話，我很推薦你來這裡坐在長椅上欣賞日出日落。";
			continue_button_count = continue_button_count + 1;
		}
		else if(continue_button_count == 3 && lake_count == 0) {
			continue_button->Visible = false;
			//display object in scene
			signpost->Visible = true;
			sundial->Visible = true;
			Plazza_To_Inn->Visible = true;
			Plazza_To_Prison->Visible = true;
			Ask_Wagain->Visible = true;
			listen_stranger_plazza->Visible = true;
			player_motion->Visible = true;
			Plazza_To_Sewer->Visible = true;
		}

		if (lake_count == 1) {
			dialog_text->Text = "瓦格恩:這裡是德茲瑪麗湖，擁有城鎮最漂亮的自然風景，如果心情鬱悶的話可以來這裡散散心，但這裡的水況不太穩定，所以請不要下水嬉戲喔。";
			continue_button->Visible = false;
			continue_button_count = continue_button_count + 1;
			Psychology_Lake2->Visible = true;
			Lake_To_IntersectionLeft->Visible = true;
			Lake_To_Sewer->Visible = true;
			background->Image = gcnew Bitmap(gcnew System::String(Lake_Mary.get_path()));
		}
	}
	private: System::Void signpost_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "路標上往左的箭頭上寫著德茲瑪莉湖、餐廳，而往右的箭頭上寫著旅店。";
		Observe_Signpost->Visible = true;
		chatbox_1->Visible = false;
		chatbox_2->Visible = false;
		Observe_Sundial->Visible = false;
		listen_stranger_plazza->Visible = false;
	}
	private: System::Void sundial_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這是個半徑約有三到四公尺的日晷，是用石料配合著華麗的工藝雕刻而成，看起來非常的壯觀，有種巴洛克式的美，現在日晷指針的陰影指在”時間”字上。";
		Observe_Signpost->Visible = false;
		chatbox_1->Visible = false;
		chatbox_2->Visible = false;
		item_button->Visible = false;
		Observe_Sundial->Visible = true;
		listen_stranger_plazza->Visible = false;

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
		item_button->Visible = false;
		Observe_Sundial->Visible = false;
		listen_stranger_plazza->Visible = false;
		Plazza_To_Sewer->Visible = false;
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
		Plazza_To_Inn->Visible = false;
		Plazza_To_Prison->Visible = false;
		Ask_Wagain->Visible = false;
		Observe_Signpost->Visible = false;
		chatbox_1->Visible = false;
		chatbox_2->Visible = false;
		item_button->Visible = false;
		Observe_Sundial->Visible = false;
		listen_stranger_plazza->Visible = false;
		Plazza_To_Sewer->Visible = false;
		// display object in scene
		Prison_To_Restaurant->Visible = true;
		Prison_To_Plazza->Visible = true;
		Prison_To_IntersectionLeft->Visible = true;
		Prison_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Prison_Outside.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
		
	}
	private: System::Void Go_In_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你進入旅店後，他的內部就如同他的外部那般樸實無華，只有一個櫃台，和左右兩間大床房從前方傳來了有氣無力的聲音”住宿一天20銀幣，不提供食物，一天以宏光、烈光時區分，住七天優惠只要一金幣。”你往前看去，那是一個頭髮斑白的老頭，雙手撐著臉，一副要死不活的樣子。";
		strcpy(place, "inn_in");
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
		Go_Out_Room->Visible = false;
		// display object in scene
		Go_Out_Inn->Visible = true;
		Go_In_Room->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Inn_Lobby.get_path()));
	}
	private: System::Void Inn_To_Plazza_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "plazza");
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
		Plazza_To_Prison->Visible = true;
		Ask_Wagain->Visible = true;
		Plazza_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Plazza.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void Inn_To_Market_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "市場的街道狹窄而擁擠，滿是雜物，很容易讓人摔倒。市場里擠滿了商販和攤販，他們用各種聲音、手勢和展示方式向你推銷自己的產品。你可以聽到他們高聲地叫賣，介紹自己的貨品，有些商販用樂器演奏著悠揚的音樂，吸引著顧客。";
		strcpy(place, "market");
		// hide object in scene
		Go_In_Inn->Visible = false;
		Inn_To_Plazza->Visible = false;
		Inn_To_Market->Visible = false;
		Inn_To_IntersectionRight->Visible = false;
		Observe_Inn->Visible = false;
		Inn_To_Sewer->Visible = false;
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
		Prison_To_Sewer->Visible = true;
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
		Prison_To_Sewer->Visible = false;
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
		// hide object in scene
		Prison_To_Restaurant->Visible = false;
		Prison_To_Plazza->Visible = false;
		Prison_To_IntersectionLeft->Visible = false;
		Prison_To_Sewer->Visible = false;
		// diaplay object in scene
		signpost->Visible = true;
		sundial->Visible = true;
		Plazza_To_Inn->Visible = true;
		Plazza_To_Prison->Visible = true;
		Ask_Wagain->Visible = true;
		Plazza_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Plazza.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void Inn_To_IntersectionRight_Click(System::Object^ sender, System::EventArgs^ e) {
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
		dialog_text->Text = "這是一棟非常豪華和宏偉的建築，你被它那令人嘆為觀止的氣勢所震撼，以高大的石柱和華麗的拱門，來支撐整個建築，建築的主體由優雅的柱子和華麗的拱門支撐，高大的尖頂耸立著，猶如一個巨大的王冠，牆面上有著浮雕、雕塑和彩繪，繪製著神話、故事和歷史事件，讓建築更顯神聖和莊嚴。在陽光的照耀下，這些彩繪和浮雕散發出燦爛的光芒，讓整個建築閃耀著耀眼的光彩。";
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
		Go_In_Palace->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Palace_Outside.get_path()));
	}
	private: System::Void Palace_To_IntersectionRight_Click(System::Object^ sender, System::EventArgs^ e) {
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
		strcpy(place, "library");
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
		dialog_text->Text = "路口左待補";
		// hide object in scene
		Prison_To_Restaurant->Visible = false;
		Prison_To_Plazza->Visible = false;
		Prison_To_IntersectionLeft->Visible = false;
		Prison_To_Sewer->Visible = false;
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
		Prison_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Prison_Outside.get_path()));
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
		lake_count = 1;
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
		lake_count = 0;
		// hide object in scene
		Lake_To_IntersectionLeft->Visible = false;
		continue_button->Visible = false;
		Psychology_Lake2->Visible = false;
		Psychology_Lake1->Visible = false;
		Lake_To_Sewer->Visible = false;
		// diaplay object in scene
		IntersectionLeft_To_Library->Visible = true;
		IntersectionLeft_To_Prison->Visible = true;
		IntersectionLeft_To_Lake->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Lake_Mary.get_path()));
		sun_count -= 1;
		Sun->Value = sun_count % 6;
	}
	private: System::Void Go_In_Palace_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "palace");
		dialog_text->Text = "待補";
		// hide object in scene
		Palace_To_IntersectionRight->Visible = false;
		Go_In_Palace->Visible = false;
		background->Image = gcnew Bitmap(gcnew System::String(Palace_Inside.get_path()));
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
		Observe_Library->Visible = true;
		search->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Library_Inside.get_path()));
	}
	private: System::Void Go_Out_Library_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這是一棟非常豪華和宏偉的建築，你被它那令人嘆為觀止的氣勢所震撼，以高大的石柱和華麗的拱門，來支撐整個建築，建築的主體由優雅的柱子和華麗的拱門支撐，高大的尖頂耸立著，猶如一個巨大的王冠，牆面上有著浮雕、雕塑和彩繪，繪製著神話、故事和歷史事件，讓建築更顯神聖和莊嚴。在陽光的照耀下，這些彩繪和浮雕散發出燦爛的光芒，讓整個建築閃耀著耀眼的光彩。";
		strcpy(place, "library");
		// hide object in scene
		Go_Out_Library->Visible = false;
		Observe_Library->Visible = false;
		search->Visible = false;
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
		chatbox_1->Visible = true;
		chatbox_2->Visible = true;
		item_button->Visible = false;
	}
	private: System::Void Observe_Library_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你仔細地觀察了藏書庫的內部";
	}
	private: System::Void Order_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你仔細地觀察了藏書庫的內部";
	}
	private: System::Void diner_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "三明治  ———————————— 1金幣\r\n肉串 —————————————— 60銀幣\r\n烤ㄇㄌㄐ———————————— 15 銀幣";
	}
	private: System::Void studio_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "擀麵棍(1d4 + db) ———————— 2金幣\r\n水果刀(1d4 + db) ———————— 3金幣\r\n槌子(1d6 + db) ————————— 6金幣\r\n麻繩(2m)  ——————————— 1金幣";
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
		// hide object in scene
		Restaurant_To_Market->Visible = false;
		Restaurant_To_Prison->Visible = false;
		Go_To_Restaurant->Visible = false;
		Restaurant_To_Sewer->Visible = false;
		//display object in scene
		Go_Out_Restaurant->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Restaurant_Inside.get_path()));
	}
	private: System::Void Go_Out_Restaurant_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "restaurant");
		// hide object in scene
		Go_Out_Restaurant->Visible = false;
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
			Plazza_To_Prison->Visible = false;
			Plazza_To_Sewer->Visible = false;
			player_motion->Visible = false;
			chatbox_1->Visible = false;
			chatbox_2->Visible = false;
		}
		dialog_text->Text = "點擊圖片以關閉圖片";

	}
	private: System::Void item_pic_Click(System::Object^ sender, System::EventArgs^ e) {
		item_pic->Visible = false;
		// in plazza
		if (strcmp(place, "plazza") == 0) { 
			Ask_Wagain->Visible = true;
			signpost->Visible = true;
			sundial->Visible = true;
			Plazza_To_Inn->Visible = true;
			Plazza_To_Prison->Visible = true;
			Plazza_To_Sewer->Visible = true;
			player_motion->Visible = true;
		}
	}
	private: System::Void chatbox_1_Click(System::Object^ sender, System::EventArgs^ e) {
		// in plazza
		if (strcmp(place, "plazza") == 0) {
			dialog_text->Text = "我們下一站要去的是傭有成鎮中最美麗自然風景的地方”德茲瑪麗湖”。";
		}
	}
	private: System::Void chatbox_2_Click(System::Object^ sender, System::EventArgs^ e) {
		// in plazza
		if (strcmp(place, "plazza") == 0) {
			dialog_text->Text = "你們向著左側走去，路途經過了一棟建築，這是一個由石頭砌成的建築，建築有著一扇鐵藝門，門口站著兩位全副武裝的侍衛，在門上方還掛著一塊禁止進入的牌匾，你們順著土路和兩旁的綠植走到了一座湖邊。。";
			background->Image = gcnew Bitmap(gcnew System::String(Prison_Outside.get_path()));
			strcpy(place, "lake");
			// hide object in scene
			signpost->Visible = false;
			sundial->Visible = false;
			Plazza_To_Inn->Visible = false;
			Plazza_To_Prison->Visible = false;
			Ask_Wagain->Visible = false;
			Observe_Signpost->Visible = false;
			chatbox_1->Visible = false;
			chatbox_2->Visible = false;
			item_button->Visible = false;
			Observe_Sundial->Visible = false;
			listen_stranger_plazza->Visible = false;
			listen_stranger_plazza->Visible = false;
			// show object in scene
			continue_button->Visible = true;
			lake_count = 1;
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
		dice.check(player.get_skill().Listen);
		if (Observe_Stranger_Plazza_Count == 9) {
			if (dice.success == 0) {
				dialog_text->Text = "觀察判定:失敗\r\n你在一旁偷聽老人家的閒話家常，老人們說話帶著很重的口音，讓你難以理解。";
			}
			else {
				dialog_text->Text = "觀察判定:成功\r\n你在一旁偷聽老人家的閒話家常，你聽到一個老人在說，他家下方好像有老鼠之類的東西，最近他睡覺的時候，有時候會聽到一些嘈雜的聲音從地板下傳來，怕不是下水道裡養了隻大老鼠。";
			}
			Observe_Stranger_Plazza_Count = dice.success;
		}
		else {
			if (Observe_Stranger_Plazza_Count == 0) {
				dialog_text->Text = "觀察判定:失敗\r\n你在一旁偷聽老人家的閒話家常，老人們說話帶著很重的口音，讓你難以理解。";
			}
			else {
				dialog_text->Text = "觀察判定:成功\r\n你在一旁偷聽老人家的閒話家常，你聽到一個老人在說，他家下方好像有老鼠之類的東西，最近他睡覺的時候，有時候會聽到一些嘈雜的聲音從地板下傳來，怕不是下水道裡養了隻大老鼠。";
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
		Plazza_To_Prison->Visible = false;
		Ask_Wagain->Visible = false;
		Observe_Signpost->Visible = false;
		chatbox_1->Visible = false;
		chatbox_2->Visible = false;
		item_button->Visible = false;
		Observe_Sundial->Visible = false;
		listen_stranger_plazza->Visible = false;
		Plazza_To_Sewer->Visible = false;
		// display object in scene
		Sewer_To_Plazza->Visible = true;
		Sewer_Plazza_Inn->Visible = true;
		Sewer_Plazza_Prison->Visible = true;

		background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
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
		Sewer_To_Inn->Visible = true;
		Sewer_Inn_Outlet->Visible = true;
		Sewer_Inn_Plazza->Visible = true;
		Sewer_Inn_Library->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
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
		// display object in scene
		Sewer_To_Market->Visible = true;
		Sewer_Market_Restaurant->Visible = true;
		Sewer_Market_Outlet->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
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
		Sewer_To_Restaurant->Visible = true;
		Sewer_Restaurant_Prison->Visible = true;
		Sewer_Restaurant_Market->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
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
		Sewer_To_Library->Visible = true;
		Sewer_Library_Intersection->Visible = true;
		Sewer_Library_Inn->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
	}
	private: System::Void Prison_To_Sewer_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "moon_state");
		// hide object in scene
		Prison_To_Restaurant->Visible = false;
		Prison_To_Plazza->Visible = false;
		Prison_To_IntersectionLeft->Visible = false;
		Prison_To_Sewer->Visible = false;
		// display object in scene
		Sewer_Prison_Plazza->Visible = true;
		Sewer_Prison_Restaurant->Visible = true;
		Sewer_Prison_Intersection->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Moon_State.get_path()));
	}
	private: System::Void Lake_To_Sewer_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "altar");
		lake_count = 0;
		// hide object in scene
		Lake_To_IntersectionLeft->Visible = false;
		continue_button->Visible = false;
		Psychology_Lake2->Visible = false;
		Psychology_Lake1->Visible = false;
		Lake_To_Sewer->Visible = false;
		// display object in scene
		Sewer_Lake_Intersection->Visible = true;

		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Altar.get_path()));
	}
	private: System::Void Sewer_To_Plazza_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "plazza");
		// hide object in scene
		Sewer_To_Plazza->Visible = false;
		Sewer_Plazza_Inn->Visible = false;
		Sewer_Plazza_Prison->Visible = false;
		// display object in scene
		signpost->Visible = true;
		sundial->Visible = true;
		Plazza_To_Inn->Visible = true;
		Plazza_To_Prison->Visible = true;
		Ask_Wagain->Visible = true;
		Plazza_To_Sewer->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Plazza.get_path()));
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
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Outlet.get_path()));
	}
	private: System::Void Sewer_Outlet_Market_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_market");
		dialog_text->Text = "市場";
		// hide object in scene
		Sewer_Outlet_Market->Visible = false;
		Sewer_Outlet_Inn->Visible = false;
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
		dialog_text->Text = "監獄";
		// hide object in scene
		Sewer_Restaurant_Prison->Visible = false;
		Sewer_To_Restaurant->Visible = false;
		Sewer_Restaurant_Market->Visible = false;
		// diaplay object in scene1
		Sewer_Prison_Plazza->Visible = true;
		Sewer_Prison_Restaurant->Visible = true;
		Sewer_Prison_Intersection->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Moon_State.get_path()));
	}
	private: System::Void Sewer_Prison_Plazza_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_plazza");
		dialog_text->Text = "廣場";
		// hide object in scene
		Sewer_Prison_Plazza->Visible = false;
		Sewer_Prison_Restaurant->Visible = false;
		Sewer_Prison_Intersection->Visible = false;
		// diaplay object in scene
		Sewer_To_Plazza->Visible = true;
		Sewer_Plazza_Inn->Visible = true;
		Sewer_Plazza_Prison->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
	}
	private: System::Void Sewer_Plazza_Prison_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "moon_state");
		// hide object in scene
		Sewer_Plazza_Inn->Visible = false;
		Sewer_To_Plazza->Visible = false;
		Sewer_Plazza_Prison->Visible = false;
		// diaplay object in scene
		Sewer_Prison_Plazza->Visible = true;
		Sewer_Prison_Restaurant->Visible = true;
		Sewer_Prison_Intersection->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Moon_State.get_path()));
	}
	private: System::Void Sewer_Prison_Restaurant_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_restaurant");
		dialog_text->Text = "餐廳";
		// hide object in scene
		Sewer_Prison_Restaurant->Visible = false;
		Sewer_Prison_Plazza->Visible = false;
		Sewer_Prison_Intersection->Visible = false;
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
		Sewer_Outlet_Inn->Visible = true;
		Sewer_Outlet_Market->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Outlet .get_path()));
	}
	private: System::Void Sewer_Outlet_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_inn");
		dialog_text->Text = "酒館";
		// hide object in scene
		Sewer_Outlet_Inn->Visible = false;
		Sewer_Outlet_Market->Visible = false;
		// diaplay object in scene
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
		dialog_text->Text = "監獄";
		// hide object in scene
		Sewer_Intersection_Library->Visible = false;
		Sewer_Intersection_Prison->Visible = false;
		Sewer_Intersection_Lake->Visible = false;
		// diaplay object in scene
		Sewer_Prison_Plazza->Visible = true;
		Sewer_Prison_Restaurant->Visible = true;
		Sewer_Prison_Intersection->Visible = true;
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
		Sewer_Lake_Intersection->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer_Altar.get_path()));
	}
	private: System::Void Sewer_Lake_Intersection_Click(System::Object^ sender, System::EventArgs^ e) {
		strcpy(place, "sewer_intersection");
		dialog_text->Text = "路口";
		// hide object in scene
		Sewer_Lake_Intersection->Visible = false;
		// diaplay object in scene
		Sewer_Intersection_Library->Visible = true;
		Sewer_Intersection_Prison->Visible = true;
		Sewer_Intersection_Lake->Visible = true;
		background->Image = gcnew Bitmap(gcnew System::String(Sewer.get_path()));
	}
};
}
