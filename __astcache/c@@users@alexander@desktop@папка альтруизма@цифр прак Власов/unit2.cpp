//---------------------------------------------------------------------------
#include <math.h>
#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
float x, y;
x = StrToFloat(Edit1->Text);
if (x<=-1) y =pow(x,2) -1;
else if (abs(x)<1) {y = cos((3,1415/(2*x)));}
else y = 0;
Label2->Caption="y="+FloatToStr(y);
}

//---------------------------------------------------------------------------
