#include <iostream>
using namespace std;
int main()
{
    int p = 5;
    cout << p << endl;
    cout << &p << endl;

    // Error
    //  int q=&p;
    //  cout<<q<<endl;

    int *r = &p;
    cout << r << endl;
    cout << *r << endl;

    // Error
    //  int *q=5;
    //  cout<<q<<endl;
}