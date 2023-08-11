//---------------------------------------------------------------------------

#ifndef M_nPoverhH
#define M_nPoverhH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormM_nPoverh : public TForm
{
__published:	// IDE-managed Components
	TEdit *m_n;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TEdit *h;
	TEdit *b_1;
	TEdit *d_max;
	TEdit *p;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormM_nPoverh(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormM_nPoverh *FormM_nPoverh;
//---------------------------------------------------------------------------
#endif
