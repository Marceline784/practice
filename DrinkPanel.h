//---------------------------------------------------------------------------

#ifndef DrinkPanelH
#define DrinkPanelH
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <HTMLabel.hpp>
#include <AdvPanel.hpp>
#include <AdvGlowButton.hpp>
#include <Vcl.Graphics.hpp>

class TDrinkPanel : public TAdvPanel
{
private:
    THTMLabel *lblName;
    THTMLabel *lblPrice;
    THTMLabel *lblDesc;
    TImage *imgPhoto;
    TAdvGlowButton *btnOrder;
    TAdvGlowButton *btnLike;
    String Category;

    void __fastcall LikeButtonClick(TObject *Sender);

public:
    __fastcall TDrinkPanel(TWinControl* Owner,
        const String& name,
        const String& price,
        const String& desc,
        const String& photoPath,
        const String& category);

    TAdvGlowButton* GetOrderButton() { return btnOrder; }
    TAdvGlowButton* GetLikeButton() { return btnLike; }
    String GetCategory() { return Category; }
    String GetDrinkName() { return lblName->Caption; }
    String GetDrinkPrice() { return lblPrice->Caption; }
};

//---------------------------------------------------------------------------
#endif
