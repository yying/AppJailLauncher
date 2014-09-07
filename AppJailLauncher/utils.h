// utils.h : Header file that defines the prototypes of utility functions

#pragma once

#include "stdafx.h"
#include "common.h"

HRESULT SocketCreateAndListen(USHORT usPort, SOCKET *pSocket);
HRESULT FindOrCreateAppContainerProfile(LPCTSTR pszChildFilePath, PSID *ppSid);
HRESULT GetAppContainerSid(LPCTSTR pszChildFilePath, PSID *ppSid);
HRESULT DestroyAppContainerProfile(LPCTSTR pszChildFilePath);
HRESULT AddOrRemoveAceOnFileObjectAcl(
	BOOL IsRemoveOperation,
	LPCTSTR pszFilePath,
	PSID pSid,
	DWORD dwAccessMask
	);
HRESULT CreateLimitProcessTimeJobObject(DWORD dwTimeout, PHANDLE phJob);
HRESULT CreateAppContainerWorker(
	SOCKET s,
	HANDLE hJob,
	PSID pAppContainerSid,
	LPCTSTR pszChildFilePath,
	LPCTSTR *pszCapabilities
	);