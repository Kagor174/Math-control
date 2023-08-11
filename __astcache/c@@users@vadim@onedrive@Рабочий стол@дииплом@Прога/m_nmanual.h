//---------------------------------------------------------------------------

#ifndef M_nManualH
#define M_nManualH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormM_nManual : public TForm
{
__published:	// IDE-managed Components
	TEdit *p;
	TEdit *d;
	TEdit *m_n;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TButton *Button1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormM_nManual(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormM_nManual *FormM_nManual;
//---------------------------------------------------------------------------
#endif
