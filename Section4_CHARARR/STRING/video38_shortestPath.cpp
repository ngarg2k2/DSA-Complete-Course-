#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int x = 0, y = 0;
    char pos[100];
    cin.getline(pos, 100);
    // cout<<pos<<endl;
    int i = 0;
    int len = strlen(pos);
    // cout<<x<<endl;
    // cout<<y<<endl;
    // cout<<len<<endl;
    while (len--)
    {
        if (pos[i] == 'n' || pos[i] == 'N')
        {
            y = y + 1;
        }
        if ((pos[i] == 's' || pos[i] == 'S'))
        {
            y = y - 1;
        }
        if ((pos[i] == 'e' || pos[i] == 'E'))
        {
            x = x + 1;
        }
        if ((pos[i] == 'w' || pos[i] == 'W'))
        {
            x = x - 1;
        }
        i++;
    }
    // cout<<x<<endl;
    // cout<<y<<endl;
    if (y > 0)
    {
        while (y--)
        {
            cout << "N";
        }
    }
    else if (y < 0)
    {
        y = y * -1;
        while (y--)
        {
            cout << "S";
        }
    }
    if (x > 0)
    {
        while (x--)
        {
            cout << "E";
        }
    }
    else if (x < 0)
    {
        x = x * -1;
        while (x--)
        {
            cout << "W";
        }
    }
}