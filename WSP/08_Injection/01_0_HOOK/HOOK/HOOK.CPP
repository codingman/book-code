// HOOK
#include <windows.h>

WNDPROC  OldProc;

HWND WINAPI GetFirstChild( HWND hwnd);

BOOL CALLBACK MyNewProc( HWND hwnd, UINT imsg, WPARAM wParam, LPARAM lParam);

int APIENTRY WinMain( HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCMdline, 
						int nShowCmd)
{
	HWND hwnd;

	// 1. �޸��� �ڵ� ��� 
	hwnd = FindWindow("notepad", NULL);

	// 2. SetWIndowLong �Լ��� ���� Procedure�� ����
	OldProc = (WNDPROC)SetWindowLong(hwnd, GWL_WNDPROC, (LONG)MyNewProc);
	return 0;
}

BOOL CALLBACK MyNewProc( HWND hwnd, UINT imsg, WPARAM wParam, LPARAM lParam)
{
	return TRUE;
}

/*
	�ȵȴ�.
	
	����Ŭ������ �ϳ��� ��

    �޸𸮰� �ٸ���..

    �̷� ���� ������ �ϴ°� HOOK , ( dllInjection ) 
*/















