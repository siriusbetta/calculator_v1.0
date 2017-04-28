// CalculatorCommandPatternDlg.h : header file
//

#if !defined(AFX_CALCULATORCOMMANDPATTERNDLG_H__8C4A409A_028B_44C8_8019_9253747F3E77__INCLUDED_)
#define AFX_CALCULATORCOMMANDPATTERNDLG_H__8C4A409A_028B_44C8_8019_9253747F3E77__INCLUDED_

#include "SimpleCalculator.h"
#include "Invoker.h"

#include "OneCommand.h"
#include "TwoCommand.h"
#include "ThreeCommand.h"
#include "FourCommand.h"
#include "FiveCommand.h"
#include "SixCommand.h"
#include "SevenCommand.h"
#include "EightCommand.h"
#include "NineCommand.h"
#include "ZeroCommand.h"
#include "PlusCommand.h"
#include "MinusCommand.h"
#include "MulCommand.h"
#include "DivCommand.h"
#include "PointCommand.h"
#include "EnterCommand.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCalculatorCommandPatternDlg dialog

class CCalculatorCommandPatternDlg : public CDialog
{
// Construction
public:
	CCalculatorCommandPatternDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCalculatorCommandPatternDlg)
	enum { IDD = IDD_CALCULATORCOMMANDPATTERN_DIALOG };
	CButton	m_btnZero;
	CButton	m_btnTwo;
	CButton	m_btnThree;
	CButton	m_btnSix;
	CButton	m_btnSeven;
	CButton	m_btnPlus;
	CButton	m_btnOne;
	CButton	m_btnNine;
	CButton	m_btnMul;
	CButton	m_btnMinus;
	CButton	m_btnFour;
	CButton	m_btnFive;
	CButton	m_btnEnter;
	CButton	m_btnEight;
	CButton	m_btnDiv;
	CButton	m_btnDecPoint;
	CEdit	m_edScreen;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCalculatorCommandPatternDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

	Invoker invoker;
	SimpleCalculator calculator;

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CCalculatorCommandPatternDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnZero();
	afx_msg void OnOne();
	afx_msg void OnTwo();
	afx_msg void OnThree();
	afx_msg void OnFour();
	afx_msg void OnFive();
	afx_msg void OnSix();
	afx_msg void OnSeven();
	afx_msg void OnEight();
	afx_msg void OnNine();
	afx_msg void OnDecPoint();
	afx_msg void OnPlus();
	afx_msg void OnMinus();
	afx_msg void OnMul();
	afx_msg void OnDiv();
	afx_msg void OnEnter();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALCULATORCOMMANDPATTERNDLG_H__8C4A409A_028B_44C8_8019_9253747F3E77__INCLUDED_)
