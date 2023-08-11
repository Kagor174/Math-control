//---------------------------------------------------------------------------

#ifndef M_nKonvH
#define M_nKonvH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormM_nKonv : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TEdit *m_n;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *q;
	TEdit *b_min;
	TEdit *v_cut;
	TLabel *Label4;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormM_nKonv(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormM_nKonv *FormM_nKonv;
//---------------------------------------------------------------------------
#endif
