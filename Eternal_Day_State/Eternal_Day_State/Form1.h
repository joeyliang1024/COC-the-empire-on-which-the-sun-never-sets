#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "data_format.h"
#include "scene.h"
#include "characters.h"
#include "battle.h"
#include "roll.h"
int continue_button_count = 0;
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
	private: System::Windows::Forms::Label^ Game_title;
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

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->start = (gcnew System::Windows::Forms::Button());
			this->manual = (gcnew System::Windows::Forms::Button());
			this->manual_text = (gcnew System::Windows::Forms::TextBox());
			this->back_to_home = (gcnew System::Windows::Forms::Button());
			this->Game_title = (gcnew System::Windows::Forms::Label());
			this->archaeologist_button = (gcnew System::Windows::Forms::Button());
			this->reporter_button = (gcnew System::Windows::Forms::Button());
			this->occultist_button = (gcnew System::Windows::Forms::Button());
			this->chose_character_text = (gcnew System::Windows::Forms::Label());
			this->backpack = (gcnew System::Windows::Forms::Button());
			this->backpack_panel = (gcnew System::Windows::Forms::Panel());
			this->continue_button = (gcnew System::Windows::Forms::Button());
			this->san_check_button = (gcnew System::Windows::Forms::Button());
			this->dialog_text = (gcnew System::Windows::Forms::TextBox());
			this->character_name = (gcnew System::Windows::Forms::Label());
			this->status_panel = (gcnew System::Windows::Forms::Panel());
			this->player_power_text = (gcnew System::Windows::Forms::Label());
			this->STR = (gcnew System::Windows::Forms::Label());
			this->introduction_textBox = (gcnew System::Windows::Forms::TextBox());
			this->signpost = (gcnew System::Windows::Forms::Button());
			this->sundial = (gcnew System::Windows::Forms::Button());
			this->Plazza_To_Inn = (gcnew System::Windows::Forms::Button());
			this->Plazza_To_Prison = (gcnew System::Windows::Forms::Button());
			this->Go_In_Inn = (gcnew System::Windows::Forms::Button());
			this->Go_Out_Inn = (gcnew System::Windows::Forms::Button());
			this->Go_In_Room = (gcnew System::Windows::Forms::Button());
			this->Go_Out_Room = (gcnew System::Windows::Forms::Button());
			this->Inn_To_Plazza = (gcnew System::Windows::Forms::Button());
			this->Inn_To_Market = (gcnew System::Windows::Forms::Button());
			this->Market_To_Restaurant = (gcnew System::Windows::Forms::Button());
			this->Market_To_Inn = (gcnew System::Windows::Forms::Button());
			this->Restaurant_To_Market = (gcnew System::Windows::Forms::Button());
			this->Restaurant_To_Prison = (gcnew System::Windows::Forms::Button());
			this->Prison_To_Restaurant = (gcnew System::Windows::Forms::Button());
			this->Prison_To_Plazza = (gcnew System::Windows::Forms::Button());
			this->backpack_panel->SuspendLayout();
			this->status_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// start
			// 
			this->start->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->start->Location = System::Drawing::Point(465, 353);
			this->start->Margin = System::Windows::Forms::Padding(2);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(82, 29);
			this->start->TabIndex = 0;
			this->start->Text = L"START";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &Form1::start_Click);
			// 
			// manual
			// 
			this->manual->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->manual->Location = System::Drawing::Point(212, 353);
			this->manual->Margin = System::Windows::Forms::Padding(2);
			this->manual->Name = L"manual";
			this->manual->Size = System::Drawing::Size(99, 29);
			this->manual->TabIndex = 1;
			this->manual->Text = L"MANUAL";
			this->manual->UseVisualStyleBackColor = true;
			this->manual->Click += gcnew System::EventHandler(this, &Form1::manual_Click);
			// 
			// manual_text
			// 
			this->manual_text->Location = System::Drawing::Point(-8, 0);
			this->manual_text->Margin = System::Windows::Forms::Padding(2);
			this->manual_text->Multiline = true;
			this->manual_text->Name = L"manual_text";
			this->manual_text->ReadOnly = true;
			this->manual_text->Size = System::Drawing::Size(741, 333);
			this->manual_text->TabIndex = 2;
			this->manual_text->Text = L"我是說明書的文字。換行請打\\r\\n";
			this->manual_text->Visible = false;
			// 
			// back_to_home
			// 
			this->back_to_home->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_to_home->Location = System::Drawing::Point(180, 353);
			this->back_to_home->Margin = System::Windows::Forms::Padding(2);
			this->back_to_home->Name = L"back_to_home";
			this->back_to_home->Size = System::Drawing::Size(155, 28);
			this->back_to_home->TabIndex = 3;
			this->back_to_home->Text = L"Back to Home";
			this->back_to_home->UseVisualStyleBackColor = true;
			this->back_to_home->Visible = false;
			this->back_to_home->Click += gcnew System::EventHandler(this, &Form1::back_to_home_Click);
			// 
			// Game_title
			// 
			this->Game_title->AutoSize = true;
			this->Game_title->Font = (gcnew System::Drawing::Font(L"標楷體", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Game_title->Location = System::Drawing::Point(209, 146);
			this->Game_title->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Game_title->Name = L"Game_title";
			this->Game_title->Size = System::Drawing::Size(330, 60);
			this->Game_title->TabIndex = 4;
			this->Game_title->Text = L"永晝城物語";
			// 
			// archaeologist_button
			// 
			this->archaeologist_button->Font = (gcnew System::Drawing::Font(L"標楷體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->archaeologist_button->Location = System::Drawing::Point(164, 236);
			this->archaeologist_button->Margin = System::Windows::Forms::Padding(2);
			this->archaeologist_button->Name = L"archaeologist_button";
			this->archaeologist_button->Size = System::Drawing::Size(87, 34);
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
			this->reporter_button->Location = System::Drawing::Point(485, 236);
			this->reporter_button->Margin = System::Windows::Forms::Padding(2);
			this->reporter_button->Name = L"reporter_button";
			this->reporter_button->Size = System::Drawing::Size(88, 34);
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
			this->occultist_button->Location = System::Drawing::Point(324, 236);
			this->occultist_button->Margin = System::Windows::Forms::Padding(2);
			this->occultist_button->Name = L"occultist_button";
			this->occultist_button->Size = System::Drawing::Size(88, 34);
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
			this->chose_character_text->Location = System::Drawing::Point(130, 146);
			this->chose_character_text->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->chose_character_text->Name = L"chose_character_text";
			this->chose_character_text->Size = System::Drawing::Size(452, 60);
			this->chose_character_text->TabIndex = 8;
			this->chose_character_text->Text = L"請選擇開局角色";
			this->chose_character_text->Visible = false;
			// 
			// backpack
			// 
			this->backpack->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->backpack->Font = (gcnew System::Drawing::Font(L"標楷體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->backpack->Location = System::Drawing::Point(628, 39);
			this->backpack->Margin = System::Windows::Forms::Padding(2);
			this->backpack->Name = L"backpack";
			this->backpack->Size = System::Drawing::Size(111, 45);
			this->backpack->TabIndex = 9;
			this->backpack->Text = L"背包";
			this->backpack->UseVisualStyleBackColor = false;
			this->backpack->Visible = false;
			this->backpack->Click += gcnew System::EventHandler(this, &Form1::backpack_Click);
			// 
			// backpack_panel
			// 
			this->backpack_panel->Controls->Add(this->continue_button);
			this->backpack_panel->Controls->Add(this->san_check_button);
			this->backpack_panel->Controls->Add(this->dialog_text);
			this->backpack_panel->Controls->Add(this->backpack);
			this->backpack_panel->Location = System::Drawing::Point(-1, 335);
			this->backpack_panel->Margin = System::Windows::Forms::Padding(2);
			this->backpack_panel->Name = L"backpack_panel";
			this->backpack_panel->Size = System::Drawing::Size(739, 86);
			this->backpack_panel->TabIndex = 10;
			this->backpack_panel->Visible = false;
			// 
			// continue_button
			// 
			this->continue_button->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->continue_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->continue_button->Location = System::Drawing::Point(628, 2);
			this->continue_button->Margin = System::Windows::Forms::Padding(2);
			this->continue_button->Name = L"continue_button";
			this->continue_button->Size = System::Drawing::Size(113, 36);
			this->continue_button->TabIndex = 14;
			this->continue_button->Text = L"Continue";
			this->continue_button->UseVisualStyleBackColor = false;
			this->continue_button->Visible = false;
			this->continue_button->Click += gcnew System::EventHandler(this, &Form1::continue_button_Click);
			// 
			// san_check_button
			// 
			this->san_check_button->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->san_check_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->san_check_button->Location = System::Drawing::Point(628, 2);
			this->san_check_button->Margin = System::Windows::Forms::Padding(2);
			this->san_check_button->Name = L"san_check_button";
			this->san_check_button->Size = System::Drawing::Size(113, 36);
			this->san_check_button->TabIndex = 13;
			this->san_check_button->Text = L"San Check";
			this->san_check_button->UseVisualStyleBackColor = false;
			this->san_check_button->Visible = false;
			this->san_check_button->Click += gcnew System::EventHandler(this, &Form1::san_check_button_Click);
			// 
			// dialog_text
			// 
			this->dialog_text->Enabled = false;
			this->dialog_text->Location = System::Drawing::Point(2, 2);
			this->dialog_text->Margin = System::Windows::Forms::Padding(2);
			this->dialog_text->Multiline = true;
			this->dialog_text->Name = L"dialog_text";
			this->dialog_text->Size = System::Drawing::Size(629, 84);
			this->dialog_text->TabIndex = 12;
			this->dialog_text->Visible = false;
			// 
			// character_name
			// 
			this->character_name->AutoSize = true;
			this->character_name->Font = (gcnew System::Drawing::Font(L"標楷體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->character_name->Location = System::Drawing::Point(4, 25);
			this->character_name->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->character_name->Name = L"character_name";
			this->character_name->Size = System::Drawing::Size(126, 15);
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
			this->status_panel->Margin = System::Windows::Forms::Padding(2);
			this->status_panel->Name = L"status_panel";
			this->status_panel->Size = System::Drawing::Size(739, 48);
			this->status_panel->TabIndex = 11;
			this->status_panel->Visible = false;
			// 
			// player_power_text
			// 
			this->player_power_text->AutoSize = true;
			this->player_power_text->Font = (gcnew System::Drawing::Font(L"標楷體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->player_power_text->Location = System::Drawing::Point(4, 4);
			this->player_power_text->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->player_power_text->Name = L"player_power_text";
			this->player_power_text->Size = System::Drawing::Size(101, 15);
			this->player_power_text->TabIndex = 2;
			this->player_power_text->Text = L"角色能力值:";
			this->player_power_text->Visible = false;
			// 
			// STR
			// 
			this->STR->AutoSize = true;
			this->STR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->STR->Location = System::Drawing::Point(105, 3);
			this->STR->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->STR->Name = L"STR";
			this->STR->Size = System::Drawing::Size(37, 17);
			this->STR->TabIndex = 0;
			this->STR->Text = L"STR";
			this->STR->Visible = false;
			// 
			// introduction_textBox
			// 
			this->introduction_textBox->BackColor = System::Drawing::SystemColors::Info;
			this->introduction_textBox->Enabled = false;
			this->introduction_textBox->Location = System::Drawing::Point(1, 49);
			this->introduction_textBox->Margin = System::Windows::Forms::Padding(2);
			this->introduction_textBox->Multiline = true;
			this->introduction_textBox->Name = L"introduction_textBox";
			this->introduction_textBox->Size = System::Drawing::Size(739, 286);
			this->introduction_textBox->TabIndex = 12;
			this->introduction_textBox->Visible = false;
			// 
			// signpost
			// 
			this->signpost->Location = System::Drawing::Point(257, 169);
			this->signpost->Margin = System::Windows::Forms::Padding(2);
			this->signpost->Name = L"signpost";
			this->signpost->Size = System::Drawing::Size(78, 37);
			this->signpost->TabIndex = 13;
			this->signpost->Text = L"路標";
			this->signpost->UseVisualStyleBackColor = true;
			this->signpost->Visible = false;
			this->signpost->Click += gcnew System::EventHandler(this, &Form1::signpost_Click);
			// 
			// sundial
			// 
			this->sundial->Location = System::Drawing::Point(375, 169);
			this->sundial->Margin = System::Windows::Forms::Padding(2);
			this->sundial->Name = L"sundial";
			this->sundial->Size = System::Drawing::Size(78, 37);
			this->sundial->TabIndex = 14;
			this->sundial->Text = L"日晷";
			this->sundial->UseVisualStyleBackColor = true;
			this->sundial->Visible = false;
			this->sundial->Click += gcnew System::EventHandler(this, &Form1::sundial_Click);
			// 
			// Plazza_To_Inn
			// 
			this->Plazza_To_Inn->Location = System::Drawing::Point(648, 169);
			this->Plazza_To_Inn->Name = L"Plazza_To_Inn";
			this->Plazza_To_Inn->Size = System::Drawing::Size(78, 37);
			this->Plazza_To_Inn->TabIndex = 15;
			this->Plazza_To_Inn->Text = L"往右";
			this->Plazza_To_Inn->UseVisualStyleBackColor = true;
			this->Plazza_To_Inn->Visible = false;
			this->Plazza_To_Inn->Click += gcnew System::EventHandler(this, &Form1::Plazza_To_Inn_Click);
			// 
			// Plazza_To_Prison
			// 
			this->Plazza_To_Prison->Location = System::Drawing::Point(12, 169);
			this->Plazza_To_Prison->Name = L"Plazza_To_Prison";
			this->Plazza_To_Prison->Size = System::Drawing::Size(78, 37);
			this->Plazza_To_Prison->TabIndex = 16;
			this->Plazza_To_Prison->Text = L"往左";
			this->Plazza_To_Prison->UseVisualStyleBackColor = true;
			this->Plazza_To_Prison->Visible = false;
			this->Plazza_To_Prison->Click += gcnew System::EventHandler(this, &Form1::Plazza_To_Prison_Click);
			// 
			// Go_In_Inn
			// 
			this->Go_In_Inn->Location = System::Drawing::Point(257, 211);
			this->Go_In_Inn->Name = L"Go_In_Inn";
			this->Go_In_Inn->Size = System::Drawing::Size(78, 37);
			this->Go_In_Inn->TabIndex = 17;
			this->Go_In_Inn->Text = L"進旅館";
			this->Go_In_Inn->UseVisualStyleBackColor = true;
			this->Go_In_Inn->Visible = false;
			this->Go_In_Inn->Click += gcnew System::EventHandler(this, &Form1::Go_In_Inn_Click);
			// 
			// Go_Out_Inn
			// 
			this->Go_Out_Inn->Location = System::Drawing::Point(257, 127);
			this->Go_Out_Inn->Name = L"Go_Out_Inn";
			this->Go_Out_Inn->Size = System::Drawing::Size(78, 37);
			this->Go_Out_Inn->TabIndex = 18;
			this->Go_Out_Inn->Text = L"出旅館";
			this->Go_Out_Inn->UseVisualStyleBackColor = true;
			this->Go_Out_Inn->Visible = false;
			this->Go_Out_Inn->Click += gcnew System::EventHandler(this, &Form1::Go_Out_Inn_Click);
			// 
			// Go_In_Room
			// 
			this->Go_In_Room->Location = System::Drawing::Point(375, 127);
			this->Go_In_Room->Name = L"Go_In_Room";
			this->Go_In_Room->Size = System::Drawing::Size(78, 37);
			this->Go_In_Room->TabIndex = 19;
			this->Go_In_Room->Text = L"進房間";
			this->Go_In_Room->UseVisualStyleBackColor = true;
			this->Go_In_Room->Visible = false;
			this->Go_In_Room->Click += gcnew System::EventHandler(this, &Form1::Go_In_Room_Click);
			// 
			// Go_Out_Room
			// 
			this->Go_Out_Room->Location = System::Drawing::Point(375, 211);
			this->Go_Out_Room->Name = L"Go_Out_Room";
			this->Go_Out_Room->Size = System::Drawing::Size(78, 37);
			this->Go_Out_Room->TabIndex = 20;
			this->Go_Out_Room->Text = L"出房間";
			this->Go_Out_Room->UseVisualStyleBackColor = true;
			this->Go_Out_Room->Visible = false;
			this->Go_Out_Room->Click += gcnew System::EventHandler(this, &Form1::Go_Out_Room_Click);
			// 
			// Inn_To_Plazza
			// 
			this->Inn_To_Plazza->Location = System::Drawing::Point(240, 275);
			this->Inn_To_Plazza->Name = L"Inn_To_Plazza";
			this->Inn_To_Plazza->Size = System::Drawing::Size(78, 37);
			this->Inn_To_Plazza->TabIndex = 21;
			this->Inn_To_Plazza->Text = L"往後走";
			this->Inn_To_Plazza->UseVisualStyleBackColor = true;
			this->Inn_To_Plazza->Visible = false;
			this->Inn_To_Plazza->Click += gcnew System::EventHandler(this, &Form1::Inn_To_Plazza_Click);
			// 
			// Inn_To_Market
			// 
			this->Inn_To_Market->Location = System::Drawing::Point(648, 84);
			this->Inn_To_Market->Name = L"Inn_To_Market";
			this->Inn_To_Market->Size = System::Drawing::Size(78, 37);
			this->Inn_To_Market->TabIndex = 22;
			this->Inn_To_Market->Text = L"往右";
			this->Inn_To_Market->UseVisualStyleBackColor = true;
			this->Inn_To_Market->Visible = false;
			this->Inn_To_Market->Click += gcnew System::EventHandler(this, &Form1::Inn_To_Market_Click);
			// 
			// Market_To_Restaurant
			// 
			this->Market_To_Restaurant->Location = System::Drawing::Point(648, 127);
			this->Market_To_Restaurant->Name = L"Market_To_Restaurant";
			this->Market_To_Restaurant->Size = System::Drawing::Size(78, 37);
			this->Market_To_Restaurant->TabIndex = 23;
			this->Market_To_Restaurant->Text = L"往右";
			this->Market_To_Restaurant->UseVisualStyleBackColor = true;
			this->Market_To_Restaurant->Visible = false;
			this->Market_To_Restaurant->Click += gcnew System::EventHandler(this, &Form1::Market_To_Restaurant_Click);
			// 
			// Market_To_Inn
			// 
			this->Market_To_Inn->Location = System::Drawing::Point(12, 126);
			this->Market_To_Inn->Name = L"Market_To_Inn";
			this->Market_To_Inn->Size = System::Drawing::Size(78, 37);
			this->Market_To_Inn->TabIndex = 24;
			this->Market_To_Inn->Text = L"往左";
			this->Market_To_Inn->UseVisualStyleBackColor = true;
			this->Market_To_Inn->Visible = false;
			this->Market_To_Inn->Click += gcnew System::EventHandler(this, &Form1::Market_To_Inn_Click);
			// 
			// Restaurant_To_Market
			// 
			this->Restaurant_To_Market->Location = System::Drawing::Point(12, 211);
			this->Restaurant_To_Market->Name = L"Restaurant_To_Market";
			this->Restaurant_To_Market->Size = System::Drawing::Size(78, 37);
			this->Restaurant_To_Market->TabIndex = 25;
			this->Restaurant_To_Market->Text = L"往左";
			this->Restaurant_To_Market->UseVisualStyleBackColor = true;
			this->Restaurant_To_Market->Visible = false;
			this->Restaurant_To_Market->Click += gcnew System::EventHandler(this, &Form1::Restaurant_To_Market_Click);
			// 
			// Restaurant_To_Prison
			// 
			this->Restaurant_To_Prison->Location = System::Drawing::Point(324, 275);
			this->Restaurant_To_Prison->Name = L"Restaurant_To_Prison";
			this->Restaurant_To_Prison->Size = System::Drawing::Size(78, 37);
			this->Restaurant_To_Prison->TabIndex = 26;
			this->Restaurant_To_Prison->Text = L"往後走";
			this->Restaurant_To_Prison->UseVisualStyleBackColor = true;
			this->Restaurant_To_Prison->Visible = false;
			this->Restaurant_To_Prison->Click += gcnew System::EventHandler(this, &Form1::Restaurant_To_Prison_Click);
			// 
			// Prison_To_Restaurant
			// 
			this->Prison_To_Restaurant->Location = System::Drawing::Point(12, 83);
			this->Prison_To_Restaurant->Name = L"Prison_To_Restaurant";
			this->Prison_To_Restaurant->Size = System::Drawing::Size(78, 37);
			this->Prison_To_Restaurant->TabIndex = 27;
			this->Prison_To_Restaurant->Text = L"往左";
			this->Prison_To_Restaurant->UseVisualStyleBackColor = true;
			this->Prison_To_Restaurant->Visible = false;
			this->Prison_To_Restaurant->Click += gcnew System::EventHandler(this, &Form1::Prison_To_Restaurant_Click);
			// 
			// Prison_To_Plazza
			// 
			this->Prison_To_Plazza->Location = System::Drawing::Point(417, 275);
			this->Prison_To_Plazza->Name = L"Prison_To_Plazza";
			this->Prison_To_Plazza->Size = System::Drawing::Size(78, 37);
			this->Prison_To_Plazza->TabIndex = 28;
			this->Prison_To_Plazza->Text = L"往後走";
			this->Prison_To_Plazza->UseVisualStyleBackColor = true;
			this->Prison_To_Plazza->Visible = false;
			this->Prison_To_Plazza->Click += gcnew System::EventHandler(this, &Form1::Prison_To_Plazza_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 422);
			this->Controls->Add(this->Prison_To_Plazza);
			this->Controls->Add(this->Prison_To_Restaurant);
			this->Controls->Add(this->Restaurant_To_Prison);
			this->Controls->Add(this->Restaurant_To_Market);
			this->Controls->Add(this->Market_To_Inn);
			this->Controls->Add(this->Market_To_Restaurant);
			this->Controls->Add(this->Inn_To_Market);
			this->Controls->Add(this->Inn_To_Plazza);
			this->Controls->Add(this->Go_Out_Room);
			this->Controls->Add(this->Go_In_Room);
			this->Controls->Add(this->Go_Out_Inn);
			this->Controls->Add(this->Go_In_Inn);
			this->Controls->Add(this->Plazza_To_Prison);
			this->Controls->Add(this->Plazza_To_Inn);
			this->Controls->Add(this->sundial);
			this->Controls->Add(this->signpost);
			this->Controls->Add(this->introduction_textBox);
			this->Controls->Add(this->status_panel);
			this->Controls->Add(this->backpack_panel);
			this->Controls->Add(this->chose_character_text);
			this->Controls->Add(this->occultist_button);
			this->Controls->Add(this->reporter_button);
			this->Controls->Add(this->archaeologist_button);
			this->Controls->Add(this->Game_title);
			this->Controls->Add(this->back_to_home);
			this->Controls->Add(this->manual_text);
			this->Controls->Add(this->manual);
			this->Controls->Add(this->start);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"COC";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->backpack_panel->ResumeLayout(false);
			this->backpack_panel->PerformLayout();
			this->status_panel->ResumeLayout(false);
			this->status_panel->PerformLayout();
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
		Game_title->Visible = false;

	}
	private: System::Void back_to_home_Click(System::Object^ sender, System::EventArgs^ e) {
		//buttons
		manual->Visible = true;
		manual_text->Visible = false;
		back_to_home->Visible = false;
		//text
		Game_title->Visible = true;
	}
	private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e) {
		//all object visable false
		manual->Visible = false;
		manual_text->Visible = false;
		back_to_home->Visible = false;
		Game_title->Visible = false;
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
		//backpack object display

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
		if (continue_button_count == 0) {
			dialog_text->Text = "就在你還在疑惑時，突然間聽到了一聲「你們就是這次的旅客吧，跟我來」。\r\n你聽出這似乎是古英語，但你卻能夠完全理解他的意思，你感到十分驚訝，連續不斷的奇異發生反而讓你有種見怪不怪的感覺。\r\n你仔細的觀察四周建築和環境(被動歷史學判定)";
			//被動歷史學判定(聯合)
			continue_button_count = continue_button_count + 1;
		}
		else if (continue_button_count == 1) {
			//目前只有成功
			dialog_text->Text = "你發現這些建築是英國五世紀，也就是亞瑟王時期的建築風格。";
			continue_button_count = continue_button_count + 1;
		}
		else if (continue_button_count == 2) {
			dialog_text->Text = "瓦格恩:\r\n歡迎來到永晝城，我叫瓦格恩，是你們的導遊。\r\n這裡是白晝廣場，是城市中的休閒區域，中心的日晷是由城鎮的工匠們用最精妙的工藝花費數個月所完成的工藝品，也是城陣中唯一的日晷。\r\n如果覺得身心疲倦的話，我很推薦你來這裡坐在長椅上欣賞日出日落。";
			continue_button_count = continue_button_count + 1;
		}
		else {
			continue_button->Visible = false;
			//display object in scene
			signpost->Visible = true;
			sundial->Visible = true;
			Plazza_To_Inn->Visible = true;
			Plazza_To_Prison->Visible = true;
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
		// display object in scene
		Inn_To_Plazza->Visible = true;
		Go_In_Inn->Visible = true;
		Inn_To_Market->Visible = true;
	}
	private: System::Void Plazza_To_Prison_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你面前的是一個由石頭砌成的建築，建築有著一扇鐵藝門，看起來十分堅固，在離地約4公尺處有著兩扇玻璃窗戶正對著廣場，門口站著兩位全副武裝的侍衛，在門上方還掛著一塊禁止進入的牌匾。";
		// hide object in scene
		signpost->Visible = false;
		sundial->Visible = false;
		Plazza_To_Inn->Visible = false;
		Plazza_To_Prison->Visible = false;
		// display object in scene
		Prison_To_Restaurant->Visible = true;
		Prison_To_Plazza->Visible = true;
	}
	private: System::Void Go_In_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你進入旅店後，從前方傳來了有氣無力的聲音”住宿一天20銀幣，不提供食物，一天以宏光、烈光時區分，住七天優惠只要一金幣。”你往前看去，那是一個頭髮斑白的老頭，雙手撐著臉，一副要死不活的樣子。";
		// hide object in scene
		Go_In_Inn->Visible = false;
		Inn_To_Plazza->Visible = false;
		Inn_To_Market->Visible = false;
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
		dialog_text->Text = "在你進入旅店後，從前方傳來了有氣無力的聲音”住宿一天20銀幣，不提供食物，一天以宏光、烈光時區分，住七天優惠只要一金幣。”你往前看去，那是一個頭髮斑白的老頭，雙手撐著臉，一副要死不活的樣子。";
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
		// display object in scene
		signpost->Visible = true;
		sundial->Visible = true;
		Plazza_To_Inn->Visible = true;
		Plazza_To_Prison->Visible = true;
	}
	private: System::Void Inn_To_Market_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "市場的街道狹窄而擁擠，滿是雜物，很容易讓人摔倒。市場里擠滿了商販和攤販，他們用各種聲音、手勢和展示方式向你推銷自己的產品。你可以聽到他們高聲地叫賣，介紹自己的貨品，有些商販用樂器演奏著悠揚的音樂，吸引著顧客。";
		// hide object in scene
		Go_In_Inn->Visible = false;
		Inn_To_Plazza->Visible = false;
		Inn_To_Market->Visible = false;
		//display object in scene
		Market_To_Restaurant->Visible = true;
		Market_To_Inn->Visible = true;
	}
	private: System::Void Market_To_Restaurant_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你來到了餐館，餐館外觀看起來是個還算整潔的木製建築，進入餐廳，你發現這裡非常明亮、寬敞。整個空間採用簡約的風格，淺色木質牆壁搭配深色木質地板，一排排的餐桌擺放整齊，讓人感到舒適和放鬆，此時餐廳內(人數)(狀態)，此時你們聽到一個溫和的聲音問到”客官們請問你們想來點甚麼”， 你看向了出聲的人，那是一位長相清秀的獨臂青年，他有著金色的中長髮和祖母綠色的眼眸，他背後的牆壁上掛著菜單。";
		// hide object in scene
		Market_To_Restaurant->Visible = false;
		Market_To_Inn->Visible = false;
		//display object in scene
		Restaurant_To_Market->Visible = true;
		Restaurant_To_Prison->Visible = true;
	}
	private: System::Void Market_To_Inn_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "這棟建築由木材建成，屋頂使用稻草編織而成。建築物的外牆粗糙的由木板和泥土夯實而成，看起來十分堅固，前方設有一個大門，用於進出旅店，大門的外觀簡單而樸實，完美的符合了實用主義的理念。";
		// hide object in scene
		Market_To_Restaurant->Visible = false;
		Market_To_Inn->Visible = false;
		//display object in scene
		Go_In_Inn->Visible = true;
		Inn_To_Plazza->Visible = true;
		Inn_To_Market->Visible = true;
	}
	private: System::Void Restaurant_To_Market_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "市場的街道狹窄而擁擠，滿是雜物，很容易讓人摔倒。市場里擠滿了商販和攤販，他們用各種聲音、手勢和展示方式向你推銷自己的產品。你可以聽到他們高聲地叫賣，介紹自己的貨品，有些商販用樂器演奏著悠揚的音樂，吸引著顧客。";
		// hide object in scene
		Restaurant_To_Market->Visible = false;
		Restaurant_To_Prison->Visible = false;
		// display object in scene
		Market_To_Restaurant->Visible = true;
		Market_To_Inn->Visible = true;
	}
	private: System::Void Restaurant_To_Prison_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "在你面前的是一個由石頭砌成的建築，建築有著一扇鐵藝門，看起來十分堅固，在離地約4公尺處有著兩扇玻璃窗戶正對著廣場，門口站著兩位全副武裝的侍衛，在門上方還掛著一塊禁止進入的牌匾。";
		// hide object in scene
		Restaurant_To_Market->Visible = false;
		Restaurant_To_Prison->Visible = false;
		// display object in scene
		Prison_To_Restaurant->Visible = true;
		Prison_To_Plazza->Visible = true;
	}
	private: System::Void Prison_To_Restaurant_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "你來到了餐館，餐館外觀看起來是個還算整潔的木製建築，進入餐廳，你發現這裡非常明亮、寬敞。整個空間採用簡約的風格，淺色木質牆壁搭配深色木質地板，一排排的餐桌擺放整齊，讓人感到舒適和放鬆，此時餐廳內(人數)(狀態)，此時你們聽到一個溫和的聲音問到”客官們請問你們想來點甚麼”， 你看向了出聲的人，那是一位長相清秀的獨臂青年，他有著金色的中長髮和祖母綠色的眼眸，他背後的牆壁上掛著菜單。";
		// hide object in scene
		Prison_To_Restaurant->Visible = false;
		Prison_To_Plazza->Visible = false;
		// display object in scene
		Restaurant_To_Market->Visible = true;
		Restaurant_To_Prison->Visible = true;
		
	}
	private: System::Void Prison_To_Plazza_Click(System::Object^ sender, System::EventArgs^ e) {
		
		// hide object in scene
		Prison_To_Restaurant->Visible = false;
		Prison_To_Plazza->Visible = false;
		// diaplay object in scene
		signpost->Visible = true;
		sundial->Visible = true;
		Plazza_To_Inn->Visible = true;
		Plazza_To_Prison->Visible = true;
	}
};
}
