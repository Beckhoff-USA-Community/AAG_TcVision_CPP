///////////////////////////////////////////////////////////////////////////////
// FirstStepsDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "FirstStepsDriver.h"
#include "FirstStepsClassFactory.h"

DECLARE_GENERIC_DEVICE(FIRSTSTEPSDRV)

IOSTATUS CFirstStepsDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CFirstStepsClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CFirstStepsDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CFirstStepsDriver::FIRSTSTEPSDRV_GetVersion( )
{
	return( (FIRSTSTEPSDRV_Major << 8) | FIRSTSTEPSDRV_Minor );
}

