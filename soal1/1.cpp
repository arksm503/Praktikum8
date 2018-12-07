#include <iostream>

using namespace std;

int fibon (int n)
{
    int a = 1;
    int b = 1;
    int c = 1;
    for (int i = 3; i<=n; i++)
    {
        c = b + a;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    int n;

    cout<< "Masukan Bilangan : ";cin>>n;
    cout<<fibon(n)<<endl;

}
