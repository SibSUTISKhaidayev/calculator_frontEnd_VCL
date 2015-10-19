//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TmainFrom *mainFrom;
//---------------------------------------------------------------------------
__fastcall TmainFrom::TmainFrom(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TmainFrom::act_keyBackspaceExecute(TObject *Sender)
{
	UnicodeString endValue;

	endValue = mainFrom->E_inputValue->Text.Delete(
				 mainFrom->E_inputValue->Text.Length()-1,
				 mainFrom->E_inputValue->Text.Length());
	mainFrom->E_inputValue->Text = endValue;
//	double dValue = startValue.ToDouble(),
//		   subtrahend = dValue % 10;
//		   subtraction = ;
//	endValue = IntToStr();
}
//---------------------------------------------------------------------------

void __fastcall TmainFrom::act_keyClearValueExecute(TObject *Sender)
{
	E_inputValue->Text = 0;
}
//---------------------------------------------------------------------------

void __fastcall TmainFrom::act_keyClearAllExecute(TObject *Sender)
{
	E_illustrateDoes->Text = "";
}
//---------------------------------------------------------------------------

