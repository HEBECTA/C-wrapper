#ifndef WRAPPER_H
#define WRAPPER_H

typedef void * hObject;

#define SUCCESS 0
#define EXCEPTION 1
#define ERROR 2

#ifdef __cplusplus
#include "../cplusplus/header.hpp"
extern "C" {
#endif

    int createObject(hObject * pHandle);
    int deleteObject(hObject handle);
    int increaseObject(hObject handle);
    int receiveValue(hObject handle, int * pReturnValue);

#ifdef __cplusplus
}
#endif

#endif