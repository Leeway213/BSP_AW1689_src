/** @file
*
*  Copyright (c) 2007-2016, Allwinner Technology Co., Ltd. All rights reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
**/

//
// Define the tracing flags.
//
// Tracing GUID - 605d4f5b-4118-4f4d-a2af-a6108644ec5f
//

#define WPP_CONTROL_GUIDS                                              \
    WPP_DEFINE_CONTROL_GUID(                                           \
        I2STraceGuid, (605d4f5b,4118,4f4d,a2af,a6108644ec5f), \
                                                                            \
        WPP_DEFINE_BIT(MYDRIVER_ALL_INFO)                              \
        WPP_DEFINE_BIT(TRACE_DRIVER)                                   \
        WPP_DEFINE_BIT(TRACE_DEVICE)                                   \
        WPP_DEFINE_BIT(TRACE_QUEUE)                                    \
        )                             

#define WPP_FLAG_LEVEL_LOGGER(flag, level)                                  \
    WPP_LEVEL_LOGGER(flag)

#define WPP_FLAG_LEVEL_ENABLED(flag, level)                                 \
    (WPP_LEVEL_ENABLED(flag) &&                                             \
     WPP_CONTROL(WPP_BIT_ ## flag).Level >= level)

#define WPP_LEVEL_FLAGS_LOGGER(lvl,flags) \
           WPP_LEVEL_LOGGER(flags)

#define WPP_LEVEL_FLAGS_ENABLED(lvl, flags) \
           (WPP_LEVEL_ENABLED(flags) && WPP_CONTROL(WPP_BIT_ ## flags).Level >= lvl)

//
// This comment block is scanned by the trace preprocessor to define our
// Trace function.
//
// begin_wpp config
// FUNC Trace{FLAG=MYDRIVER_ALL_INFO}(LEVEL, MSG, ...);
// FUNC TraceEvents(LEVEL, FLAGS, MSG, ...);
// end_wpp
//

#define DEBUG_LEVEL_FATAL       0
#define DEBUG_LEVEL_ERROR       1
#define DEBUG_LEVEL_WARNING     2
#define DEBUG_LEVEL_INFORMATION 3
#define DEBUG_LEVEL_TERSE       4
#define DEBUG_LEVEL_VERBOSE     5

extern unsigned long g_DebugLevel;

#define DebugPrint(_LEVEL_, _FORMAT_, ...) \
if (g_DebugLevel >= _LEVEL_) \
{ \
	DbgPrintEx(DPFLTR_IHVDRIVER_ID, DPFLTR_ERROR_LEVEL, "Audio I2S :%s %s (%d): ", __TIME__, __FUNCTION__, __LINE__); \
    DbgPrintEx(DPFLTR_IHVDRIVER_ID, DPFLTR_ERROR_LEVEL, _FORMAT_, __VA_ARGS__); \
    DbgPrintEx(DPFLTR_IHVDRIVER_ID, DPFLTR_ERROR_LEVEL, "\n"); \
} 

#define DbgPrint_E(...) DebugPrint(DEBUG_LEVEL_ERROR, __VA_ARGS__)
#define DbgPrint_W(...) DebugPrint(DEBUG_LEVEL_WARNING, __VA_ARGS__)
#define DbgPrint_I(...) DebugPrint(DEBUG_LEVEL_INFORMATION, __VA_ARGS__)
#define DbgPrint_T(...) DebugPrint(DEBUG_LEVEL_TERSE, __VA_ARGS__)
#define DbgPrint_V(...) DebugPrint(DEBUG_LEVEL_VERBOSE, __VA_ARGS__)

#define FunctionEnter() DbgPrint_V("Entered.")
#define FunctionExit(_STATUS_) DbgPrint_V("Exit with 0x%lx.", _STATUS_)
