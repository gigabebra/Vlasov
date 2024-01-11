//---------------------------------------------------------------------------
	  #define PI 3.14159265
	  #include <math.h>
#include <vcl.h>
#pragma hdrstop

#include "Unit2231.h"
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
 double x, S, e, a; unsigned short i;
 if (TryStrToFloat(LabeledEdit1->Text, x))
 {
  if (TryStrToFloat(LabeledEdit2->Text, e))
  {
   x=StrToFloat(LabeledEdit1->Text);
   e=StrToFloat(LabeledEdit2->Text);
   if (e<=0)
   {
	Label3->Caption="Введите положительную точность";
	return;
   }
   a=1; i=2; S=0;
   do
   {
	S=S+a;
	i++;
	a=abs(cos(i*x*PI/180))/(i-1);
   }
   while (fabs(a/S)>e);
   Label1->Caption="S="+FloatToStr(S);
   Label2->Caption="Слагаемых в сумме "+FloatToStr(i);
  }
  else ShowMessage("ошибка синтаксиса значения точности");
 }
 else ShowMessage("ошибка синтаксиса х");
}

//---------------------------------------------------------------------------
