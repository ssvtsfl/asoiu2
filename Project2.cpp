//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Unit_2_1.cpp", ����������_������_�������);
USEFORM("Unit_2_2.cpp", ����������_������_����������);
USEFORM("Unit_2_3_1.cpp", ����������_�����_������1);
USEFORM("LR_2.cpp", ��2);
USEFORM("Unit_2_3_2.cpp", ���������_������_������);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(T��2), &��2);
		Application->CreateForm(__classid(T����������_������_�������), &����������_������_�������);
		Application->CreateForm(__classid(T����������_������_����������), &����������_������_����������);
		Application->CreateForm(__classid(T����������_�����_������1), &����������_�����_������1);
		Application->CreateForm(__classid(T���������_������_������), &���������_������_������);
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
