
#ifndef _COMMONSFUNCTIONS
#define _COMMONSFUNCTIONS

#include <stdio.h> /* for perror() */
#include <stdlib.h> /* for exit() */

void DieWithError(char *errorMessage);
void reset_stdout();
void str_trim_lf(char *arr, int length);

#include "commons.c"

#endif