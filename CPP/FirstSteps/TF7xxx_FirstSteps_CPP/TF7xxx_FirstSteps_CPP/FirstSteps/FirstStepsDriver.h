///////////////////////////////////////////////////////////////////////////////
// FirstStepsDriver.h

#ifndef __FIRSTSTEPSDRIVER_H__
#define __FIRSTSTEPSDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define FIRSTSTEPSDRV_NAME        "FIRSTSTEPS"
#define FIRSTSTEPSDRV_Major       1
#define FIRSTSTEPSDRV_Minor       0

#define DEVICE_CLASS CFirstStepsDriver

#include "ObjDriver.h"

class CFirstStepsDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl FIRSTSTEPSDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(FIRSTSTEPSDRV)
	VxD_Service( FIRSTSTEPSDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __FIRSTSTEPSDRIVER_H__