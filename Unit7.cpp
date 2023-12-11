//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
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
double sum1(double x[], int n)
{
int sumPP = 0;
int i;
for (i=0; i<=n-1; i++)
 {
 if((int)x[i]>0)
	 {
	 sumPP = sumPP+ (int)x[i];
	 }
 }
 return sumPP;
 }
double sum2(double x[], int n)
{
int sumOO = 0;
int i;
for (i=0; i<=n-1; i++)
 {
 if((int)x[i]<0)
	 {
	 sumOO = sumOO+ (int)x[i];;
	 }
 }
 return sumOO;
 }

void __fastcall TForm2::Button1Click(TObject *Sender)
{
double * x;
double * y;
int n, nx, ny, i,sumOO,sumPP;
nx=Memo1->Lines->Count;
ny = Memo2->Lines->Count;
x=new double[nx];
y=new double[ny];
for (i=0; i<=nx-1; i++)
 {
  if (TryStrToFloat(Memo1->Lines->Strings[i], x[i]))
   {
	x[i]=StrToFloat(Memo1->Lines->Strings[i]);
   }
   else ShowMessage("ошибка синтаксиса 1");
 }
for (i=0; i<=ny-1; i++)
 {
  if (TryStrToFloat(Memo2->Lines->Strings[i], y[i]))
   {
	y[i]=StrToFloat(Memo2->Lines->Strings[i]);
   }
   else ShowMessage("ошибка синтаксиса 2");
 }
Label6->Caption=FloatToStr(sum1(x,nx));
Label5->Caption=FloatToStr(sum2(x,nx));
Label10->Caption=FloatToStr(sum1(y,ny));
Label9->Caption=FloatToStr(sum2(y,ny));
}

//---------------------------------------------------------------------------
