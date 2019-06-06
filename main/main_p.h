/*
*   Copyright (c) 1998-2002, Darren Hiebert
*
*   This source code is released for free distribution under the terms of the
*   GNU General Public License version 2 or (at your option) any later version.
*
*   Main part private interface to main.c
*/
#ifndef CTAGS_MAIN_MAIN_PRIVATE_H
#define CTAGS_MAIN_MAIN_PRIVATE_H

/*
*   INCLUDE FILES
*/
#include "general.h"  /* must always come first */

/*
*   FUNCTION PROTOTYPES
*/
extern int ctags_cli_main (int argc, char **argv);
extern bool createTagsForEntry (const char *const entryName);
extern bool sayHi(const char *const entryName);
extern void genTags (const char *const filename);

#endif  /* CTAGS_MAIN_MAIN_PRIVATE_H */
