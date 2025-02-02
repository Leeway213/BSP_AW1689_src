/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    pch.h

Abstract:

    Network Kernel Debugger Extensibility DLL precompiled headers.

Author:

    Karel Danihelka (kareld)

--*/

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201 4214)

#include <ntddk.h>
#include <stdio.h>
#include <stddef.h>
#include <usbspec.h>
#include <kdnetshareddata.h>
#include <kdnetextensibility.h>
#include <kdnetusbfn.h>
#include <kdnetusbfnmp.h>
#include "sunxi.h"

#pragma warning(default:4201 4214)
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif

