
// �༭��Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// C�༭��Dlg �Ի���
class C�༭��Dlg : public CDialogEx
{
// ����
public:
	C�༭��Dlg(CWnd* pParent = NULL);	// ��׼���캯��

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
private:
	CEdit m_edit1;
	CEdit m_edit2;
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	virtual void OnOK();
	afx_msg void OnBnClickedButton3();
private:
	CString m_text;
public:
	afx_msg void OnBnClickedButton4();
};
