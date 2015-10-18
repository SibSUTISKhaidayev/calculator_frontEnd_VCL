//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
//---------------------------------------------------------------------------
class TmainFrom : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GB_Layout0;
	TGroupBox *GB_Layout_edits;
	TEdit *E_illustrateDoes;
	TEdit *E_inputValue;
	TGroupBox *GB_buttonLayout;
	TActionList *mainActions;
	TAction *btnGeneration;
	TAction *historySaving;
	TActionList *btnActionsMain;
	TAction *act_keyOne;
	TAction *act_keyTwo;
	TAction *act_keyTree;
	TAction *act_keyFour;
	TAction *act_keyFive;
	TAction *act_keySix;
	TAction *act_keySeven;
	TAction *act_keyEight;
	TAction *act_keyNine;
	TAction *act_keyZiro;
	TAction *act_keyBAckspace;
	TAction *act_keyClear;
	TAction *act_keyClearAll;
	TAction *act_keySqrt;
	TAction *act_keyDifference;
	TAction *act_keyMultiplication;
	TAction *act_keySubstraction;
	TAction *act_keySumm;
private:	// User declarations
public:		// User declarations
	__fastcall TmainFrom(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmainFrom *mainFrom;
//---------------------------------------------------------------------------
#endif
