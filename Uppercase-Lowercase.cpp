#include <iostream>
#include <conio.h>
#include <cstring>
#include <string>
using namespace std;
int main()
{

    char text[50];
    cin.getline(text, 50);
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] >= 97 && text[i] <= 122)
        {
            text[i] = text[i] - 32;
        }
        else if (text[i] >= 65 && text[i] <= 90)
        {
            // cout << text[i];
        }

        cout << text[i];
    }
    getch();
    return 0;
}