#include <ctype.h>
#include <errno.h>
#include <sys/types.h>

#ifdef HAVE_UNISTD_H
#  include <unistd.h>
#endif
#ifndef NO_FCNTL_H
#  include <fcntl.h>
#endif

#if defined(STDC_HEADERS) || !defined(NO_STDLIB_H)
#  include <stdlib.h>
#else
   extern int errno;
#endif

/* ========================================================================
 * Put string s in lower case, return s.
 */
char *strlwr(char *s)
{
    char *t;
    for (t = s; *t; t++) *t = tolow(*t);
    return s;
}


