/* ----------------------------------------------------------------------------
 *         ATMEL Microcontroller Software Support
 * ----------------------------------------------------------------------------
 * Copyright (c) 2009, Atmel Corporation
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * Atmel's name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 */


#ifndef _DBGU_CONSOLE_
#define _DBGU_CONSOLE_

#include <stdint.h>
#include <stdarg.h>

#include "configure.h"

#if defined(CONFIGURE_TRACE)
#define TRACE_DEBUG(fmt, ... )      DBGU_Trace(fmt,  ##__VA_ARGS__)
#else
#define TRACE_DEBUG(fmt, ... )      { }
#endif

/** Console baudrate always using 115200. */
#define CONSOLE_BAUDRATE    115200

extern void DBGU_ConsoleUseDBGU(void);
extern void DBGU_ConsoleUseUSART0(void);

extern void DBGU_Configure( uint32_t dwBaudrate, uint32_t dwMasterClock ) ;
extern void DBGU_PutChar( uint8_t uc ) ;
extern void DBGU_PutStr(const char* s);
extern void DBGU_PutBuffer(const uint8_t* s, int len);
extern uint32_t DBGU_GetChar( void ) ;
extern uint32_t DBGU_IsRxReady( void ) ;
extern void DBGU_Trace(const char *fmt,  ... );

#endif /* _DBGU_CONSOLE_ */
