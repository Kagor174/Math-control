//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "M_nPoverh.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormM_nPoverh *FormM_nPoverh;
//---------------------------------------------------------------------------
__fastcall TFormM_nPoverh::TFormM_nPoverh(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormM_nPoverh::Button1Click(TObject *Sender)
{
	m_n->Text = h->Text.ToDouble()*b_1->Text.ToDouble()/2*3*d_max->Text.ToDouble()*p->Text.ToDouble();
}

//---------------------------------------------------------------------------
