//stamp:0922318363fbdf7e
/*<------------------------------------------------------------------------------------------------->*/
/*该文件由uiresbuilder生成，请不要手动修改*/
/*<------------------------------------------------------------------------------------------------->*/
#pragma once
#include <res.mgr/snamedvalue.h>
#define ROBJ_IN_CPP \
namespace SOUI \
{\
    const _R R;\
    const _UIRES UIRES;\
}
namespace SOUI
{
	class _UIRES{
		public:
		class _UIDEF{
			public:
			_UIDEF(){
				XML_INIT = _T("UIDEF:XML_INIT");
			}
			const TCHAR * XML_INIT;
		}UIDEF;
		class _LAYOUT{
			public:
			_LAYOUT(){
				XML_MAINWND = _T("LAYOUT:XML_MAINWND");
				XML_MAINDROPS = _T("LAYOUT:XML_MAINDROPS");
			}
			const TCHAR * XML_MAINWND;
			const TCHAR * XML_MAINDROPS;
		}LAYOUT;
		class _values{
			public:
			_values(){
				string = _T("values:string");
				color = _T("values:color");
				skin = _T("values:skin");
			}
			const TCHAR * string;
			const TCHAR * color;
			const TCHAR * skin;
		}values;
		class _PNG{
			public:
			_PNG(){
				ID_SYSBTN_CLOSE = _T("PNG:ID_SYSBTN_CLOSE");
				ID_SYSBTN_MAX = _T("PNG:ID_SYSBTN_MAX");
				ID_SYSBTN_MIN = _T("PNG:ID_SYSBTN_MIN");
				ID_SYSBTN_RESTORE = _T("PNG:ID_SYSBTN_RESTORE");
				ID_SYSBTN_MENU = _T("PNG:ID_SYSBTN_MENU");
				ID_WEBTAB_ADD = _T("PNG:ID_WEBTAB_ADD");
				ID_WEBTAB = _T("PNG:ID_WEBTAB");
				ID_TABBTN_CLOSE = _T("PNG:ID_TABBTN_CLOSE");
				ID_TABLST_CLOSE = _T("PNG:ID_TABLST_CLOSE");
			}
			const TCHAR * ID_SYSBTN_CLOSE;
			const TCHAR * ID_SYSBTN_MAX;
			const TCHAR * ID_SYSBTN_MIN;
			const TCHAR * ID_SYSBTN_RESTORE;
			const TCHAR * ID_SYSBTN_MENU;
			const TCHAR * ID_WEBTAB_ADD;
			const TCHAR * ID_WEBTAB;
			const TCHAR * ID_TABBTN_CLOSE;
			const TCHAR * ID_TABLST_CLOSE;
		}PNG;
		class _NAVBAR{
			public:
			_NAVBAR(){
				IMG_BTN_BACK = _T("NAVBAR:IMG_BTN_BACK");
				IMG_BTN_NEXT = _T("NAVBAR:IMG_BTN_NEXT");
				IMG_BTN_HOME = _T("NAVBAR:IMG_BTN_HOME");
				IMG_BTN_GOTO = _T("NAVBAR:IMG_BTN_GOTO");
				IMG_EDT_ADDR = _T("NAVBAR:IMG_EDT_ADDR");
				IMG_BTN_REFS = _T("NAVBAR:IMG_BTN_REFS");
				ID_BTNBKEX = _T("NAVBAR:ID_BTNBKEX");
			}
			const TCHAR * IMG_BTN_BACK;
			const TCHAR * IMG_BTN_NEXT;
			const TCHAR * IMG_BTN_HOME;
			const TCHAR * IMG_BTN_GOTO;
			const TCHAR * IMG_EDT_ADDR;
			const TCHAR * IMG_BTN_REFS;
			const TCHAR * ID_BTNBKEX;
		}NAVBAR;
		class _IMG{
			public:
			_IMG(){
			}
		}IMG;
		class _ICON{
			public:
			_ICON(){
				ICON_LOGO = _T("ICON:ICON_LOGO");
			}
			const TCHAR * ICON_LOGO;
		}ICON;
	};
	const SNamedID::NAMEDVALUE namedXmlID[]={
		{L"WebBrowserTab",65538},
		{L"_name_start",65535},
		{L"btn_UserCenter",65553},
		{L"btn_chat_menu",65546},
		{L"btn_close",65542},
		{L"btn_goaddress",65552},
		{L"btn_max",65544},
		{L"btn_min",65545},
		{L"btn_refresh",65551},
		{L"btn_restore",65543},
		{L"btn_webnav_back",65547},
		{L"btn_webnav_forward",65548},
		{L"btn_webnav_home",65549},
		{L"caption",65537},
		{L"dropwindow",65555},
		{L"edt_address",65550},
		{L"logo",65540},
		{L"tab_webpage",65554},
		{L"title",65541},
		{L"webTabCtrl",65539},
		{L"wndFrame",66},
		{L"wndWebFrame",65536}		};
	class _R{
	public:
		class _name{
		public:
		_name(){
			WebBrowserTab = namedXmlID[0].strName;
			_name_start = namedXmlID[1].strName;
			btn_UserCenter = namedXmlID[2].strName;
			btn_chat_menu = namedXmlID[3].strName;
			btn_close = namedXmlID[4].strName;
			btn_goaddress = namedXmlID[5].strName;
			btn_max = namedXmlID[6].strName;
			btn_min = namedXmlID[7].strName;
			btn_refresh = namedXmlID[8].strName;
			btn_restore = namedXmlID[9].strName;
			btn_webnav_back = namedXmlID[10].strName;
			btn_webnav_forward = namedXmlID[11].strName;
			btn_webnav_home = namedXmlID[12].strName;
			caption = namedXmlID[13].strName;
			dropwindow = namedXmlID[14].strName;
			edt_address = namedXmlID[15].strName;
			logo = namedXmlID[16].strName;
			tab_webpage = namedXmlID[17].strName;
			title = namedXmlID[18].strName;
			webTabCtrl = namedXmlID[19].strName;
			wndFrame = namedXmlID[20].strName;
			wndWebFrame = namedXmlID[21].strName;
		}
		 const wchar_t * WebBrowserTab;
		 const wchar_t * _name_start;
		 const wchar_t * btn_UserCenter;
		 const wchar_t * btn_chat_menu;
		 const wchar_t * btn_close;
		 const wchar_t * btn_goaddress;
		 const wchar_t * btn_max;
		 const wchar_t * btn_min;
		 const wchar_t * btn_refresh;
		 const wchar_t * btn_restore;
		 const wchar_t * btn_webnav_back;
		 const wchar_t * btn_webnav_forward;
		 const wchar_t * btn_webnav_home;
		 const wchar_t * caption;
		 const wchar_t * dropwindow;
		 const wchar_t * edt_address;
		 const wchar_t * logo;
		 const wchar_t * tab_webpage;
		 const wchar_t * title;
		 const wchar_t * webTabCtrl;
		 const wchar_t * wndFrame;
		 const wchar_t * wndWebFrame;
		}name;

