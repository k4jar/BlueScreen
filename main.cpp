#include <iostream>
#include <Windows.h>

int main ()
{
    WCHAR fileName[] = L"\\\\.\\globalroot\\device\\condrv\\kernelconnect";
    WIN32_FILE_ATTRIBUTE_DATA data;
    GetFileAttributesEx (fileName, GetFileExInfoStandard, &data);
}