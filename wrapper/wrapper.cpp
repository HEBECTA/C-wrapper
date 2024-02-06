#include "wrapper.h"

#ifdef __cplusplus

int createObject(hObject * pHandle)
{
    try {

        *pHandle = static_cast<hObject>(new Object());

    } catch (...) {
        return EXCEPTION;
    }

    return SUCCESS;
}

int deleteObject(hObject handle)
{
    try {

        Object * obj = static_cast<Object *>(handle);

        delete obj;

    } catch (...) {
        return EXCEPTION;
    }

    return SUCCESS;
}

int increaseObject(hObject handle)
{
    try {

        Object * obj = static_cast<Object *>(handle);

        obj->increase();

    } catch (...) {
        return EXCEPTION;
    }

    return SUCCESS;
}

int receiveValue(hObject handle, int * pReturnValue)
{
    try {

        Object * obj = static_cast<Object *>(handle);

        *pReturnValue = obj->a;

    } catch (...) {
        return EXCEPTION;
    }

    return SUCCESS;
}

#endif