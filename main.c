#include <stdio.h>
#include "./wrapper/wrapper.h"

int main()
{
    int res = SUCCESS;
    int objValue = 0;
    hObject obj;

    printf("before createObject\n");
    res = createObject(&obj);
    if (res != SUCCESS)
        return res;


    printf("before receiveValue\n");
    res = receiveValue(obj, &objValue);
    if (res != SUCCESS)
        return res;

    printf("receiveValue %d\n", objValue);

    printf("before increaseObject\n");
    res = increaseObject(obj);
    if (res != SUCCESS)
        return res;

    printf("before receiveValue\n");
    res = receiveValue(obj, &objValue);
    if (res != SUCCESS)
        return res;

    printf("receiveValue %d\n", objValue);
    

    printf("before deleteObject\n");
    res = deleteObject(obj);

    return res;
}