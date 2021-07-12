#ifndef pcrap_os_h
#define pcrap_os_h

#ifdef _WIN32
    #include <io.h>
#elif __APPLE__
    #include <sys/uio.h>
    #include <unistd.h>
#else
    #include <sys/io.h>
    #include <unistd.h>
#endif

#include "../src/object.h"
#include "library.h"

#ifdef _WIN32
#define REMOVE remove
#define ACCESS _access
#else
#define REMOVE unlink
#define ACCESS access
#endif

#define FAILED NUMBER_VAL(-1)

ObjLibrary* createOsLibrary();

#endif
