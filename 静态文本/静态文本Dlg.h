
// ��̬�ı�Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// C��̬�ı�Dlg �Ի���
class C��̬�ı�Dlg : public CDialogEx
{
// ����
public:
	C��̬�ı�Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MY_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
private:
	CStatic m_test;
public:
	afx_msg void OnBnClickedButton2();
private:
	CStatic m_pic;
	CButton m_btn;
public:
	afx_msg void OnBnClickedButton3();
};
