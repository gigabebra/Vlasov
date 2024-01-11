//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
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

//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
float a, b, h, x, y, t, m;
m = 69;
if (TryStrToFloat(LabeledEdit1->Text, a))
{
 if (TryStrToFloat(LabeledEdit2->Text, b))
 {
  if (TryStrToFloat(LabeledEdit3->Text, h))
  {
   Label1->Caption='\0';
   a=StrToFloat(LabeledEdit1->Text);
   b=StrToFloat(LabeledEdit2->Text);
   h=StrToFloat(LabeledEdit3->Text);
   t=a;
   while (t<=b+h/2)
   {
	if (t!=-1) {
			y=m*pow(t,2)/(pow(t,3)+1);
	   x=m*t/(pow(t,3)+1);
	   Label1->Caption=Label1->Caption +
	   +"x="+FloatToStr(x) + '\t' + "y="+FloatToStr(y)+ '\n';
		t=t+h;
	}
	else {
	ShowMessage("на 0 делить нельзя");
	break;
	}
   }
  }
  else ShowMessage("ошибка синтаксиса шага приращения аргумента");
 }
 else ShowMessage("ошибка синтаксиса правой границы диапазона");
}
else ShowMessage("ошибка синтаксиса левой границы диапазона");
}
