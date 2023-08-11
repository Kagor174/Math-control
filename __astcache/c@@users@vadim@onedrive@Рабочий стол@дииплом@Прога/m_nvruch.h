//---------------------------------------------------------------------------

#ifndef M_nVruchH
#define M_nVruchH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormM_nVruch : public TForm
{
__published:	// IDE-managed Components
	TEdit *m_n;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Metod;
	TButton *Button1;
	TLabel *Label3;
	TEdit *d_max;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormM_nVruch(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormM_nVruch *FormM_nVruch;
//---------------------------------------------------------------------------
#endif
