//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
 #include "Unit8.h"
#include "Unit5.h"
#include "Unit3.h"
#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "HTMLabel"
#pragma link "AdvEdit"
#pragma link "DBAdvEd"
#pragma link "AdvGlowButton"
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
Form5->Color = (TColor)0x1E1E1E;
Image2->Picture->LoadFromFile("D:\\Документи\\Практика\\arrow.png");
    Edit1->Color = (TColor)0x1E1E1E;
Edit2->Color = (TColor)0x1E1E1E;

}

 void __fastcall TForm5::LoadUserData()
{

	try {
		Form1->ADOQuery1->Close();
		Form1->ADOQuery1->SQL->Text = "SELECT ПІБ, Телефон, Фото FROM Користувачі WHERE Користувач = :id";
		Form1->ADOQuery1->Parameters->ParamByName("id")->Value = CurrentUserId;
		Form1->ADOQuery1->Open();

		if (!Form1->ADOQuery1->IsEmpty()) {
			String pib = Form1->ADOQuery1->FieldByName("ПІБ")->AsString;
			String tel = Form1->ADOQuery1->FieldByName("Телефон")->AsString;
            String photoPath = Form1->ADOQuery1->FieldByName("Фото")->AsString;

if (FileExists(photoPath))
	Image1->Picture->LoadFromFile(photoPath);
else
	Image1->Picture->Bitmap->Assign(NULL);

			Edit1->Text = pib;
			Edit2->Text = tel;
		} else {
			ShowMessage("Користувача з таким ID не знайдено.");
		}
	}
	catch (const Exception &e) {
		ShowMessage("Помилка завантаження профілю: " + e.Message);
	}
}

void __fastcall TForm5::FormShow(TObject *Sender)
{
	LoadUserData();
}


void __fastcall TForm5::Image2Click(TObject *Sender)
{
Form3->Show();
	this->Hide();
}


//---------------------------------------------------------------------------


void __fastcall TForm5::AdvGlowButton6Click(TObject *Sender)
{
Form8->CurrentUserId = CurrentUserId;
  Form8->Show();
	this->Hide();
}
//---------------------------------------------------------------------------

