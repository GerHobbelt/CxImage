// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__E98F71A8_B361_11D6_BB83_CAEE2E1CB77B__INCLUDED_)
#define AFX_STDAFX_H__E98F71A8_B361_11D6_BB83_CAEE2E1CB77B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

// WinSDKVer.h contains the definition for _WIN32_WINNT_MAXVER (and other maximums).
#include <winsdkver.h>
#include <sdkddkver.h>

/* Define to control Windows SDK version */
#ifndef NTDDI_VERSION
#define NTDDI_VERSION NTDDI_WINTHRESHOLD
#endif // NTDDI_VERSION

#ifndef _WIN32_WINNT
#define _WIN32_WINNT _WIN32_WINNT_WINTHRESHOLD
#endif // _WIN32_WINNT

#ifndef WINVER
#define WINVER _WIN32_WINNT_WINTHRESHOLD
#endif // WINVER


#pragma warning(push)
#pragma warning(disable: 4201)  // winnt.h uses nameless structs
// warning C5204: class has virtual functions, but its trivial destructor is not virtual; instances of objects derived from this class may not be destructed correctly
#pragma warning(disable: 5204)

#if 0
#include <afxv_w32.h>
#endif

#include <winsock2.h>
#include <Windows.h>

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions

#ifndef _AFX_NO_OLE_SUPPORT
#include <afxole.h>         // MFC OLE classes
#include <afxodlgs.h>       // MFC OLE dialog classes
#include <afxdisp.h>        // MFC Automation classes
#endif // _AFX_NO_OLE_SUPPORT

#ifndef _AFX_NO_DB_SUPPORT
#include <afxdb.h>			// MFC ODBC database classes
#endif // _AFX_NO_DB_SUPPORT

#ifndef _AFX_NO_DAO_SUPPORT
#include <afxdao.h>			// MFC DAO database classes
#endif // _AFX_NO_DAO_SUPPORT

#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

#if defined(_WIN32_WCE) && (_WIN32_WCE < 0x501)
 #pragma comment(lib, "ccrtrtti.lib")
 #pragma comment(lib, "secchk.lib")
#endif

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#pragma warning(pop)

#endif // !defined(AFX_STDAFX_H__E98F71A8_B361_11D6_BB83_CAEE2E1CB77B__INCLUDED_)
