#include "Header.h"

int main()
{
    resizeConsole(700, 500);
    _setmode(_fileno(stdout), _O_U16TEXT);
    Sort S;
    srand(unsigned(time(NULL)));
    S.menu();
    cout << "DvKiTe";
    system("pause");
    return 0;
}
