
// ��̬�ı�Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "��̬�ı�.h"
#include "��̬�ı�Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// C��̬�ı�Dlg �Ի���



C��̬�ı�Dlg::C��̬�ı�Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(C��̬�ı�Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void C��̬�ı�Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_TEXT, m_test);
	DDX_Control(pDX, IDC_PIC, m_pic);
	DDX_Control(pDX, IDC_BUTTON3, m_btn);
}

BEGIN_MESSAGE_MAP(C��̬�ı�Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &C��̬�ı�Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &C��̬�ı�Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &C��̬�ı�Dlg::OnBnClickedButton3)
END_MESSAGE_MAP()


// C��̬�ı�Dlg ��Ϣ�������

BOOL C��̬�ı�Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������
	//��ʾͼƬ

	//���þ�̬�ؼ����ڷ��Ϊλͼ������ʾ
	m_pic.ModifyStyle(0xf, SS_BITMAP | SS_CENTERIMAGE);

	//ͨ��·����ȡbitmap���
	#define HBMP(filepath , width , height) (HBITMAP)LoadImage(AfxGetInstanceHandle(),filepath,IMAGE_BITMAP,width,height,LR_LOADFROMFILE|LR_CREATEDIBSECTION)

	//��ȡ�ؼ��Ŀ�͸�
	CRect rect;
	m_pic.GetWindowRect(rect);

	//��̬�ؼ�����bitmap
	m_pic.SetBitmap(HBMP(TEXT("./girl.bmp"), rect.Width(), rect.Height()));


	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void C��̬�ı�Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void C��̬�ı�Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR C��̬�ı�Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


//�ѹ�����ɺǺ�
void C��̬�ı�Dlg::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	m_test.SetWindowTextW(TEXT("�Ǻ�"));
}


void C��̬�ı�Dlg::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CString str;
	m_test.GetWindowTextW(str);
	MessageBox(str);
}


void C��̬�ı�Dlg::OnBnClickedButton3()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	//�޸İ�ť�е�ֵ
	m_btn.SetWindowTextW(TEXT("kkkk"));

	//��ʾ��ť�е�ֵ
	CString str;
	m_btn.GetWindowTextW(str);
	MessageBox(str);

	 //���ð�ť�Ƿ���Ե��
	m_btn.EnableWindow(FALSE);//FALSE��ʾ���֮�����ٵ��

}