		class _id{
		public:
		const static int WebBrowserTab	=	65538;
		const static int _name_start	=	65535;
		const static int btn_UserCenter	=	65553;
		const static int btn_chat_menu	=	65546;
		const static int btn_close	=	65542;
		const static int btn_goaddress	=	65552;
		const static int btn_max	=	65544;
		const static int btn_min	=	65545;
		const static int btn_refresh	=	65551;
		const static int btn_restore	=	65543;
		const static int btn_webnav_back	=	65547;
		const static int btn_webnav_forward	=	65548;
		const static int btn_webnav_home	=	65549;
		const static int caption	=	65537;
		const static int dropwindow	=	65555;
		const static int edt_address	=	65550;
		const static int logo	=	65540;
		const static int tab_webpage	=	65554;
		const static int title	=	65541;
		const static int webTabCtrl	=	65539;
		const static int wndFrame	=	66;
		const static int wndWebFrame	=	65536;
		}id;

		class _string{
		public:
		const static int title	=	0;
		const static int ver	=	1;
		}string;

		class _color{
		public:
		const static int blue	=	0;
		const static int gray	=	1;
		const static int green	=	2;
		const static int red	=	3;
		const static int white	=	4;
		}color;

	};

#ifdef R_IN_CPP
	 extern const _R R;
	 extern const _UIRES UIRES;
#else
	 extern const __declspec(selectany) _R & R = _R();
	 extern const __declspec(selectany) _UIRES & UIRES = _UIRES();
#endif//R_IN_CPP
}
