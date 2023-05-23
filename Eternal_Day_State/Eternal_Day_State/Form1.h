#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "data_format.h"
#include "scene.h"
#include "characters.h"
#include "battle.h"
#include "roll.h"
int system_counter = 0;
int continue_button_count = 0;
int lake_count = 0;
//background object
scene back_ground({ "www//pic//background//cover.png" });
scene lead_in({ "www//pic//background//lead_in.png" });
scene Inn_Lobby({ "www//pic//background//Inn_Lobby.png" });
scene Inn_Outside({ "www//pic//background//Inn_Outside.png" });
scene Inn_Room({ "www//pic//background//Inn_Lobby.png" });
scene Lake_Mary({ "www//pic//background//Lake_Mary.png" });
scene Library_Inside({ "www//pic//background//Library_Inside.png" }); 
scene Library_Outside({ "www//pic//background//Library_Outside.png" });
scene Market({ "www//pic//background//Inn_Lobby.png" });
scene Palace_Inside({ "www//pic//background//Palace_Inside.png" });
scene Palace_Outside({ "www//pic//background//Palace_Outside.png" });
scene Plazza({ "www//pic//background//Plazza.png" });
scene Prison_1F({ "www//pic//background//Prison_1F.png" });
scene Prison_2F({ "www//pic//background//Prison_2F.png" });
scene Prison_Outside({ "www//pic//background//Prison_Outside.png" });
scene Restaurant_Inside({ "www//pic//background//Restaurant_Inside.png" });
scene Restaurant_Outside({ "www//pic//background//Restaurant_Outside.png" });
scene Sewer({ "www//pic//background//Sewer.png" });
scene Sewer_Alter({ "www//pic//background//Sewer_Alter.png" });
scene Sewer_Moon_State({ "www//pic//background//Sewer_Moon_State.png" });
scene Sewer_Outlet({ "www//pic//background//Sewer_Outlet.png" });
scene Sewer_Secret_Door({ "www//pic//background//Sewer_Secret_Door.png" });

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
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
	private: System::Windows::Forms::ListView^ backpack_items_listView;
	private: System::Windows::Forms::PictureBox^ menu;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ Ask_Wagain;
	private: System::Windows::Forms::Button^ Observe_Library;
	private: System::Windows::Forms::Button^ Order;
	private: System::Windows::Forms::Button^ diner;
	private: System::Windows::Forms::Button^ studio;
	private: System::Windows::Forms::Button^ Observe_Wagain;
	private: System::Windows::Forms::Button^ Observe_Inn;
	private: System::Windows::Forms::Button^ search;
	private: System::Windows::Forms::Button^ Psychology_Lake1;
	private: System::Windows::Forms::Button^ Psychology_Lake2;

	public:
	private:
	public:

	public:
		bool backpack_open_or_close = 0;
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
	private: System::Windows::Forms::Button^ start;
	protected:
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
	private: System::ComponentModel::IContainer^ components;


	protected:

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
			this->Psychology_Lake1 = (gcnew System::Windows::Forms::Button());
			this->san_check_button = (gcnew System::Windows::Forms::Button());
			this->continue_button = (gcnew System::Windows::Forms::Button());
			this->dialog_text = (gcnew System::Windows::Forms::TextBox());
			this->character_name = (gcnew System::Windows::Forms::Label());
			this->status_panel = (gcnew System::Windows::Forms::Panel());
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
			this->Observe_Wagain = (gcnew System::Windows::Forms::Button());
			this->Observe_Inn = (gcnew System::Windows::Forms::Button());
			this->search = (gcnew System::Windows::Forms::Button());
			this->Psychology_Lake2 = (gcnew System::Windows::Forms::Button());
			this->backpack_panel->SuspendLayout();
			this->status_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menu))->BeginInit();
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
			this->start->Location = System::Drawing::Point(704, 480);
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
			this->manual->Location = System::Drawing::Point(192, 480);
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
			this->manual_text->Size = System::Drawing::Size(1024, 540);
			this->manual_text->TabIndex = 2;
			this->manual_text->Text = L"我是說明書的文字。換行請打\\r\\n";
			this->manual_text->Visible = false;
			this->manual_text->TextChanged += gcnew System::EventHandler(this, &Form1::manual_text_TextChanged);
			// 
			// back_to_home
			// 
			this->back_to_home->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_to_home->Location = System::Drawing::Point(192, 480);
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
			this->archaeologist_button->Font = (gcnew System::Drawing::Font(L"標楷體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->reporter_button->Font = (gcnew System::Drawing::Font(L"標楷體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->reporter_button->Location = System::Drawing::Point(704, 480);
			this->reporter_button->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->reporter_button->Name = L"reporter_button";
			this->reporter_button->Size = System::Drawing::Size(128, 64);
			this->reporter_button->TabIndex = 6;
			this->reporter_button->Text = L"記者";
			this->reporter_button->UseVisualStyleBackColor = true;
			this->reporter_button->Visible = false;
			this->reporter_button->Click += gcnew System::EventHandler(this, &Form1::reporter_button_Click);
			// 
			// occultist_button
			// 
			this->occultist_button->Font = (gcnew System::Drawing::Font(L"標楷體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
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
			this->backpack->Font = (gcnew System::Drawing::Font(L"標楷體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->backpack->Location = System::Drawing::Point(822, 117);
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
			// Psychology_Lake1
			// 
			this->Psychology_Lake1->Location = System::Drawing::Point(704, 117);
			this->Psychology_Lake1->Name = L"Psychology_Lake1";
			this->Psychology_Lake1->Size = System::Drawing::Size(64, 32);
			this->Psychology_Lake1->TabIndex = 15;
			this->Psychology_Lake1->Text = L"心理學";
			this->Psychology_Lake1->UseVisualStyleBackColor = true;
			this->Psychology_Lake1->Visible = false;
			this->Psychology_Lake1->Click += gcnew System::EventHandler(this, &Form1::Psychology_Lake1_Click);
			// 
			// san_check_button
			// 
			this->san_check_button->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->san_check_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->san_check_button->Location = System::Drawing::Point(822, 17);
			this->san_check_button->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->san_check_button->Name = L"san_check_button";
			this->san_check_button->Size = System::Drawing::Size(192, 96);
			this->san_check_button->TabIndex = 13;
			this->san_check_button->Text = L"San Check";
			this->san_check_button->UseVisualStyleBackColor = false;
			this->san_check_button->Visible = false;
			this->san_check_button->Click += gcnew System::EventHandler(this, &Form1::san_check_button_Click);
			// 
			// continue_button
			// 
			this->continue_button->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->continue_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->continue_button->Location = System::Drawing::Point(822, 17);
			this->continue_button->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->continue_button->Name = L"continue_button";
			this->continue_button->Size = System::Drawing::Size(192, 96);
			this->continue_button->TabIndex = 14;
			this->continue_button->Text = L"Continue";
			this->continue_button->UseVisualStyleBackColor = false;
			this->continue_button->Visible = false;
			this->continue_button->Click += gcnew System::EventHandler(this, &Form1::continue_button_Click);
			// 
			// dialog_text
			// 
			this->dialog_text->Enabled = false;
			this->dialog_text->Location = System::Drawing::Point(0, 0);
			this->dialog_text->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->dialog_text->Multiline = true;
			this->dialog_text->Name = L"dialog_text";
			this->dialog_text->Size = System::Drawing::Size(1024, 240);
			this->dialog_text->TabIndex = 12;
			this->dialog_text->Visible = false;
			this->dialog_text->TextChanged += gcnew System::EventHandler(this, &Form1::dialog_text_TextChanged);
			// 
			// character_name
			// 
			this->character_name->AutoSize = true;
			this->character_name->Font = (gcnew System::Drawing::Font(L"標楷體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->character_name->Location = System::Drawing::Point(3, 20);
			this->character_name->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->character_name->Name = L"character_name";
			this->character_name->Size = System::Drawing::Size(96, 12);
			this->character_name->TabIndex = 1;
			this->character_name->Text = L"選擇的角色職業";
			this->character_name->Visible = false;
			// 
			// status_panel
			// 
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
			// player_power_text
			// 
			this->player_power_text->AutoSize = true;
			this->player_power_text->Font = (gcnew System::Drawing::Font(L"標楷體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->player_power_text->Location = System::Drawing::Point(3, 3);
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
			this->STR->Location = System::Drawing::Point(79, 2);
			this->STR->Margin = System::Windows::Forms::Padding(1, 0, 1, 0);
			this->STR->Name = L"STR";
			this->STR->Size = System::Drawing::Size(31, 15);
			this->STR->TabIndex = 0;
			this->STR->Text = L"STR";
			this->STR->Visible = false;
			// 
			// Inn_To_Market
			// 
			this->Inn_To_Market->Location = System::Drawing::Point(943, 496);
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
			this->Plazza_To_Inn->Location = System::Drawing::Point(943, 497);
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
			this->IntersectionLeft_To_Library->Location = System::Drawing::Point(943, 496);
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
			this->Market_To_Restaurant->Location = System::Drawing::Point(943, 496);
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
			this->introduction_textBox->Location = System::Drawing::Point(0, 180);
			this->introduction_textBox->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->introduction_textBox->Multiline = true;
			this->introduction_textBox->Name = L"introduction_textBox";
			this->introduction_textBox->Size = System::Drawing::Size(1024, 540);
			this->introduction_textBox->TabIndex = 12;
			this->introduction_textBox->Visible = false;
			// 
			// signpost
			// 
			this->signpost->Location = System::Drawing::Point(396, 329);
			this->signpost->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->signpost->Name = L"signpost";
			this->signpost->Size = System::Drawing::Size(64, 32);
			this->signpost->TabIndex = 13;
			this->signpost->Text = L"路標";
			this->signpost->UseVisualStyleBackColor = true;
			this->signpost->Visible = false;
			this->signpost->Click += gcnew System::EventHandler(this, &Form1::signpost_Click);
			// 
			// sundial
			// 
			this->sundial->Location = System::Drawing::Point(562, 329);
			this->sundial->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->sundial->Name = L"sundial";
			this->sundial->Size = System::Drawing::Size(64, 32);
			this->sundial->TabIndex = 14;
			this->sundial->Text = L"日晷";
			this->sundial->UseVisualStyleBackColor = true;
			this->sundial->Visible = false;
			this->sundial->Click += gcnew System::EventHandler(this, &Form1::sundial_Click);
			// 
			// Plazza_To_Prison
			// 
			this->Plazza_To_Prison->Location = System::Drawing::Point(16, 496);
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
			this->Go_In_Inn->Location = System::Drawing::Point(396, 365);
			this->Go_In_Inn->Margin = System::Windows::Forms::Padding(2);
			this->Go_In_Inn->Name = L"Go_In_Inn";
			this->Go_In_Inn->Size = System::Drawing::Size(64, 32);
			this->Go_In_Inn->TabIndex = 17;
			this->Go_In_Inn->Text = L"進旅館";
			this->Go_In_Inn->UseVisualStyleBackColor = true;
			this->Go_In_Inn->Visible = false;
			this->Go_In_Inn->Click += gcnew System::EventHandler(this, &Form1::Go_In_Inn_Click);
			// 
			// Go_Out_Inn
			// 
			this->Go_Out_Inn->Location = System::Drawing::Point(396, 293);
			this->Go_Out_Inn->Margin = System::Windows::Forms::Padding(2);
			this->Go_Out_Inn->Name = L"Go_Out_Inn";
			this->Go_Out_Inn->Size = System::Drawing::Size(64, 32);
			this->Go_Out_Inn->TabIndex = 18;
			this->Go_Out_Inn->Text = L"出旅館";
			this->Go_Out_Inn->UseVisualStyleBackColor = true;
			this->Go_Out_Inn->Visible = false;
			this->Go_Out_Inn->Click += gcnew System::EventHandler(this, &Form1::Go_Out_Inn_Click);
			// 
			// Go_In_Room
			// 
			this->Go_In_Room->Location = System::Drawing::Point(562, 293);
			this->Go_In_Room->Margin = System::Windows::Forms::Padding(2);
			this->Go_In_Room->Name = L"Go_In_Room";
			this->Go_In_Room->Size = System::Drawing::Size(64, 32);
			this->Go_In_Room->TabIndex = 19;
			this->Go_In_Room->Text = L"進房間";
			this->Go_In_Room->UseVisualStyleBackColor = true;
			this->Go_In_Room->Visible = false;
			this->Go_In_Room->Click += gcnew System::EventHandler(this, &Form1::Go_In_Room_Click);
			// 
			// Go_Out_Room
			// 
			this->Go_Out_Room->Location = System::Drawing::Point(562, 367);
			this->Go_Out_Room->Margin = System::Windows::Forms::Padding(2);
			this->Go_Out_Room->Name = L"Go_Out_Room";
			this->Go_Out_Room->Size = System::Drawing::Size(64, 32);
			this->Go_Out_Room->TabIndex = 20;
			this->Go_Out_Room->Text = L"出房間";
			this->Go_Out_Room->UseVisualStyleBackColor = true;
			this->Go_Out_Room->Visible = false;
			this->Go_Out_Room->Click += gcnew System::EventHandler(this, &Form1::Go_Out_Room_Click);
			// 
			// Inn_To_Plazza
			// 
			this->Inn_To_Plazza->Location = System::Drawing::Point(480, 684);
			this->Inn_To_Plazza->Margin = System::Windows::Forms::Padding(2);
			this->Inn_To_Plazza->Name = L"Inn_To_Plazza";
			this->Inn_To_Plazza->Size = System::Drawing::Size(59, 30);
			this->Inn_To_Plazza->TabIndex = 21;
			this->Inn_To_Plazza->Text = L"↓";
			this->Inn_To_Plazza->UseVisualStyleBackColor = true;
			this->Inn_To_Plazza->Visible = false;
			this->Inn_To_Plazza->Click += gcnew System::EventHandler(this, &Form1::Inn_To_Plazza_Click);
			// 
			// Market_To_Inn
			// 
			this->Market_To_Inn->Location = System::Drawing::Point(16, 496);
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
			this->Restaurant_To_Market->Location = System::Drawing::Point(16, 496);
			this->Restaurant_To_Market->Margin = System::Windows::Forms::Padding(2);
			this->Restaurant_To_Market->Name = L"Restaurant_To_Market";
			this->Restaurant_To_Market->Size = System::Drawing::Size(64, 32);
			this->Restaurant_To_Market->TabIndex = 25;
			this->Restaurant_To_Market->Text = L"<-";
			this->Restaurant_To_Market->UseVisualStyleBackColor = true;
			this->Restaurant_To_Market->Visible = false;
			this->Restaurant_To_Market->Click += gcnew System::EventHandler(this, &Form1::Restaurant_To_Market_Click);
			// 
			// Restaurant_To_Prison
			// 
			this->Restaurant_To_Prison->Location = System::Drawing::Point(480, 684);
			this->Restaurant_To_Prison->Margin = System::Windows::Forms::Padding(2);
			this->Restaurant_To_Prison->Name = L"Restaurant_To_Prison";
			this->Restaurant_To_Prison->Size = System::Drawing::Size(59, 30);
			this->Restaurant_To_Prison->TabIndex = 26;
			this->Restaurant_To_Prison->Text = L"↓";
			this->Restaurant_To_Prison->UseVisualStyleBackColor = true;
			this->Restaurant_To_Prison->Visible = false;
			this->Restaurant_To_Prison->Click += gcnew System::EventHandler(this, &Form1::Restaurant_To_Prison_Click);
			// 
			// Prison_To_Restaurant
			// 
			this->Prison_To_Restaurant->Location = System::Drawing::Point(16, 496);
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
			this->Prison_To_Plazza->Location = System::Drawing::Point(480, 684);
			this->Prison_To_Plazza->Margin = System::Windows::Forms::Padding(2);
			this->Prison_To_Plazza->Name = L"Prison_To_Plazza";
			this->Prison_To_Plazza->Size = System::Drawing::Size(59, 30);
			this->Prison_To_Plazza->TabIndex = 28;
			this->Prison_To_Plazza->Text = L"↓";
			this->Prison_To_Plazza->UseVisualStyleBackColor = true;
			this->Prison_To_Plazza->Visible = false;
			this->Prison_To_Plazza->Click += gcnew System::EventHandler(this, &Form1::Prison_To_Plazza_Click);
			// 
			// Inn_To_IntersectionRight
			// 
			this->Inn_To_IntersectionRight->Location = System::Drawing::Point(16, 496);
			this->Inn_To_IntersectionRight->Margin = System::Windows::Forms::Padding(2);
			this->Inn_To_IntersectionRight->Name = L"Inn_To_IntersectionRight";
			this->Inn_To_IntersectionRight->Size = System::Drawing::Size(64, 32);
			this->Inn_To_IntersectionRight->TabIndex = 29;
			this->Inn_To_IntersectionRight->Text = L"<-";
			this->Inn_To_IntersectionRight->UseVisualStyleBackColor = true;
			this->Inn_To_IntersectionRight->Visible = false;
			this->Inn_To_IntersectionRight->Click += gcnew System::EventHandler(this, &Form1::Inn_To_IntersectionRight_Click);
			// 
			// IntersectionRight_To_Library
			// 
			this->IntersectionRight_To_Library->Location = System::Drawing::Point(480, 184);
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
			this->IntersectionRight_To_Inn->Location = System::Drawing::Point(480, 685);
			this->IntersectionRight_To_Inn->Margin = System::Windows::Forms::Padding(2);
			this->IntersectionRight_To_Inn->Name = L"IntersectionRight_To_Inn";
			this->IntersectionRight_To_Inn->Size = System::Drawing::Size(59, 30);
			this->IntersectionRight_To_Inn->TabIndex = 31;
			this->IntersectionRight_To_Inn->Text = L"↓";
			this->IntersectionRight_To_Inn->UseVisualStyleBackColor = true;
			this->IntersectionRight_To_Inn->Visible = false;
			this->IntersectionRight_To_Inn->Click += gcnew System::EventHandler(this, &Form1::IntersectionRight_To_Inn_Click);
			// 
			// IntersectionRight_To_Palace
			// 
			this->IntersectionRight_To_Palace->Location = System::Drawing::Point(944, 496);
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
			this->Palace_To_IntersectionRight->Location = System::Drawing::Point(562, 220);
			this->Palace_To_IntersectionRight->Margin = System::Windows::Forms::Padding(2);
			this->Palace_To_IntersectionRight->Name = L"Palace_To_IntersectionRight";
			this->Palace_To_IntersectionRight->Size = System::Drawing::Size(64, 32);
			this->Palace_To_IntersectionRight->TabIndex = 33;
			this->Palace_To_IntersectionRight->Text = L"往回走";
			this->Palace_To_IntersectionRight->UseVisualStyleBackColor = true;
			this->Palace_To_IntersectionRight->Visible = false;
			this->Palace_To_IntersectionRight->Click += gcnew System::EventHandler(this, &Form1::Palace_To_IntersectionRight_Click);
			// 
			// Library_To_IntersectionRight
			// 
			this->Library_To_IntersectionRight->Location = System::Drawing::Point(943, 496);
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
			this->Prison_To_IntersectionLeft->Location = System::Drawing::Point(943, 497);
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
			this->IntersectionLeft_To_Prison->Location = System::Drawing::Point(480, 684);
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
			this->Library_To_IntersectionLeft->Location = System::Drawing::Point(16, 496);
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
			this->IntersectionLeft_To_Lake->Location = System::Drawing::Point(16, 496);
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
			this->Lake_To_IntersectionLeft->Location = System::Drawing::Point(396, 220);
			this->Lake_To_IntersectionLeft->Margin = System::Windows::Forms::Padding(2);
			this->Lake_To_IntersectionLeft->Name = L"Lake_To_IntersectionLeft";
			this->Lake_To_IntersectionLeft->Size = System::Drawing::Size(64, 32);
			this->Lake_To_IntersectionLeft->TabIndex = 40;
			this->Lake_To_IntersectionLeft->Text = L"往回走";
			this->Lake_To_IntersectionLeft->UseVisualStyleBackColor = true;
			this->Lake_To_IntersectionLeft->Visible = false;
			this->Lake_To_IntersectionLeft->Click += gcnew System::EventHandler(this, &Form1::Lake_To_IntersectionLeft_Click);
			// 
			// Go_In_Palace
			// 
			this->Go_In_Palace->Location = System::Drawing::Point(480, 256);
			this->Go_In_Palace->Margin = System::Windows::Forms::Padding(2);
			this->Go_In_Palace->Name = L"Go_In_Palace";
			this->Go_In_Palace->Size = System::Drawing::Size(64, 32);
			this->Go_In_Palace->TabIndex = 41;
			this->Go_In_Palace->Text = L"進宮殿";
			this->Go_In_Palace->UseVisualStyleBackColor = true;
			this->Go_In_Palace->Visible = false;
			this->Go_In_Palace->Click += gcnew System::EventHandler(this, &Form1::Go_In_Palace_Click);
			// 
			// Go_In_Library
			// 
			this->Go_In_Library->Location = System::Drawing::Point(396, 256);
			this->Go_In_Library->Margin = System::Windows::Forms::Padding(2);
			this->Go_In_Library->Name = L"Go_In_Library";
			this->Go_In_Library->Size = System::Drawing::Size(64, 32);
			this->Go_In_Library->TabIndex = 42;
			this->Go_In_Library->Text = L"進圖書館";
			this->Go_In_Library->UseVisualStyleBackColor = true;
			this->Go_In_Library->Visible = false;
			this->Go_In_Library->Click += gcnew System::EventHandler(this, &Form1::Go_In_Library_Click);
			// 
			// Go_Out_Library
			// 
			this->Go_Out_Library->Location = System::Drawing::Point(562, 256);
			this->Go_Out_Library->Margin = System::Windows::Forms::Padding(2);
			this->Go_Out_Library->Name = L"Go_Out_Library";
			this->Go_Out_Library->Size = System::Drawing::Size(64, 32);
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
			this->Ask_Wagain->Location = System::Drawing::Point(480, 404);
			this->Ask_Wagain->Name = L"Ask_Wagain";
			this->Ask_Wagain->Size = System::Drawing::Size(64, 32);
			this->Ask_Wagain->TabIndex = 46;
			this->Ask_Wagain->Text = L"詢問瓦格恩";
			this->Ask_Wagain->UseVisualStyleBackColor = true;
			this->Ask_Wagain->Visible = false;
			this->Ask_Wagain->Click += gcnew System::EventHandler(this, &Form1::Ask_Wagain_Click);
			// 
			// Observe_Library
			// 
			this->Observe_Library->Location = System::Drawing::Point(396, 404);
			this->Observe_Library->Name = L"Observe_Library";
			this->Observe_Library->Size = System::Drawing::Size(64, 32);
			this->Observe_Library->TabIndex = 47;
			this->Observe_Library->Text = L"觀察藏書閣";
			this->Observe_Library->UseVisualStyleBackColor = true;
			this->Observe_Library->Visible = false;
			this->Observe_Library->Click += gcnew System::EventHandler(this, &Form1::Observe_Library_Click);
			// 
			// Order
			// 
			this->Order->Location = System::Drawing::Point(562, 404);
			this->Order->Name = L"Order";
			this->Order->Size = System::Drawing::Size(64, 32);
			this->Order->TabIndex = 48;
			this->Order->Text = L"點餐";
			this->Order->UseVisualStyleBackColor = true;
			this->Order->Visible = false;
			this->Order->Click += gcnew System::EventHandler(this, &Form1::Order_Click);
			// 
			// diner
			// 
			this->diner->Location = System::Drawing::Point(316, 365);
			this->diner->Name = L"diner";
			this->diner->Size = System::Drawing::Size(64, 32);
			this->diner->TabIndex = 49;
			this->diner->Text = L"小吃部";
			this->diner->UseVisualStyleBackColor = true;
			this->diner->Visible = false;
			this->diner->Click += gcnew System::EventHandler(this, &Form1::diner_Click);
			// 
			// studio
			// 
			this->studio->Location = System::Drawing::Point(642, 367);
			this->studio->Name = L"studio";
			this->studio->Size = System::Drawing::Size(64, 32);
			this->studio->TabIndex = 50;
			this->studio->Text = L"工作店";
			this->studio->UseVisualStyleBackColor = true;
			this->studio->Visible = false;
			this->studio->Click += gcnew System::EventHandler(this, &Form1::studio_Click);
			// 
			// Observe_Wagain
			// 
			this->Observe_Wagain->Location = System::Drawing::Point(480, 367);
			this->Observe_Wagain->Name = L"Observe_Wagain";
			this->Observe_Wagain->Size = System::Drawing::Size(64, 32);
			this->Observe_Wagain->TabIndex = 51;
			this->Observe_Wagain->Text = L"觀察瓦格恩";
			this->Observe_Wagain->UseVisualStyleBackColor = true;
			this->Observe_Wagain->Visible = false;
			this->Observe_Wagain->Click += gcnew System::EventHandler(this, &Form1::Observe_Wagain_Click);
			// 
			// Observe_Inn
			// 
			this->Observe_Inn->Location = System::Drawing::Point(480, 442);
			this->Observe_Inn->Name = L"Observe_Inn";
			this->Observe_Inn->Size = System::Drawing::Size(64, 32);
			this->Observe_Inn->TabIndex = 52;
			this->Observe_Inn->Text = L"觀察旅店";
			this->Observe_Inn->UseVisualStyleBackColor = true;
			this->Observe_Inn->Visible = false;
			this->Observe_Inn->Click += gcnew System::EventHandler(this, &Form1::Observe_Inn_Click);
			// 
			// search
			// 
			this->search->Location = System::Drawing::Point(396, 443);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(64, 32);
			this->search->TabIndex = 53;
			this->search->Text = L"尋找資料";
			this->search->UseVisualStyleBackColor = true;
			this->search->Visible = false;
			this->search->Click += gcnew System::EventHandler(this, &Form1::search_Click);
			// 
			// Psychology_Lake2
			// 
			this->Psychology_Lake2->Location = System::Drawing::Point(562, 443);
			this->Psychology_Lake2->Name = L"Psychology_Lake2";
			this->Psychology_Lake2->Size = System::Drawing::Size(64, 32);
			this->Psychology_Lake2->TabIndex = 54;
			this->Psychology_Lake2->Text = L"心理學";
			this->Psychology_Lake2->UseVisualStyleBackColor = true;
			this->Psychology_Lake2->Visible = false;
			this->Psychology_Lake2->Click += gcnew System::EventHandler(this, &Form1::Psychology_Lake2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1024, 960);
			this->Controls->Add(this->Psychology_Lake2);
			this->Controls->Add(this->search);
			this->Controls->Add(this->Observe_Inn);
			this->Controls->Add(this->Observe_Wagain);
			this->Controls->Add(this->studio);
			this->Controls->Add(this->diner);
			this->Controls->Add(this->Order);
			this->Controls->Add(this->Observe_Library);
			this->Controls->Add(this->Ask_Wagain);
			this->Controls->Add(this->backpack_items_listView);
			this->Controls->Add(this->Go_Out_Library);
			this->Controls->Add(this->Go_In_Library);
			this->Controls->Add(this->Plazza_To_Inn);
			this->Controls->Add(this->Inn_To_Market);
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
			this->Controls->Add(this->IntersectionLeft_To_Library);
			this->Controls->Add(this->Market_To_Restaurant);
			this->Controls->Add(this->Prison_To_IntersectionLeft);
			this->Controls->Add(this->Library_To_IntersectionRight);
			this->Controls->Add(this->IntersectionRight_To_Palace);
			this->Controls->Add(this->introduction_textBox);
			this->Controls->Add(this->manual_text);
			this->Controls->Add(this->menu);
			this->Margin = System::Windows::Forms::Padding(1, 2, 1, 2);
			this->Name = L"Form1";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"COC";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->backpack_panel->ResumeLayout(false);
			this->backpack_panel->PerformLayout();
			this->status_panel->ResumeLayout(false);
			this->status_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menu))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
		backpack_panel->Visible = true;
		backpack->Visible = true;
		character_name->Visible = true;
		character_name->Text = L"考古學家";
		dialog_text->Visible = true;
		introduction_textBox->Visible = true;
		dialog_text->Text = "經歷了這般的未知變化讓你的心中產生了些許恐懼，請做一個san check";
		introduction_textBox->Text = "你們乘上了前往威爾士的車。\r\n伴隨著風景閃過，你們經過連綿的山丘，最終車子停在了一處以被開挖的丘陵地。\r\n「到了。」司機說，「你們可以去遺跡探索了，那邊就是這次遺跡出土的地方了。」\r\n你們進入後看到了入口右側有著一具骷髏，你們隱隱看到骷髏空洞的眼眶閃出了一縷白光，你感到腦子一陣暈眩，頭愈發的沉重，閉上了眼睛。你感覺腦袋一片混沌，彷彿睡了太久大夢初醒一般，你再次睜開眼睛後，你發現與你一起來的團員們也躺在你身邊露出了迷茫的神情。\r\n你們身上穿的衣服不再是前來時的衣服，而是風格古老的粗布衣，你摸了摸兜，你發現你身上的物品都不見了，剩下的是一些你只在博物館見過的古董品。";
		san_check_button->Visible = true;
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
		backpack_panel->Visible = true;
		backpack->Visible = true;
		character_name->Visible = true;
		character_name->Text = L"神祕學家";
		dialog_text->Visible = true;
		introduction_textBox->Visible = true;
		dialog_text->Text = "經歷了這般的未知變化讓你的心中產生了些許恐懼，請做一個san check";
		introduction_textBox->Text = "你們乘上了前往威爾士的車。\r\n伴隨著風景閃過，你們經過連綿的山丘，最終車子停在了一處以被開挖的丘陵地。\r\n「到了。」司機說，「你們可以去遺跡探索了，那邊就是這次遺跡出土的地方了。」\r\n你們進入後看到了入口右側有著一具骷髏，你們隱隱看到骷髏空洞的眼眶閃出了一縷白光，你感到腦子一陣暈眩，頭愈發的沉重，閉上了眼睛。你感覺腦袋一片混沌，彷彿睡了太久大夢初醒一般，你再次睜開眼睛後，你發現與你一起來的團員們也躺在你身邊露出了迷茫的神情。\r\n你們身上穿的衣服不再是前來時的衣服，而是風格古老的粗布衣，你摸了摸兜，你發現你身上的物品都不見了，剩下的是一些你只在博物館見過的古董品。";
		san_check_button->Visible = true;
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
		backpack_panel->Visible = true;
		backpack->Visible = true;
		character_name->Visible = true;
		character_name->Text = L"記者";
		dialog_text->Visible = true;
		introduction_textBox->Visible = true;
		dialog_text->Text = "經歷了這般的未知變化讓你的心中產生了些許恐懼，請做一個san check";
		introduction_textBox->Text = "你們乘上了前往威爾士的車。\r\n伴隨著風景閃過，你們經過連綿的山丘，最終車子停在了一處以被開挖的丘陵地。\r\n「到了。」司機說，「你們可以去遺跡探索了，那邊就是這次遺跡出土的地方了。」\r\n你們進入後看到了入口右側有著一具骷髏，你們隱隱看到骷髏空洞的眼眶閃出了一縷白光，你感到腦子一陣暈眩，頭愈發的沉重，閉上了眼睛。你感覺腦袋一片混沌，彷彿睡了太久大夢初醒一般，你再次睜開眼睛後，你發現與你一起來的團員們也躺在你身邊露出了迷茫的神情。\r\n你們身上穿的衣服不再是前來時的衣服，而是風格古老的粗布衣，你摸了摸兜，你發現你身上的物品都不見了，剩下的是一些你只在博物館見過的古董品。";
		san_check_button->Visible = true;

	}
	private: System::Void backpack_Click(System::Object^ sender, System::EventArgs^ e) {
		backpack_items_listView->Items->Clear();
		ListViewItem^ flash_light = (gcnew ListViewItem(gcnew array<String^> { L"手電筒", L"未使用" }));
		ListViewItem^ coin = (gcnew ListViewItem(gcnew array<String^> { L"錢", L"2023" }));
		array<ListViewItem^>^ test = gcnew array<ListViewItem^> { flash_light, coin };
		for (int i = 0; i < test->Length; i++) {
			if (!backpack_items_listView->Items->Contains(test[i])) {
				this->backpack_items_listView->Items->Add(test[i]);
			}
		}
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
		}

		if (lake_count == 1) {
			dialog_text->Text = "瓦格恩:這裡是德茲瑪麗湖，擁有城鎮最漂亮的自然風景，如果心情鬱悶的話可以來這裡散散心，但這裡的水況不太穩定，所以請不要下水嬉戲喔。";
			continue_button->Visible = false;
			continue_button_count = continue_button_count + 1;
			Observe_Wagain->Visible = true;
			Psychology_Lake2->Visible = true;
			Lake_To_IntersectionLeft->Visible = true;
		}
	}
	private: System::Void signpost_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "路標上往左的箭頭上寫著德茲瑪莉湖、餐廳，而往右的箭頭上寫著旅店。";
	}
	private: System::Void sundial_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這是個半徑約有三到四公尺的日晷，是用石料配合著華麗的工藝雕刻而成，看起來非常的壯觀，有種巴洛克式的美，現在日晷指針的陰影指在”時間”字上。";
	}
	private: System::Void Plazza_To_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這棟建築由木材建成，屋頂使用稻草編織而成。建築物的外牆粗糙的由木板和泥土夯實而成，看起來十分堅固，前方設有一個大門，用於進出旅店，大門的外觀簡單而樸實，完美的符合了實用主義的理念。";
		// hide object in scene
		signpost->Visible = false;
		sundial->Visible = false;
		Plazza_To_Inn->Visible = false;
		Plazza_To_Prison->Visible = false;
		Ask_Wagain->Visible = false;
		// display object in scene
		Inn_To_Plazza->Visible = true;
		Go_In_Inn->Visible = true;
		Inn_To_Market->Visible = true;
		Inn_To_IntersectionRight->Visible = true;
		Observe_Inn->Visible = true;
	}
	private: System::Void Plazza_To_Prison_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你面前的是一個由石頭砌成的建築，建築有著一扇鐵藝門，看起來十分堅固，在離地約4公尺處有著兩扇玻璃窗戶正對著廣場，門口站著兩位全副武裝的侍衛，在門上方還掛著一塊禁止進入的牌匾。";
		// hide object in scene
		signpost->Visible = false;
		sundial->Visible = false;
		Plazza_To_Inn->Visible = false;
		Plazza_To_Prison->Visible = false;
		Ask_Wagain->Visible = false;
		// display object in scene
		Prison_To_Restaurant->Visible = true;
		Prison_To_Plazza->Visible = true;
		Prison_To_IntersectionLeft->Visible = true;
	}
	private: System::Void Go_In_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你進入旅店後，他的內部就如同他的外部那般樸實無華，只有一個櫃台，和左右兩間大床房從前方傳來了有氣無力的聲音”住宿一天20銀幣，不提供食物，一天以宏光、烈光時區分，住七天優惠只要一金幣。”你往前看去，那是一個頭髮斑白的老頭，雙手撐著臉，一副要死不活的樣子。";
		// hide object in scene
		Go_In_Inn->Visible = false;
		Inn_To_Plazza->Visible = false;
		Inn_To_Market->Visible = false;
		Inn_To_IntersectionRight->Visible = false;
		Observe_Inn->Visible = false;
		// display object in scene
		Go_Out_Inn->Visible = true;
		Go_In_Room->Visible = true;
	}
	private: System::Void Go_Out_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這棟建築由木材建成，屋頂使用稻草編織而成。建築物的外牆粗糙的由木板和泥土夯實而成，看起來十分堅固，前方設有一個大門，用於進出旅店，大門的外觀簡單而樸實，完美的符合了實用主義的理念。";
		// hide object in scene
		Go_Out_Inn->Visible = false;
		Go_In_Room->Visible = false;
		// display object in scene
		Go_In_Inn->Visible = true;
		Inn_To_Plazza->Visible = true;
		Inn_To_Market->Visible = true;
		Inn_To_IntersectionRight->Visible = true;
		Observe_Inn->Visible = true;
	}
	private: System::Void Go_In_Room_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你進入了房間，房間內只有稻草鋪的床，和一些用布包住稻草稈做的枕頭";
		// hide object in scene
		Go_Out_Inn->Visible = false;
		Go_In_Room->Visible = false;
		// display object in scene
		Go_Out_Room->Visible = true;
	}
	private: System::Void Go_Out_Room_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你進入旅店後，他的內部就如同他的外部那般樸實無華，只有一個櫃台，和左右兩間大床房從前方傳來了有氣無力的聲音”住宿一天20銀幣，不提供食物，一天以宏光、烈光時區分，住七天優惠只要一金幣。”你往前看去，那是一個頭髮斑白的老頭，雙手撐著臉，一副要死不活的樣子。";
		// hide object in scene
		Go_Out_Room->Visible = false;
		// display object in scene
		Go_Out_Inn->Visible = true;
		Go_In_Room->Visible = true;

	}
	private: System::Void Inn_To_Plazza_Click(System::Object^ sender, System::EventArgs^ e) {
		// hide object in scene
		Go_In_Inn->Visible = false;
		Inn_To_Plazza->Visible = false;
		Inn_To_Market->Visible = false;
		Inn_To_IntersectionRight->Visible = false;
		Observe_Inn->Visible = false;
		// display object in scene
		signpost->Visible = true;
		sundial->Visible = true;
		Plazza_To_Inn->Visible = true;
		Plazza_To_Prison->Visible = true;
		Ask_Wagain->Visible = true;
		menu->Image = gcnew Bitmap(gcnew System::String(back_ground.get_path()));
	}
	private: System::Void Inn_To_Market_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "市場的街道狹窄而擁擠，滿是雜物，很容易讓人摔倒。市場里擠滿了商販和攤販，他們用各種聲音、手勢和展示方式向你推銷自己的產品。你可以聽到他們高聲地叫賣，介紹自己的貨品，有些商販用樂器演奏著悠揚的音樂，吸引著顧客。";
		// hide object in scene
		Go_In_Inn->Visible = false;
		Inn_To_Plazza->Visible = false;
		Inn_To_Market->Visible = false;
		Inn_To_IntersectionRight->Visible = false;
		Observe_Inn->Visible = false;
		//display object in scene
		Market_To_Restaurant->Visible = true;
		Market_To_Inn->Visible = true;
		diner->Visible = true;
		studio->Visible = true;
	}
	private: System::Void Market_To_Restaurant_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你來到了餐館，餐館外觀看起來是個還算整潔的木製建築，進入餐廳，你發現這裡非常明亮、寬敞。整個空間採用簡約的風格，淺色木質牆壁搭配深色木質地板，一排排的餐桌擺放整齊，讓人感到舒適和放鬆，此時餐廳內(人數)(狀態)，此時你們聽到一個溫和的聲音問到”客官們請問你們想來點甚麼”， 你看向了出聲的人，那是一位長相清秀的獨臂青年，他有著金色的中長髮和祖母綠色的眼眸，他背後的牆壁上掛著菜單。";
		// hide object in scene
		Market_To_Restaurant->Visible = false;
		Market_To_Inn->Visible = false;
		diner->Visible = false;
		studio->Visible = false;
		//display object in scene
		Restaurant_To_Market->Visible = true;
		Restaurant_To_Prison->Visible = true;
	}
	private: System::Void Market_To_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這棟建築由木材建成，屋頂使用稻草編織而成。建築物的外牆粗糙的由木板和泥土夯實而成，看起來十分堅固，前方設有一個大門，用於進出旅店，大門的外觀簡單而樸實，完美的符合了實用主義的理念。";
		// hide object in scene
		Market_To_Restaurant->Visible = false;
		Market_To_Inn->Visible = false;
		diner->Visible = false;
		studio->Visible = false;
		//display object in scene
		Go_In_Inn->Visible = true;
		Inn_To_Plazza->Visible = true;
		Inn_To_Market->Visible = true;
		Inn_To_IntersectionRight->Visible = true;
		Observe_Inn->Visible = true;
	}
	private: System::Void Restaurant_To_Market_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "市場的街道狹窄而擁擠，滿是雜物，很容易讓人摔倒。市場里擠滿了商販和攤販，他們用各種聲音、手勢和展示方式向你推銷自己的產品。你可以聽到他們高聲地叫賣，介紹自己的貨品，有些商販用樂器演奏著悠揚的音樂，吸引著顧客。";
		// hide object in scene
		Restaurant_To_Market->Visible = false;
		Restaurant_To_Prison->Visible = false;
		// display object in scene
		Market_To_Restaurant->Visible = true;
		Market_To_Inn->Visible = true;
		diner->Visible = true;
		studio->Visible = true;
	}
	private: System::Void Restaurant_To_Prison_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你面前的是一個由石頭砌成的建築，建築有著一扇鐵藝門，看起來十分堅固，在離地約4公尺處有著兩扇玻璃窗戶正對著廣場，門口站著兩位全副武裝的侍衛，在門上方還掛著一塊禁止進入的牌匾。";
		// hide object in scene
		Restaurant_To_Market->Visible = false;
		Restaurant_To_Prison->Visible = false;
		// display object in scene
		Prison_To_Restaurant->Visible = true;
		Prison_To_Plazza->Visible = true;
		Prison_To_IntersectionLeft->Visible = true;
	}
	private: System::Void Prison_To_Restaurant_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你來到了餐館，餐館外觀看起來是個還算整潔的木製建築，進入餐廳，你發現這裡非常明亮、寬敞。整個空間採用簡約的風格，淺色木質牆壁搭配深色木質地板，一排排的餐桌擺放整齊，讓人感到舒適和放鬆，此時餐廳內(人數)(狀態)，此時你們聽到一個溫和的聲音問到”客官們請問你們想來點甚麼”， 你看向了出聲的人，那是一位長相清秀的獨臂青年，他有著金色的中長髮和祖母綠色的眼眸，他背後的牆壁上掛著菜單。";
		// hide object in scene
		Prison_To_Restaurant->Visible = false;
		Prison_To_Plazza->Visible = false;
		Prison_To_IntersectionLeft->Visible = false;
		// display object in scene
		Restaurant_To_Market->Visible = true;
		Restaurant_To_Prison->Visible = true;
	}
	private: System::Void Prison_To_Plazza_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "廣場待補";
		// hide object in scene
		Prison_To_Restaurant->Visible = false;
		Prison_To_Plazza->Visible = false;
		Prison_To_IntersectionLeft->Visible = false;
		// diaplay object in scene
		signpost->Visible = true;
		sundial->Visible = true;
		Plazza_To_Inn->Visible = true;
		Plazza_To_Prison->Visible = true;
		Ask_Wagain->Visible = true;
	}
	private: System::Void Inn_To_IntersectionRight_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "路口右待補";
		// hide object in scene
		Go_In_Inn->Visible = false;
		Inn_To_Plazza->Visible = false;
		Inn_To_Market->Visible = false;
		Inn_To_IntersectionRight->Visible = false;
		Observe_Inn->Visible = false;
		// diaplay object in scene
		IntersectionRight_To_Library->Visible = true;
		IntersectionRight_To_Inn->Visible = true;
		IntersectionRight_To_Palace->Visible = true;
	}
	private: System::Void IntersectionRight_To_Library_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這是一棟非常豪華和宏偉的建築，你被它那令人嘆為觀止的氣勢所震撼，以高大的石柱和華麗的拱門，來支撐整個建築，建築的主體由優雅的柱子和華麗的拱門支撐，高大的尖頂耸立著，猶如一個巨大的王冠，牆面上有著浮雕、雕塑和彩繪，繪製著神話、故事和歷史事件，讓建築更顯神聖和莊嚴。在陽光的照耀下，這些彩繪和浮雕散發出燦爛的光芒，讓整個建築閃耀著耀眼的光彩。";
		// hide object in scene
		IntersectionRight_To_Library->Visible = false;
		IntersectionRight_To_Inn->Visible = false;
		IntersectionRight_To_Palace->Visible = false;
		// diaplay object in scene
		Library_To_IntersectionRight->Visible = true;
		Library_To_IntersectionLeft->Visible = true;
		Go_In_Library->Visible = true;
	}
	private: System::Void IntersectionRight_To_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這棟建築由木材建成，屋頂使用稻草編織而成。建築物的外牆粗糙的由木板和泥土夯實而成，看起來十分堅固，前方設有一個大門，用於進出旅店，大門的外觀簡單而樸實，完美的符合了實用主義的理念。";
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
	}
	private: System::Void IntersectionRight_To_Palace_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你面前的是一個巨大、華麗、寬敞的建築，這棟建築的體量看起來完全不是城鎮中的其他建築可比擬，建築的屋頂上還有著一座巨大的黃金鐘，看起來唯一的入口是一扇巨大的木門。";
		// hide object in scene
		IntersectionRight_To_Library->Visible = false;
		IntersectionRight_To_Inn->Visible = false;
		IntersectionRight_To_Palace->Visible = false;
		// diaplay object in scene
		Palace_To_IntersectionRight->Visible = true;
		Go_In_Palace->Visible = true;
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
	}
	private: System::Void Library_To_IntersectionRight_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "路口右待補";
		// hide object in scene
		Library_To_IntersectionRight->Visible = false;
		Library_To_IntersectionLeft->Visible = false;
		Go_In_Library->Visible = false;
		// diaplay object in scene
		IntersectionRight_To_Library->Visible = true;
		IntersectionRight_To_Inn->Visible = true;
		IntersectionRight_To_Palace->Visible = true;
	}
	private: System::Void Prison_To_IntersectionLeft_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "路口左待補";
		// hide object in scene
		Prison_To_Restaurant->Visible = false;
		Prison_To_Plazza->Visible = false;
		Prison_To_IntersectionLeft->Visible = false;
		// diaplay object in scene
		IntersectionLeft_To_Prison->Visible = true;
		IntersectionLeft_To_Library->Visible = true;
		IntersectionLeft_To_Lake->Visible = true;
	}
	private: System::Void IntersectionLeft_To_Prison_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你面前的是一個由石頭砌成的建築，建築有著一扇鐵藝門，看起來十分堅固，在離地約4公尺處有著兩扇玻璃窗戶正對著廣場，門口站著兩位全副武裝的侍衛，在門上方還掛著一塊禁止進入的牌匾。";
		// hide object in scene
		IntersectionLeft_To_Prison->Visible = false;
		IntersectionLeft_To_Library->Visible = false;
		IntersectionLeft_To_Lake->Visible = false;
		// display object in scene
		Prison_To_Restaurant->Visible = true;
		Prison_To_Plazza->Visible = true;
		Prison_To_IntersectionLeft->Visible = true;
	}
	private: System::Void IntersectionLeft_To_Library_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這是一棟非常豪華和宏偉的建築，你被它那令人嘆為觀止的氣勢所震撼，以高大的石柱和華麗的拱門，來支撐整個建築，建築的主體由優雅的柱子和華麗的拱門支撐，高大的尖頂耸立著，猶如一個巨大的王冠，牆面上有著浮雕、雕塑和彩繪，繪製著神話、故事和歷史事件，讓建築更顯神聖和莊嚴。在陽光的照耀下，這些彩繪和浮雕散發出燦爛的光芒，讓整個建築閃耀著耀眼的光彩。";
		// hide object in scene
		IntersectionLeft_To_Library->Visible = false;
		IntersectionLeft_To_Prison->Visible = false;
		IntersectionLeft_To_Lake->Visible = false;
		// diaplay object in scene
		Library_To_IntersectionRight->Visible = true;
		Library_To_IntersectionLeft->Visible = true;
		Go_In_Library->Visible = true;
	}
	private: System::Void Library_To_IntersectionLeft_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "路口左待補";
		// hide object in scene
		Library_To_IntersectionRight->Visible = false;
		Library_To_IntersectionLeft->Visible = false;
		Go_In_Library->Visible = false;
		// diaplay object in scene
		IntersectionLeft_To_Prison->Visible = true;
		IntersectionLeft_To_Library->Visible = true;
		IntersectionLeft_To_Lake->Visible = true;
	}
	private: System::Void IntersectionLeft_To_Lake_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你們來到了德茲瑪麗湖，那湖水猶如碧玉般清澈，波光粼粼，倒映著湖畔旁的青山綠樹，天空的美景也在湖水中倒影出來。湖畔旁的花草樹木繁茂，漫步其間，仿若置身於一個美麗的童話世界，讓人感受到大自然的生命力。";
		lake_count = 1;
		// hide object in scene
		IntersectionLeft_To_Library->Visible = false;
		IntersectionLeft_To_Prison->Visible = false;
		IntersectionLeft_To_Lake->Visible = false;
		// diaplay object in scene
		continue_button->Visible = true;
	}
	private: System::Void Lake_To_IntersectionLeft_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "路口左待補";
		lake_count = 0;
		// hide object in scene
		Lake_To_IntersectionLeft->Visible = false;
		continue_button->Visible = false;
		Psychology_Lake2->Visible = false;
		Psychology_Lake1->Visible = false;
		// diaplay object in scene
		IntersectionLeft_To_Library->Visible = true;
		IntersectionLeft_To_Prison->Visible = true;
		IntersectionLeft_To_Lake->Visible = true;
	}
	private: System::Void Go_In_Palace_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "待補";
		// hide object in scene
		Palace_To_IntersectionRight->Visible = false;
		Go_In_Palace->Visible = false;
	}
	private: System::Void Go_In_Library_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你進到了圖書館內，這間屋子裏有著許多的架子，架子上擺滿了手寫的文獻和書籍，大多都是用羊皮紙和墨水寫成，這些文獻是按照主題整齊排列排列。";
		// hide object in scene
		Library_To_IntersectionRight->Visible = false;
		Library_To_IntersectionLeft->Visible = false;
		Go_In_Library->Visible = false;
		// diaplay object in scene
		Go_Out_Library->Visible = true;
		Observe_Library->Visible = true;
		search->Visible = true;
	}
	private: System::Void Go_Out_Library_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這是一棟非常豪華和宏偉的建築，你被它那令人嘆為觀止的氣勢所震撼，以高大的石柱和華麗的拱門，來支撐整個建築，建築的主體由優雅的柱子和華麗的拱門支撐，高大的尖頂耸立著，猶如一個巨大的王冠，牆面上有著浮雕、雕塑和彩繪，繪製著神話、故事和歷史事件，讓建築更顯神聖和莊嚴。在陽光的照耀下，這些彩繪和浮雕散發出燦爛的光芒，讓整個建築閃耀著耀眼的光彩。";
		// hide object in scene
		Go_Out_Library->Visible = false;
		Observe_Library->Visible = false;
		search->Visible = false;
		// diaplay object in scene
		Library_To_IntersectionRight->Visible = true;
		Library_To_IntersectionLeft->Visible = true;
		Go_In_Library->Visible = true;
	}
	void initialize(void) {
		menu->Image = gcnew Bitmap(gcnew System::String(back_ground.get_path()));
	}
	private: System::Void backpack_item_listView_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		// main
		if (system_counter == 0)
		{
			initialize();
		}
		system_counter++;
	}
	private: System::Void status_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void dialog_text_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void manual_text_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Ask_Wagain_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "嗯~這裡是這個城鎮的士兵宿舍，請不要去打擾他們”瓦格恩愣了一下後說道，他似乎沒有想過你會問這個問題。";
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
};
}
