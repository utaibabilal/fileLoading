#pragma once
#include"Markup.h"
class ConfigFileReader
{
public:
	///===================variables=================
	    int height;
		int width;
		CMarkup xml;
	//==============================================
	ConfigFileReader(void);
	~ConfigFileReader(void);
	CString GetValueByName(CString strAttribute);
	void GetScreenHeightAndWidth();
};

