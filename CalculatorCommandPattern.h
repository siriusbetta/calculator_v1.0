// CalculatorCommandPattern.h : main header file for the CALCULATORCOMMANDPATTERN application
//

#if !defined(AFX_CALCULATORCOMMANDPATTERN_H__0D864F8A_A9B8_4E53_9B38_2E4BA24D9DA7__INCLUDED_)
#define AFX_CALCULATORCOMMANDPATTERN_H__0D864F8A_A9B8_4E53_9B38_2E4BA24D9DA7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CCalculatorCommandPatternApp:
// See CalculatorCommandPattern.cpp for the implementation of this class
//

class CCalculatorCommandPatternApp : public CWinApp
{
public:
	CCalculatorCommandPatternApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCalculatorCommandPatternApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCalculatorCommandPatternApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALCULATORCOMMANDPATTERN_H__0D864F8A_A9B8_4E53_9B38_2E4BA24D9DA7__INCLUDED_)
