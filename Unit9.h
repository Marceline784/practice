//---------------------------------------------------------------------------

#ifndef Unit9H
#define Unit9H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "AdvGrid.hpp"
#include "AdvObj.hpp"
#include "AdvUtil.hpp"
#include "BaseGrid.hpp"
#include "HTMLabel.hpp"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include "AdvPanel.hpp"
#include "AdvScrollBox.hpp"
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TForm9 : public TForm
{
__published:	// IDE-managed Components
	THTMLabel *HTMLabel1;
	TImage *Image2;
	TAdvScrollBox *AdvScrollBox1;
	TTimer *Timer1;
	TADOQuery *ADOQuery1;
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
 int CurrentUserId;
	__fastcall TForm9(TComponent* Owner);
	void __fastcall LoadOrdersForUser(int userId);
	void __fastcall UpdateOrderStatuses();
    void __fastcall RefreshData();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm9 *Form9;
//---------------------------------------------------------------------------
#endif
