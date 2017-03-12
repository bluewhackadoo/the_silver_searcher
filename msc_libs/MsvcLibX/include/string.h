/*****************************************************************************\
*                                                                             *
*   Filename:	    string.h						      *
*                                                                             *
*   Description:    MsvcLibX extensions to string.h.			      *
*                                                                             *
*   Notes:	    							      *
*                                                                             *
*   History:								      *
*    2017-02-28 JFL Created this file.					      *
*    2017-03-03 JFL Added the prototype for strndup().			      *
*									      *
*         � Copyright 2017 Hewlett Packard Enterprise Development LP          *
* Licensed under the Apache 2.0 license - www.apache.org/licenses/LICENSE-2.0 *
\*****************************************************************************/

#ifndef	_MSVCLIBX_string_H
#define	_MSVCLIBX_string_H	1

#include "msvclibx.h"

#include UCRT_INCLUDE_FILE(string.h) /* Include MSVC's own <string.h> file */

#ifdef __cplusplus
extern "C" {
#endif

/* These are standard routines, but Microsoft thinks not */
#define strdup _strdup		/* This one _is_ standard */

/* Additional routines in MsvcLibX */
char *strndup(const char *s, size_t size); 

/************************ MS-DOS-specific definitions ************************/

#ifdef _MSDOS	/* Automatically defined when targeting an MS-DOS application */

#endif /* defined(_MSDOS) */

/************************ Win32-specific definitions *************************/

#ifdef _WIN32	/* Automatically defined when targeting a Win32 application */

#endif /* defined(_WIN32) */

/********************** End of OS-specific definitions ***********************/

#ifdef __cplusplus
}
#endif

#endif /* defined(_MSVCLIBX_string_H)  */
