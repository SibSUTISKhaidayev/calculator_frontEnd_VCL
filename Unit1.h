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
#include "backEnd/calculator.h"
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
	TAction *act_keyBackspace;
	TAction *act_keyClearValue;
	TAction *act_keyClearAll;
	TAction *act_keySqrt;
	TAction *act_keyDifference;
	TAction *act_keyMultiplication;
	TAction *act_keySubstraction;
	TAction *act_keySumm;
	TAction *act_keyEqual;
	TAction *act_keyDecimalDot;
	TAction *act_keyPercent;
	void __fastcall act_keyBackspaceExecute(TObject *Sender);
	void __fastcall act_keyClearValueExecute(TObject *Sender);
	void __fastcall act_keyClearAllExecute(TObject *Sender);
 //  	void __fastcall act_keyInverSignExecute(TObject *Sender);
	void __fastcall act_keySevenExecute(TObject *Sender);
	void __fastcall act_keyEightExecute(TObject *Sender);
	void __fastcall act_keyNineExecute(TObject *Sender);
	void __fastcall act_keyFourExecute(TObject *Sender);
	void __fastcall act_keyFiveExecute(TObject *Sender);
	void __fastcall act_keySixExecute(TObject *Sender);
	void __fastcall act_keyOneExecute(TObject *Sender);
	void __fastcall act_keyTwoExecute(TObject *Sender);
	void __fastcall act_keyTreeExecute(TObject *Sender);
	void __fastcall act_keySqrtExecute(TObject *Sender);
	void __fastcall mainActionsExecute(TBasicAction *Action, bool &Handled);
private:	// User declarations
	UnicodeString enteredValue;
	UnicodeString illustratingDoes;

	TButton *btn;
	void equivalent(UnicodeString value);
public:		// User declarations
	__fastcall TmainFrom(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmainFrom *mainFrom;
//---------------------------------------------------------------------------
#endif
