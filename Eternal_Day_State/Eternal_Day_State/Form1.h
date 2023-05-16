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
			this->backpack_panel->SuspendLayout();
			this->status_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// start
			// 
			this->start->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->start->Location = System::Drawing::Point(756, 565);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(134, 46);
			this->start->TabIndex = 0;
			this->start->Text = L"START";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &Form1::start_Click);
			// 
			// manual
			// 
			this->manual->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->manual->Location = System::Drawing::Point(344, 565);
			this->manual->Name = L"manual";
			this->manual->Size = System::Drawing::Size(161, 46);
			this->manual->TabIndex = 1;
			this->manual->Text = L"MANUAL";
			this->manual->UseVisualStyleBackColor = true;
			this->manual->Click += gcnew System::EventHandler(this, &Form1::manual_Click);
			// 
			// manual_text
			// 
			this->manual_text->Location = System::Drawing::Point(-13, 0);
			this->manual_text->Multiline = true;
			this->manual_text->Name = L"manual_text";
			this->manual_text->ReadOnly = true;
			this->manual_text->Size = System::Drawing::Size(1201, 530);
			this->manual_text->TabIndex = 2;
			this->manual_text->Text = L"�ڬO�����Ѫ���r�C����Х�\\r\\n";
			this->manual_text->Visible = false;
			// 
			// back_to_home
			// 
			this->back_to_home->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_to_home->Location = System::Drawing::Point(292, 565);
			this->back_to_home->Name = L"back_to_home";
			this->back_to_home->Size = System::Drawing::Size(252, 45);
			this->back_to_home->TabIndex = 3;
			this->back_to_home->Text = L"Back to Home";
			this->back_to_home->UseVisualStyleBackColor = true;
			this->back_to_home->Visible = false;
			this->back_to_home->Click += gcnew System::EventHandler(this, &Form1::back_to_home_Click);
			// 
			// Game_title
			// 
			this->Game_title->AutoSize = true;
			this->Game_title->Font = (gcnew System::Drawing::Font(L"�з���", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Game_title->Location = System::Drawing::Point(340, 233);
			this->Game_title->Name = L"Game_title";
			this->Game_title->Size = System::Drawing::Size(525, 96);
			this->Game_title->TabIndex = 4;
			this->Game_title->Text = L"�ñޫ����y";
			// 
			// archaeologist_button
			// 
			this->archaeologist_button->Font = (gcnew System::Drawing::Font(L"�з���", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->archaeologist_button->Location = System::Drawing::Point(267, 378);
			this->archaeologist_button->Name = L"archaeologist_button";
			this->archaeologist_button->Size = System::Drawing::Size(142, 54);
			this->archaeologist_button->TabIndex = 5;
			this->archaeologist_button->Text = L"�ҥj�Ǯa";
			this->archaeologist_button->UseVisualStyleBackColor = true;
			this->archaeologist_button->Visible = false;
			this->archaeologist_button->Click += gcnew System::EventHandler(this, &Form1::archaeologist_button_Click);
			// 
			// reporter_button
			// 
			this->reporter_button->Font = (gcnew System::Drawing::Font(L"�з���", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->reporter_button->Location = System::Drawing::Point(788, 378);
			this->reporter_button->Name = L"reporter_button";
			this->reporter_button->Size = System::Drawing::Size(143, 54);
			this->reporter_button->TabIndex = 6;
			this->reporter_button->Text = L"�O��";
			this->reporter_button->UseVisualStyleBackColor = true;
			this->reporter_button->Visible = false;
			this->reporter_button->Click += gcnew System::EventHandler(this, &Form1::reporter_button_Click);
			// 
			// occultist_button
			// 
			this->occultist_button->Font = (gcnew System::Drawing::Font(L"�з���", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->occultist_button->Location = System::Drawing::Point(526, 378);
			this->occultist_button->Name = L"occultist_button";
			this->occultist_button->Size = System::Drawing::Size(143, 54);
			this->occultist_button->TabIndex = 7;
			this->occultist_button->Text = L"�����Ǯa";
			this->occultist_button->UseVisualStyleBackColor = true;
			this->occultist_button->Visible = false;
			this->occultist_button->Click += gcnew System::EventHandler(this, &Form1::occultist_button_Click);
			// 
			// chose_character_text
			// 
			this->chose_character_text->AutoSize = true;
			this->chose_character_text->Font = (gcnew System::Drawing::Font(L"�з���", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->chose_character_text->Location = System::Drawing::Point(212, 233);
			this->chose_character_text->Name = L"chose_character_text";
			this->chose_character_text->Size = System::Drawing::Size(719, 96);
			this->chose_character_text->TabIndex = 8;
			this->chose_character_text->Text = L"�п�ܶ}������";
			this->chose_character_text->Visible = false;
			// 
			// backpack
			// 
			this->backpack->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->backpack->Font = (gcnew System::Drawing::Font(L"�з���", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->backpack->Location = System::Drawing::Point(1021, 63);
			this->backpack->Name = L"backpack";
			this->backpack->Size = System::Drawing::Size(180, 72);
			this->backpack->TabIndex = 9;
			this->backpack->Text = L"�I�]";
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
			this->backpack_panel->Location = System::Drawing::Point(-1, 536);
			this->backpack_panel->Name = L"backpack_panel";
			this->backpack_panel->Size = System::Drawing::Size(1201, 138);
			this->backpack_panel->TabIndex = 10;
			this->backpack_panel->Visible = false;
			// 
			// continue_button
			// 
			this->continue_button->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->continue_button->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->continue_button->Location = System::Drawing::Point(1021, 3);
			this->continue_button->Name = L"continue_button";
			this->continue_button->Size = System::Drawing::Size(183, 58);
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
			this->san_check_button->Location = System::Drawing::Point(1021, 3);
			this->san_check_button->Name = L"san_check_button";
			this->san_check_button->Size = System::Drawing::Size(183, 58);
			this->san_check_button->TabIndex = 13;
			this->san_check_button->Text = L"San Check";
			this->san_check_button->UseVisualStyleBackColor = false;
			this->san_check_button->Visible = false;
			this->san_check_button->Click += gcnew System::EventHandler(this, &Form1::san_check_button_Click);
			// 
			// dialog_text
			// 
			this->dialog_text->Enabled = false;
			this->dialog_text->Location = System::Drawing::Point(3, 3);
			this->dialog_text->Multiline = true;
			this->dialog_text->Name = L"dialog_text";
			this->dialog_text->Size = System::Drawing::Size(1019, 132);
			this->dialog_text->TabIndex = 12;
			this->dialog_text->Visible = false;
			// 
			// character_name
			// 
			this->character_name->AutoSize = true;
			this->character_name->Font = (gcnew System::Drawing::Font(L"�з���", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->character_name->Location = System::Drawing::Point(6, 40);
			this->character_name->Name = L"character_name";
			this->character_name->Size = System::Drawing::Size(185, 24);
			this->character_name->TabIndex = 1;
			this->character_name->Text = L"��ܪ�����¾�~";
			this->character_name->Visible = false;
			// 
			// status_panel
			// 
			this->status_panel->Controls->Add(this->player_power_text);
			this->status_panel->Controls->Add(this->STR);
			this->status_panel->Controls->Add(this->character_name);
			this->status_panel->Location = System::Drawing::Point(-1, 0);
			this->status_panel->Name = L"status_panel";
			this->status_panel->Size = System::Drawing::Size(1201, 76);
			this->status_panel->TabIndex = 11;
			this->status_panel->Visible = false;
			// 
			// player_power_text
			// 
			this->player_power_text->AutoSize = true;
			this->player_power_text->Font = (gcnew System::Drawing::Font(L"�з���", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->player_power_text->Location = System::Drawing::Point(6, 7);
			this->player_power_text->Name = L"player_power_text";
			this->player_power_text->Size = System::Drawing::Size(148, 24);
			this->player_power_text->TabIndex = 2;
			this->player_power_text->Text = L"�����O��:";
			this->player_power_text->Visible = false;
			// 
			// STR
			// 
			this->STR->AutoSize = true;
			this->STR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->STR->Location = System::Drawing::Point(170, 5);
			this->STR->Name = L"STR";
			this->STR->Size = System::Drawing::Size(57, 26);
			this->STR->TabIndex = 0;
			this->STR->Text = L"STR";
			this->STR->Visible = false;
			// 
			// introduction_textBox
			// 
			this->introduction_textBox->BackColor = System::Drawing::SystemColors::Info;
			this->introduction_textBox->Enabled = false;
			this->introduction_textBox->Location = System::Drawing::Point(2, 78);
			this->introduction_textBox->Multiline = true;
			this->introduction_textBox->Name = L"introduction_textBox";
			this->introduction_textBox->Size = System::Drawing::Size(1198, 455);
			this->introduction_textBox->TabIndex = 12;
			this->introduction_textBox->Visible = false;
			// 
			// signpost
			// 
			this->signpost->Location = System::Drawing::Point(63, 220);
			this->signpost->Name = L"signpost";
			this->signpost->Size = System::Drawing::Size(127, 59);
			this->signpost->TabIndex = 13;
			this->signpost->Text = L"����";
			this->signpost->UseVisualStyleBackColor = true;
			this->signpost->Visible = false;
			this->signpost->Click += gcnew System::EventHandler(this, &Form1::signpost_Click);
			// 
			// sundial
			// 
			this->sundial->Location = System::Drawing::Point(228, 220);
			this->sundial->Name = L"sundial";
			this->sundial->Size = System::Drawing::Size(127, 59);
			this->sundial->TabIndex = 14;
			this->sundial->Text = L"�鴾";
			this->sundial->UseVisualStyleBackColor = true;
			this->sundial->Visible = false;
			this->sundial->Click += gcnew System::EventHandler(this, &Form1::sundial_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1200, 675);
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
			this->Margin = System::Windows::Forms::Padding(4);
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
		character_name->Text = L"�ҥj�Ǯa";
		dialog_text->Visible = true;
		introduction_textBox->Visible = true;
		dialog_text->Text = "�g���F�o�몺�����ܤ����A���ߤ����ͤF�ǳ\���ߡA�а��@��san check";
		introduction_textBox->Text = "�A�̭��W�F�e���º��h�����C\r\n���H�ۭ����{�L�A�A�̸g�L�s�����s�C�A�̲ר��l���b�F�@�B�H�Q�}�����C���a�C\r\n�u��F�C�v�q�����A�u�A�̥i�H�h��񱴯��F�A����N�O�o�����X�g���a��F�C�v\r\n�A�̶i�J��ݨ�F�J�f�k�����ۤ@��u�\�A�A�������ݨ�u�\�Ŭ}�������{�X�F�@�\�ե��A�A�P�츣�l�@�}�w�t�A�Y�U�o���I���A���W�F�����C�A�Pı���U�@���V�P�A�ϩ��ΤF�Ӥ[�j�ڪ���@��A�A�A���C�}������A�A�o�{�P�A�@�_�Ӫ��έ��̤]���b�A�����S�X�F�g�������C\r\n�A�̨��W�諸��A���A�O�e�Ӯɪ���A�A�ӬO����j�Ѫ��ʥ���A�A�N�F�N�¡A�A�o�{�A���W�����~�������F�A�ѤU���O�@�ǧA�u�b�ժ��]���L���j���~�C";
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
		character_name->Text = L"�����Ǯa";
		dialog_text->Visible = true;
		introduction_textBox->Visible = true;
		dialog_text->Text = "�g���F�o�몺�����ܤ����A���ߤ����ͤF�ǳ\���ߡA�а��@��san check";
		introduction_textBox->Text = "�A�̭��W�F�e���º��h�����C\r\n���H�ۭ����{�L�A�A�̸g�L�s�����s�C�A�̲ר��l���b�F�@�B�H�Q�}�����C���a�C\r\n�u��F�C�v�q�����A�u�A�̥i�H�h��񱴯��F�A����N�O�o�����X�g���a��F�C�v\r\n�A�̶i�J��ݨ�F�J�f�k�����ۤ@��u�\�A�A�������ݨ�u�\�Ŭ}�������{�X�F�@�\�ե��A�A�P�츣�l�@�}�w�t�A�Y�U�o���I���A���W�F�����C�A�Pı���U�@���V�P�A�ϩ��ΤF�Ӥ[�j�ڪ���@��A�A�A���C�}������A�A�o�{�P�A�@�_�Ӫ��έ��̤]���b�A�����S�X�F�g�������C\r\n�A�̨��W�諸��A���A�O�e�Ӯɪ���A�A�ӬO����j�Ѫ��ʥ���A�A�N�F�N�¡A�A�o�{�A���W�����~�������F�A�ѤU���O�@�ǧA�u�b�ժ��]���L���j���~�C";
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
		character_name->Text = L"�O��";
		dialog_text->Visible = true;
		introduction_textBox->Visible = true;
		dialog_text->Text = "�g���F�o�몺�����ܤ����A���ߤ����ͤF�ǳ\���ߡA�а��@��san check";
		introduction_textBox->Text = "�A�̭��W�F�e���º��h�����C\r\n���H�ۭ����{�L�A�A�̸g�L�s�����s�C�A�̲ר��l���b�F�@�B�H�Q�}�����C���a�C\r\n�u��F�C�v�q�����A�u�A�̥i�H�h��񱴯��F�A����N�O�o�����X�g���a��F�C�v\r\n�A�̶i�J��ݨ�F�J�f�k�����ۤ@��u�\�A�A�������ݨ�u�\�Ŭ}�������{�X�F�@�\�ե��A�A�P�츣�l�@�}�w�t�A�Y�U�o���I���A���W�F�����C�A�Pı���U�@���V�P�A�ϩ��ΤF�Ӥ[�j�ڪ���@��A�A�A���C�}������A�A�o�{�P�A�@�_�Ӫ��έ��̤]���b�A�����S�X�F�g�������C\r\n�A�̨��W�諸��A���A�O�e�Ӯɪ���A�A�ӬO����j�Ѫ��ʥ���A�A�N�F�N�¡A�A�o�{�A���W�����~�������F�A�ѤU���O�@�ǧA�u�b�ժ��]���L���j���~�C";
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
		dialog_text->Text = "�o�Ӥ諬�s�����R���۩��G�������A���H�P��ŷx�ξA�C\r\n�b�s���������A���ߵۤ@�Ӱ��j���鴾�M�Q�u�A�L�̩P��شӵۦU�ت�c�M��ӡA���s���W�K�F�ͮ�M��m�C\r\n�s���W�\��ۤ@�Ʊƪ��ȡA�i�H���H�p������C\r\n�s������t���ۤ@�ڤ�s�����СA��ӽb�Y���O���ۼs���ߤG������q���C";
		//adjust backpack size
	}
	private: System::Void continue_button_Click(System::Object^ sender, System::EventArgs^ e) {
		//continue button 
		if (continue_button_count == 0) {
			dialog_text->Text = "�N�b�A�٦b�ôb�ɡA��M��ť��F�@�n�u�A�̴N�O�o�����ȫȧa�A��ڨӡv�C\r\n�Ať�X�o���G�O�j�^�y�A���A�o��������z�ѥL���N��A�A�P��Q����Y�A�s���_���_���o�ͤϦ����A���ب��Ǥ��Ǫ��Pı�C\r\n�A�J�Ӫ��[��|�P�ؿv�M����(�Q�ʾ��v�ǧP�w)";
			//�Q�ʾ��v�ǧP�w(�p�X)
			continue_button_count = continue_button_count + 1;
		}
		else if (continue_button_count == 1) {
			//�ثe�u�����\
			dialog_text->Text = "�A�o�{�o�ǫؿv�O�^�꤭�@���A�]�N�O�ȷ���ɴ����ؿv����C";
			continue_button_count = continue_button_count + 1;
		}
		else if (continue_button_count == 2) {
			dialog_text->Text = "�ˮ殦:\r\n�w��Ө�ñޫ��A�ڥs�ˮ殦�A�O�A�̪��ɹC�C\r\n�o�̬O�ձ޼s���A�O���������𶢰ϰ�A���ߪ��鴾�O�ѫ����u�K�̥γ̺맮���u����O�ƭӤ�ҧ������u���~�A�]�O���}���ߤ@���鴾�C\r\n�p�Gı�o���߯h�ª��ܡA�ګܱ��˧A�ӳo�̧��b���ȤW�Y���X�鸨�C";
			continue_button_count = continue_button_count + 1;
		}
		else {
			continue_button->Visible = false;
			//display object in scene
			signpost->Visible = true;
			sundial->Visible = true;
		}
	}
	private: System::Void signpost_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "���ФW�������b�Y�W�g�ۼw��������B�\�U�A�ө��k���b�Y�W�g�ۮȩ��C";
	}
	private: System::Void sundial_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog_text->Text = "�o�O�ӥb�|�����T��|���ت��鴾�A�O�Υۮưt�X�۵��R���u���J��Ӧ��A�ݰ_�ӫD�`�����[�A���ؤڬ��J�������A�{�b�鴾���w�����v���b���ɶ����r�W�C";
	}
};
}
