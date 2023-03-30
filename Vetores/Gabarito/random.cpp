#include <windows.h>

int main()
{
    for(int i = 0; i < 1000; i++)
    {
        MessageBox(NULL, "YOU SUCK AND I HATE YOU", "Error", MB_OK | MB_ICONERROR);
    }

    return 0;
}