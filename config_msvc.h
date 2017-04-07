/* Define to 1 if you have the `ftime' function. */
#define HAVE_FTIME 1

/* ODBC support through Microsoft ODBC. */
#define HAVE_MS_ODBC 1

/* thread support through Microsoft threads. */
#define HAVE_MS_THREAD 1

/* XML support through Microsoft XML. */
#define HAVE_MS_XML 1

/* ODBC support */
#define HAVE_ODBC 1

/* thread support */
#define HAVE_THREAD 1

/* XML support */
#define HAVE_XML 1

#if defined(_WIN32) || defined(_WIN64)
#pragma warning(disable : 4250 4251 4786 4290)
#endif

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0400
#endif
