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
int sumP, n, nx, ny, i,sumO,sumOO,sumPP, sumP2, sumO2;
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
sumP = sum1(x,nx);
sumO = sum2(x,nx);
sumP2 = sum1(y,ny);
sumO2 = sum2(y,ny);
Label6->Caption=IntToStr(sumP);
Label5->Caption=FloatToStr(sumO);
Label10->Caption=IntToStr(sumP2);
Label9->Caption=FloatToStr(sumO2);
}

//---------------------------------------------------------------------------
