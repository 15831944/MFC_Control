
// ���ؼ�2.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// C���ؼ�2App: 
// �йش����ʵ�֣������ ���ؼ�2.cpp
//

class C���ؼ�2App : public CWinApp
{
public:
	C���ؼ�2App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern C���ؼ�2App theApp;