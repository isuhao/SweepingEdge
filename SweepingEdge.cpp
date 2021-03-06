// SweepingEdge.cpp :SOUI主入口源文件
//

#include "stdafx.h"
#include "MainDlg.h"

#include "SouiInit.h"
#include "SMiniblink.h"

const wchar_t* kWkeDllPath = L"mblib\\node_v8_4_8.dll";

int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE /*hPrevInstance*/, LPTSTR lpstrCmdLine, int /*nCmdShow*/)
{
	HRESULT hRes = OleInitialize(NULL);
	SASSERT(SUCCEEDED(hRes));

	int nRet = 0;

	InitDir();
	{
		SWkeLoader wkeLoader;
		CSouiLoader Loader(hInstance);
		InitSystemRes(Loader.GetApp(), Loader.GetComMgr());
		InitUserRes(Loader.GetApp(), Loader.GetComMgr());
		nRet = Run<CMainDlg>(Loader.GetApp());
	}

	OleUninitialize();
	return nRet;
}
