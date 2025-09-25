//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "HTMLabel.hpp"
#include "AdvEdit.hpp"
#include "DBAdvEd.hpp"
#include "AdvGlowButton.hpp"
#include "htmlbtns.hpp"
#include "AdvToolBtn.hpp"
#include "AdvSmoothButton.hpp"
#include "AeroButtons.hpp"
#include <Vcl.Buttons.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	THTMLabel *HTMLabel1;
	TDBAdvEdit *DBAdvEdit1;
	THTMLabel *HTMLabel2;
	THTMLabel *HTMLabel3;
	TDBAdvEdit *DBAdvEdit2;
	TAdvGlowButton *Button;
	THTMLabel *HTMLabel4;
	TADOQuery *ADOQuery1;
	void __fastcall ButtonClick(TObject *Sender);
	void __fastcall HTMLabel4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
int CurrentUserId;
	__fastcall TForm1(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
