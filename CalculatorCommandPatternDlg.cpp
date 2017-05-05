// CalculatorCommandPatternDlg.cpp : implementation file
//

#include "stdafx.h"
#include "CalculatorCommandPattern.h"
#include "CalculatorCommandPatternDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCalculatorCommandPatternDlg dialog

CCalculatorCommandPatternDlg::CCalculatorCommandPatternDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCalculatorCommandPatternDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCalculatorCommandPatternDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalculatorCommandPatternDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCalculatorCommandPatternDlg)
	DDX_Control(pDX, IDC_ZERO, m_btnZero);
	DDX_Control(pDX, IDC_TWO, m_btnTwo);
	DDX_Control(pDX, IDC_THREE, m_btnThree);
	DDX_Control(pDX, IDC_SIX, m_btnSix);
	DDX_Control(pDX, IDC_SEVEN, m_btnSeven);
	DDX_Control(pDX, IDC_PLUS, m_btnPlus);
	DDX_Control(pDX, IDC_ONE, m_btnOne);
	DDX_Control(pDX, IDC_NINE, m_btnNine);
	DDX_Control(pDX, IDC_MUL, m_btnMul);
	DDX_Control(pDX, IDC_MINUS, m_btnMinus);
	DDX_Control(pDX, IDC_FOUR, m_btnFour);
	DDX_Control(pDX, IDC_FIVE, m_btnFive);
	DDX_Control(pDX, IDC_ENTER, m_btnEnter);
	DDX_Control(pDX, IDC_EIGHT, m_btnEight);
	DDX_Control(pDX, IDC_DIV, m_btnDiv);
	DDX_Control(pDX, IDC_DECPOINT, m_btnDecPoint);
	DDX_Control(pDX, IDC_EDSCREEN, m_edScreen);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CCalculatorCommandPatternDlg, CDialog)
	//{{AFX_MSG_MAP(CCalculatorCommandPatternDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_ZERO, OnZero)
	ON_BN_CLICKED(IDC_ONE, OnOne)
	ON_BN_CLICKED(IDC_TWO, OnTwo)
	ON_BN_CLICKED(IDC_THREE, OnThree)
	ON_BN_CLICKED(IDC_FOUR, OnFour)
	ON_BN_CLICKED(IDC_FIVE, OnFive)
	ON_BN_CLICKED(IDC_SIX, OnSix)
	ON_BN_CLICKED(IDC_SEVEN, OnSeven)
	ON_BN_CLICKED(IDC_EIGHT, OnEight)
	ON_BN_CLICKED(IDC_NINE, OnNine)
	ON_BN_CLICKED(IDC_DECPOINT, OnDecPoint)
	ON_BN_CLICKED(IDC_PLUS, OnPlus)
	ON_BN_CLICKED(IDC_MINUS, OnMinus)
	ON_BN_CLICKED(IDC_MUL, OnMul)
	ON_BN_CLICKED(IDC_DIV, OnDiv)
	ON_BN_CLICKED(IDC_ENTER, OnEnter)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCalculatorCommandPatternDlg message handlers

BOOL CCalculatorCommandPatternDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	calculator.setCommandParser(&commandParser);
	commandParser.setCalculator(&calculator);

	screen.setState(&InputScreenState::Instance());
	InputScreenState::Instance().setScreen(&screen);
	WaitingScreenState::Instance().setScreen(&screen);

	calculator.setScreen(&screen);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CCalculatorCommandPatternDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCalculatorCommandPatternDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCalculatorCommandPatternDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CCalculatorCommandPatternDlg::OnZero() 
{
	ZeroCommand zero(&calculator);
	invoker.setCommand(&zero);
	invoker.run();
	updateScreen();
}

void CCalculatorCommandPatternDlg::OnOne() 
{
	OneCommand one(&calculator);
	invoker.setCommand(&one);
	invoker.run();
	updateScreen();
}

void CCalculatorCommandPatternDlg::OnTwo() 
{
	TwoCommand two(&calculator);
	invoker.setCommand(&two);
	invoker.run();
	updateScreen();	
}

void CCalculatorCommandPatternDlg::OnThree() 
{
	ThreeCommand three(&calculator);
	invoker.setCommand(&three);
	invoker.run();
	updateScreen();	
}

void CCalculatorCommandPatternDlg::OnFour() 
{
	FourCommand four(&calculator);
	invoker.setCommand(&four);
	invoker.run();
	updateScreen();	
}

void CCalculatorCommandPatternDlg::OnFive() 
{
	FiveCommand five(&calculator);
	invoker.setCommand(&five);
	invoker.run();
	updateScreen();
}

void CCalculatorCommandPatternDlg::OnSix() 
{
	SixCommand six(&calculator);
	invoker.setCommand(&six);
	invoker.run();
	updateScreen();	
}

void CCalculatorCommandPatternDlg::OnSeven() 
{
	SevenCommand seven(&calculator);
	invoker.setCommand(&seven);
	invoker.run();
	updateScreen();
}

void CCalculatorCommandPatternDlg::OnEight() 
{
	EightCommand eight(&calculator);
	invoker.setCommand(&eight);
	invoker.run();
	updateScreen();
}

void CCalculatorCommandPatternDlg::OnNine() 
{
	NineCommand nine(&calculator);
	invoker.setCommand(&nine);
	invoker.run();
	updateScreen();
}

void CCalculatorCommandPatternDlg::OnDecPoint() 
{
	PointCommand point(&calculator);
	invoker.setCommand(&point);
	invoker.run();
	updateScreen();
}

void CCalculatorCommandPatternDlg::OnPlus() 
{
	PlusCommand plus(&calculator);
	invoker.setCommand(&plus);
	invoker.run();
}

void CCalculatorCommandPatternDlg::OnMinus() 
{
	MinusCommand minus(&calculator);
	invoker.setCommand(&minus);
	invoker.run();
}

void CCalculatorCommandPatternDlg::OnMul() 
{
	MulCommand mul(&calculator);
	invoker.setCommand(&mul);
	invoker.run();
}

void CCalculatorCommandPatternDlg::OnDiv() 
{
	DivCommand div(&calculator);
	invoker.setCommand(&div);
	invoker.run();
}

void CCalculatorCommandPatternDlg::OnEnter() 
{
	EnterCommand enter(&calculator);
	invoker.setCommand(&enter);
	invoker.run();
}


void CCalculatorCommandPatternDlg::updateScreen()
{
	m_edScreen.SetWindowText(calculator.screen->getScreen().c_str());
}