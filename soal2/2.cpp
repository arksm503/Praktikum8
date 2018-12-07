#include <iostream>

using namespace std;

int operasi(int a, int b){

    if(b<=1){
        return a;
    }
    else
        cout<<a<<" + ";
        return operasi(a,b-1);

    }

int main()
{
    int a,b;
    cout<<"Masukan A : ";cin>>a;
    cout<<"Masukan B : ";cin>>b;
    cout<<a<<" x "<<b<<" = ";
    cout<<operasi(a,b);
}
