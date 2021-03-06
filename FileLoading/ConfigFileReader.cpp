#include "StdAfx.h"
#include "ConfigFileReader.h"
/// last comment bilal

ConfigFileReader::ConfigFileReader(void)
{
}


ConfigFileReader::~ConfigFileReader(void)
{
}

void ConfigFileReader:: GetScreenHeightAndWidth()
{      
	   int curPos = 0;
	   CString strValue = "";
	   strValue = GetValueByName("Resolution");
	   
	   CString resToken = (strValue.Tokenize(("X"), curPos));

       height = atoi(resToken);

	   while(!resToken.IsEmpty() && (curPos != resToken.GetLength()) )
		{
		   resToken = strValue.Tokenize(("X"), curPos);
		   width = atoi(resToken);
		   break;
		   
		}

}

CString ConfigFileReader::GetValueByName(CString strAttribute)
{
	CString filePath = "D:\\Amazonserver.xml";
	xml.Load( filePath );
	xml.ResetMainPos();

	bool data = false;
	CString strNameAttribute = "";
	CString strAttributeValue = "";

   while ( xml.FindElem("office") )
   {
			xml.IntoElem();		
			while(xml.FindElem())
			{
				xml.IntoElem();	
			 
					while(xml.FindElem())
					{
						strNameAttribute =xml.GetAttrib("name");

						if(strNameAttribute.CompareNoCase(strAttribute) == 0)
						{
						    strAttributeValue =  xml.GetAttrib("value"); 
							break;
						}
					}	           
					xml.OutOfElem();					
			}		
   }	


   return strAttributeValue;

	
   
}  // end of function

void ConfigFileReader:: ConstructDataBaseString(CString strUname , CString strPassword , CString strServerName) // pass attribute e.g.(AmazonserverUsername , amazonserverPassword , amazoneServerName)
{
	CString strUN;  
	CString strPw;
	CString strServer;
    
    

	strUN = GetValueByName(strUname);
	strPw = GetValueByName(strPassword);
	strServer = GetValueByName(strServerName);

	/// concatinate them  in one sting accoring to desired format and return the final string

}
