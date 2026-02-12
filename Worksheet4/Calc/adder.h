// begin = adder.h ============

#ifndef MATHSLIBADDERH
#define MATHSLIBADDERH

#if defined(_WIN32) || defined(WIN32)
#ifdef mathsSTATIC
  // building/using a static library
#define MATHSLIBAPI
#else
#ifdef mathsEXPORTS
#define MATHSLIBAPI __declspec(dllexport)
#else
#define MATHSLIBAPI __declspec(dllimport)
#endif
#endif
#else
  // not on Windows
#define MATHSLIBAPI
#endif

MATHSLIBAPI int add(int a, int b);

#endif

// end = adder.h ============
