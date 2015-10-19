//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TmainFrom *mainFrom;
//---------------------------------------------------------------------------
//--------- form methods -----------
__fastcall TmainFrom::TmainFrom(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void equivalent(UnicodeString value)
{
	UnicodeString currentValue = E_inputValue->Text,
				  newValue;

	if(currentValue == "0")
	{
		newValue = value;
	}

	E_inputValue->Text = newValue;
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
//---------- numBtns ---------
//---------------------------------------------------------------------------


void __fastcall TmainFrom::act_keySevenExecute(TObject *Sender)
{
	equivalent("7");
}
//---------------------------------------------------------------------------

void __fastcall TmainFrom::act_keyEightExecute(TObject *Sender)
{
	equivalent("8");
}
//---------------------------------------------------------------------------

void __fastcall TmainFrom::act_keyNineExecute(TObject *Sender)
{
    equivalent("9");
}
//---------------------------------------------------------------------------

void __fastcall TmainFrom::act_keyFourExecute(TObject *Sender)
{
    equivalent("4");
}
//---------------------------------------------------------------------------

void __fastcall TmainFrom::act_keyFiveExecute(TObject *Sender)
{
    equivalent("5");
}
//---------------------------------------------------------------------------

void __fastcall TmainFrom::act_keySixExecute(TObject *Sender)
{
	equivalent("6");
}
//---------------------------------------------------------------------------

void __fastcall TmainFrom::act_keyOneExecute(TObject *Sender)
{
    equivalent("1");
}
//---------------------------------------------------------------------------

void __fastcall TmainFrom::act_keyTwoExecute(TObject *Sender)
{
    equivalent("2");
}
//---------------------------------------------------------------------------

void __fastcall TmainFrom::act_keyTreeExecute(TObject *Sender)
{
    equivalent("3");
}
//---------------------------------------------------------------------------

