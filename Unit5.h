//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "HTMLabel.hpp"
#include "AdvEdit.hpp"
#include "DBAdvEd.hpp"
#include "AdvGlowButton.hpp"
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>

//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	THTMLabel *HTMLabel1;
	TImage *Image2;
	THTMLabel *HTMLabel2;
	THTMLabel *HTMLabel3;
	TEdit *Edit2;
	TEdit *Edit1;
	TAdvGlowButton *AdvGlowButton6;
	void __fastcall Image2Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
	void __fastcall AdvGlowButton6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
int CurrentUserId;
	__fastcall TForm5(TComponent* Owner);
     void __fastcall LoadUserData();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
