//---------------------------------------------------------------------------
#define PI 3.14159265 //в отчет добавь эту строку
#include <vcl.h>
#pragma hdrstop
#include <math.h>   // и эту
#include "Unit21.h"
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
float factorial(int N)
{
   if(N==0) return 1;
   if(N==1) return 1;
   return N*factorial(N-1);
}
void __fastcall TForm2::Button1Click(TObject *Sender)
{
 double x, a, S; char k;
 if (TryStrToFloat(LabeledEdit1->Text, x))
 {
  S=0;
  for(k=1; k<=10; k=k+1)
  {
   a= pow(sin(x*PI/180),k)/factorial(k);
   S=S+a;
  }
  Label1->Caption="S="+FloatToStr(S);
 }
 else ShowMessage("ошибка синтаксиса х");
}

//---------------------------------------------------------------------------
