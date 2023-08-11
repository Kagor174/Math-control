//---------------------------------------------------------------------------
#include "Unit1.h"
#include "M_nKonv.h"
#include "M_nManual.h"
#include "M_nPoverh.h"
#include "M_nVruch.h"
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
void __fastcall TForm1::RadioButton4Click(TObject *Sender)
{
	if (true) {
		ButtonInKonv->Visible = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CheckBoxMassClick(TObject *Sender)
{
	ButtonInKonv->Visible = CheckBoxMass->Checked;
	ButtonInPoverh->Visible = CheckBoxMass->Checked;
	ButtonInManual->Visible = CheckBoxMass->Checked;
	ButtonInVruch->Visible = CheckBoxMass->Checked;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonInKonvClick(TObject *Sender)
{
	FormM_nKonv->ShowModal();
	FormM_nKonv->m_n->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonInManualClick(TObject *Sender)
{
	FormM_nManual->ShowModal();
	FormM_nManual->m_n->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonInPoverhClick(TObject *Sender)
{
	FormM_nPoverh->ShowModal();
	FormM_nPoverh->m_n->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonInVruchClick(TObject *Sender)
{
	FormM_nVruch->ShowModal();
	FormM_nVruch->m_n->Text = "";
	FormM_nVruch->Metod->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CheckBoxKvlClick(TObject *Sender)
{
	if (CheckBoxKvl->Checked == false) {
		LabelKvl->Visible = false;
		kvl->Visible = false;
	}
	else {
		LabelKvl->Visible = true;
		kvl->Visible = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CheckBoxRClick(TObject *Sender)
{
	if (CheckBoxR->Checked == false) {
		LabelR->Visible = false;
		r->Visible = false;
		LabelT->Visible = false;
		t->Visible = false;
		LabelQ->Visible = false;
		Q->Visible = false;
		LabelM_4->Visible = false;
		m_4->Visible = false;
		LabelM_5->Visible = false;
		m_5->Visible = false;
	}
	else{
		LabelR->Visible = true;
		r->Visible = true;
		LabelT->Visible = true;
		t->Visible = true;
		LabelQ->Visible = true;
		Q->Visible = true;
		LabelM_4->Visible = true;
		m_4->Visible = true;
		LabelM_5->Visible = true;
		m_5->Visible = true;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CheckBoxCClick(TObject *Sender)
{
	if (CheckBoxC->Checked == false) {
		LabelC->Visible = false;
		C->Visible = false;
		LabelX_->Visible = false;
		X_->Visible = false;
		LabelR_->Visible = false;
		R_->Visible = false;
	}
	else {
		LabelC->Visible = true;
		C->Visible = true;
		LabelX_->Visible = true;
		X_->Visible = true;
		LabelR_->Visible = true;
		R_->Visible = true;
		CheckBoxO->Checked = false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::CheckBoxOClick(TObject *Sender)
{
	if (CheckBoxO->Checked == false) {
		LabelO->Visible = true;
		o->Visible = true;
		Var->Text = "";
	}
	else {
		LabelO->Visible = false;
		o->Visible = false;
		Var->Text = "Большая";
		CheckBoxC->Checked = false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{  int O = 0;
	if (CheckBoxO->Checked == true) {
		O = 3;
		Var->Text = "Большая";
	}
	else{
		if (o->Text.ToDouble()<1.5 and o->Text.ToDouble()>=0) {
		O = 1;
		Var->Text = "Малая";
		}
		else if (o->Text.ToDouble()>=1.5 and o->Text.ToDouble()<2) {
				O = 2;
				Var->Text = "Средняя";
			 }
			 else if (o->Text.ToDouble()>=2) {
					O=3;
					Var->Text = "Большая";
				  }

	}


	int Kvl = 0, K = 0, N = 0;
	double m = m_all->Text.ToDouble(), B;

	if (m>=0 and m<5000) {
		Kvl = 1;
		if (m<500) {
			B = 0.9;
			if (O==1) {
			   N = 1;
			   K = 8;
			}
			if (O==2) {
				N = 2;
				K = 15;
			}
			if (O==3) {
				N = 3;
				K = 31;
			}

		}
		if (m>=500 and m<1000) {
			B = 0.78;
			if (O==1) {
			   N = 1;
			   K = 10;
			}
			if (O==2) {
				N = 2;
				K = 20;
			}
			if (O==3) {
				N = 4;
				K = 41;
			}


		}
		if (m>=1000 and m<2000) {
			B = 0.7;
			if (O==1) {
			   N = 2;
			   K = 13;
			}
			if (O==2) {
				N = 3;
				K = 25;
			}
			if (O==3) {
				N = 5;
				K = 51;
			}

		}
		if (m>=2000) {
			B = 0.59;
			if (O==1) {
			   N = 2;
			   K = 18;
			}
			if (O==2) {
				N = 4;
				K = 35;
			}
			if (O==3) {
				N = 8;
				K = 72;
			}

		}

	}
	else if (m>=5000 and m<15000) {
		Kvl = 2;
		B = 0.49;
			if (O==1) {
			   N = 3;
			   K = 26;
			}
			if (O==2) {
				N = 5;
				K = 51;
			}
			if (O==3) {
				N = 11;
				K = 104;
			}

	}
	else if (m>=15000 and m<30000) {
		Kvl = 3;
			B = 0.45;
			if (O==1) {
			   N = 3;
			   K = 31;
			}
			if (O==2) {
				N = 7;
				K = 60;
			}
			if (O==3) {
				N = 13;
				K = 123;
			}

	}
	else if (m>=30000) {
		Kvl = 5;
		if (m<45000) {
			B = 0.42;
			if (O==1) {
			   N = 4;
			   K = 35;
			}
			if (O==2) {
				N = 8;
				K = 70;
			}
			if (O==3) {
				N = 15;
				K = 142;
			}

		}
		if (m>=45000 and m<70000) {
			B = 0.4;
			if (O==1) {
			   N = 4;
			   K = 39;
			}
			if (O==2) {
				N = 8;
				K = 77;
			}
			if (O==3) {
				N = 16;
				K = 156;
			}
		}
		if (m>=70000) {
			B = 0.37;
			if (O==1) {
			   N = 5;
			   K = 46;
			}
			if (O==2) {
				N = 10;
				K = 89;
			}
			if (O==3) {
				N = 19;
				K = 182;
			}
		}

	}

	k->Text = K; n->Text = N;
	b_otb->Text = B;
	if (CheckBoxKvl->Checked == true) {
		kvl->Text = Kvl;
	}



	if (CheckBoxC->Checked == true) {
		C->Text = o->Text.ToDouble()/X_->Text.ToDouble()*100;
	}

	if (CheckBoxR->Checked == true) {
		t->Text = 60*m/(N*Q->Text.ToDouble());
		m_4->Text = m/N;
		r->Text = m/(N * m_5->Text.ToDouble());
	}
}
//---------------------------------------------------------------------------

