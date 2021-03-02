
// FileLoadingDlg.h : header file
#include "string.h"
#include <vector>
#include <cstdlib>
#include"ConfigFileReader.h"
using namespace std;


#pragma once


// CFileLoadingDlg dialog
class CFileLoadingDlg : public CDialogEx
{
// Construction
public:
	CFileLoadingDlg(CWnd* pParent = NULL);	// standard constructor

	//CMarkup xml;

// Dialog Data
	enum { IDD = IDD_FILELOADING_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonload();
	ConfigFileReader configReaderObj;
	
};
