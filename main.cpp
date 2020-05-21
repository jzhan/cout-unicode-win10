#include <iostream>
#include <windows.h>
#include <codecvt>

int main() {
    std::wcout.imbue(std::locale(std::locale::classic(), new std::codecvt_utf8_utf16<wchar_t>()));
    SetConsoleOutputCP(CP_UTF8);
    std::wcout << L"\xF0\x9F\x9A\x97";
    
    return 0;
}