#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/*int main() {
    int n,nam=0,tuan=0,ngay=0;
    cin >> n;
    nam=n/365;
    tuan=(n-365*nam)/7;
    ngay=n-365*nam-7*tuan;
    cout << nam << tuan << ngay;
    return 0;
}*/

int main()
{
    float a,b,c,tam;
    cin >> a>>b>>c;
    if (a>b)
    {
        tam=a;
        a=b;
        b=tam;
    }
    if (a>c)
    {
        tam=a;
        a=c;
        c=tam;
    }if (b>c)
    {
        tam=b;
        b=c;
        c=tam;
    }
    cout << a<<b<<c;
    return 0;
}
