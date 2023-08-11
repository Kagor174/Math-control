//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "M_nVruch.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormM_nVruch *FormM_nVruch;
//---------------------------------------------------------------------------
__fastcall TFormM_nVruch::TFormM_nVruch(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormM_nVruch::Button1Click(TObject *Sender)
{
	if (d_max->Text.ToDouble()>0 and d_max->Text.ToDouble()<1) {
		m_n->Text="0,1";
		Metod->Text = "Совком или щупом";
	}
	else if (d_max->Text.ToDouble()>=1 and d_max->Text.ToDouble()<10) {
			m_n->Text="0,3";
			Metod->Text = "Совком или щупом";
		 }
	else if (d_max->Text.ToDouble()>=10 and d_max->Text.ToDouble()<20) {
			m_n->Text="0,8";
			Metod->Text = "Совком";
		 }
	else if (d_max->Text.ToDouble()>=20 and d_max->Text.ToDouble()<50) {
			m_n->Text="1,0";
			Metod->Text = "Совком";
		 }
	else if (d_max->Text.ToDouble()>=50 and d_max->Text.ToDouble()<75) {
			m_n->Text="2,0";
			Metod->Text = "Совком и молотком";
		 }
	else if (d_max->Text.ToDouble()>=75 and d_max->Text.ToDouble()<100) {
			m_n->Text="4,0";
			Metod->Text = "Совком и молотком";
		 }
	else if (d_max->Text.ToDouble()>=100) {
			m_n->Text="8,0";
			Metod->Text = "Совком и молотком";
		 }
}
//---------------------------------------------------------------------------
