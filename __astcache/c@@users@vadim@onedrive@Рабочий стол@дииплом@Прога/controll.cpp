//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit1.cpp", Form1);
USEFORM("M_nKonv.cpp", FormM_nKonv);
USEFORM("M_nPoverh.cpp", FormM_nPoverh);
USEFORM("M_nManual.cpp", FormM_nManual);
USEFORM("M_nVruch.cpp", FormM_nVruch);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TFormM_nKonv), &FormM_nKonv);
		Application->CreateForm(__classid(TFormM_nPoverh), &FormM_nPoverh);
		Application->CreateForm(__classid(TFormM_nManual), &FormM_nManual);
		Application->CreateForm(__classid(TFormM_nVruch), &FormM_nVruch);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
