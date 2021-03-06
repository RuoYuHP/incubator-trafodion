// @@@ START COPYRIGHT @@@
//
// (C) Copyright 2002-2014 Hewlett-Packard Development Company, L.P.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
// @@@ END COPYRIGHT @@@

#if !defined(AFX_TABPAGETESTING_H__CEE85AEB_8015_11D3_9E99_00508B0B983B__INCLUDED_)
#define AFX_TABPAGETESTING_H__CEE85AEB_8015_11D3_9E99_00508B0B983B__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// TabPageTesting.h : header file
//
#include "propsheet.h"

/////////////////////////////////////////////////////////////////////////////
// TabPageTesting dialog

class TabPageTesting : public CPropertyPage
{
	DECLARE_DYNCREATE(TabPageTesting)

// Construction
public:
	TabPageTesting();
	~TabPageTesting();

private:
	void ListBoxAddString(char* lpString);

public:

// Dialog Data
	CPropSheet* m_ppropsheet;

	//{{AFX_DATA(TabPageTesting)
	enum { IDD = IDD_PAGE_TESTING1 };
	CButton	m_testconn;
	CListBox	m_output;
	CStatic	m_static_testing;
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(TabPageTesting)
	public:
	virtual BOOL OnSetActive();
	virtual void OnOK();
	virtual void OnCancel();
	virtual BOOL OnApply();
	virtual BOOL OnKillActive();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(TabPageTesting)
	virtual BOOL OnInitDialog();
	afx_msg void OnTestconn();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TABPAGETESTING_H__CEE85AEB_8015_11D3_9E99_00508B0B983B__INCLUDED_)
