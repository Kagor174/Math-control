//---------------------------------------------------------------------------
#include "Unit1.h"
#include "M_nKonv.h"
#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormM_nKonv *FormM_nKonv;
//---------------------------------------------------------------------------
__fastcall TFormM_nKonv::TFormM_nKonv(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormM_nKonv::Button1Click(TObject *Sender)
{

	m_n->Text = q->Text.ToDouble() * b_min->Text.ToDouble() / (3.6*v_cut->Text.ToDouble());
}
//---------------------------------------------------------------------------
