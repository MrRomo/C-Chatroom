#include "commons.h"

void DieWithError(char *errorMessage)
{
    perror(errorMessage);
    exit(EXIT_FAILURE);
}


void reset_stdout()
{
	printf("%s", "> ");
	fflush(stdout);
}

