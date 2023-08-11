//---------------------------------------------------------------------------
#include <cmath>
#include <vcl.h>
#pragma hdrstop

#include "M_nManual.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormM_nManual *FormM_nManual;
//---------------------------------------------------------------------------
__fastcall TFormM_nManual::TFormM_nManual(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormM_nManual::Button1Click(TObject *Sender)
{
	m_n->Text = 27*p->Text.ToDouble()*pow(d->Text.ToDouble(), 3)*pow(10, -6);
}
//---------------------------------------------------------------------------
