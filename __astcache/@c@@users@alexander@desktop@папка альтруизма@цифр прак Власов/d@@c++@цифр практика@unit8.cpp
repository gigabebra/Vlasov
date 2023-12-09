//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{

short int n; float st;
 n=ListBox1->ItemIndex;
 switch (n)
 {
 case 0: st=300; break;
 case 1: st=300; break;
 case 2: st=300; break;
 case 3: st=200; break;
 case 4: st=200; break;
 case 5: st=200; break;
 case 6: st=100; break;
 case 7: st=100; break;
 default:st=0; ShowMessage("город не выбран!");
 }
 if (RadioButton1->Checked) st=st*2;
 else if (RadioButton2->Checked) st=st*1.5;
 else if (RadioButton3->Checked) st=st*0.8;
 if (CheckBox2->Checked) st=2*st;
 Label1->Caption="в кассу "+FloatToStr(st)+ " руб";
 }


//---------------------------------------------------------------------------

