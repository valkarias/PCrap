#include "library.h"

NativeLibraries libraries[] = {
    {"Math", &createMathLibrary},
    {"Os", &createOsLibrary},
    {"Random", &createRandomLibrary},

    // -1
    {NULL, NULL}
};

ObjLibrary* importLibrary(int index) {
    return libraries[index].library();
}

int getNativeModule(char* name, int length) {
    for (int i = 0; libraries[i].library != NULL; i++) {
        if (strncmp(libraries[i].name, name, length) == 0) {
            return i;
        }
    }

    
    return -1;
}