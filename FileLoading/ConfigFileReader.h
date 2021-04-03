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
	CString GetValueByName(CString strAttribute);  //for gernal perpose attribute and value.  Rizwan   Lastwork
	void GetScreenHeightAndWidth(); /// for getting screen resolution. Rizwan
	void ConstructDataBaseString(CString strUname , CString strPassword , CString strServer);  // Rizwan
};

