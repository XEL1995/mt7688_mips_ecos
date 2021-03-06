/* -*- Mode: C; tab-width: 4 -*-
 *
 * Copyright (c) 1997-2004 Apple Computer, Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once
#include "afxwin.h"


// CFirstPage dialog

class CFirstPage : public CPropertyPage
{
DECLARE_DYNAMIC(CFirstPage)

public:
CFirstPage();
virtual ~CFirstPage();

// Dialog Data
enum { IDD = IDD_FIRST_PAGE };

protected:
virtual void DoDataExchange(CDataExchange* pDX);        // DDX/DDV support
virtual BOOL OnSetActive();
virtual BOOL OnKillActive();


DECLARE_MESSAGE_MAP()

private:

CFont m_largeFont;

public:

CStatic m_greeting;
};
